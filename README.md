# SLEDS-SD Language Compiler

Implementation of DSL SLEDS-SD. A language aimed at the agile development of centered storage systems for wireless sensor networks.

<h2>Syntax of the SLEDS-SD language</h2>

The syntax of the SLEDS-SD language is shown below. The language uses constructions similar to known programming languages, such as C, but it also includes terms related to the formal method used in the specification of systems, the state machine.

<p align="center">
  <img src="/fonte/syntax-sleds.png" width="550" alt="accessibility text">
</p>

To import components into the application, USE is used. It is also possible to use the components with a different identifier, using the AS with the new identifier. Existing components can be imported, as library components, and components that will be developed, as application components in some cases. When the component does not exist, in the code generation step, the component's interface is generated, along with its functions.

To identify the types of messages, SLEDS-SD uses the MESSAGE TYPE. These identifiers work as listed in the C language, and are a parameter ofActions that involve message exchange. To build the message structure, the message is declared accompanied by an identifier and the message parameters. Subsequently, the structure will be used to declare a packet, which is the message's payload, being one of the parameters ofActionsrelated to the transmission and reception of messages.

The logical part of the application is started after the declaration of a new program, through PROGRAM. A program declaration has an identifier and a list of variables as a parameter. Then, the application constants are declared through CONST, which stores a literal value for an identifier. Then, the variables are declared, which can be of the type integer (INT), real (REAL), string (STRING), boolean (BOLL) and list (LIST).

The execution of the application takes place within blocks of logical code, called states. To declare a state, STATE is used, accompanied by the state identifier, a list of variables as a parameter and a list of actions.
Grammar expressions involve method calls, the logical part of repetition and conditional loops, and list-linked functions
