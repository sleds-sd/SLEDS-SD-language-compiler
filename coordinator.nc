use ComponentesSensor as compSensor;
use ComponentesCluster as compCluster;
use ComponentesLibMessage as compLibMSG;
use compList;

message type {CHANNOUNCE, ACKCHANNOUNCE}; 

message msgAnnounce { int id; };
message msgAckAnnounce { int id; };


Program  Coordinator () {

	msgAnnounce pktChAnnounce;
	msgAckAnnounce pktAckCh;

	const prob = 0.2;
	const tCluster=25;
	const tExit=0.1;
	
	real RSS;
	int myCH;
	int msgID;
	int myID = compSensor->getSensorId();
	list <int> knownCHs[20];
	list <real> CHsRSS[20];
	list <int> sensorList[20];

	STATE  SelectCH () {
		if (compCluster->selectCH(myID, prob)) {		
			msgID = compLibMSG->GetNextMsgId();	
			pktChAnnounce->id = myID;
			broadcast(CHANNOUNCE, msgID, pktChAnnounce);
			compSensor->role(CH); 
			nextState StoreMembers(); 
		} else {
			compSensor->role(CM); 
			nextState JoinCluster(); 
		}
	}


	STATE JoinCluster () {
		during (tCluster) on recvBroadcast(CHANNOUNCE, msgID, pktChAnnounce){
			RSS = getRSS(pktChAnnounce->Id);
			knownCHs.insert(pktChAnnounce->Id);
			CHsRSS.insert(RSS);
		}
		nextState  ClusterFormation (); 
	}

	STATE ClusterFormation () {
		myCH = compCluster->joinCluster( knownCHs, CHsRSS );
		msgID = compLibMSG->GetNextMsgId();
		pktAckCh->id = myID;
		sensorList.insert(myCH);
		send(ACKCHANNOUNCE, msgID, sensorList, pktAckCh);
		nextState exit;
	}

	STATE StoreMembers () {
		during (tExit) on recv(ACKANNOUNCE, msgID, pktAckCh){
			compCluster->members(pktAckCh->Id); 	  
		}
		nextState exit;
	}
}
