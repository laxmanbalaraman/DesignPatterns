# Facade Design Pattern

A facade provides simplified (**but limited**) interface to complex subsystems.

A facade might provide limited functionality in comparison to working with the subsystem directly. However, it includes only those features that clients really care about.


### When?

Having a facade is handy when you need to integrate your app with a sophisticated library that has dozens of features, but you just need a tiny bit of its functionality. 


### How?

1. Break down the complex system into smaller, independent subsystems, each with its own set of responsibilities and methods.
2.  Implement each subsystem as a separate class with its own methods. These classes represent the individual components of the system.
3. Create a Facade class that provides a simplified interface to interact with the subsystems. This class will contain references to the subsystem objects and offer high-level methods that combine multiple subsystem operations.
4.  The Facade class, implement methods that internally call the appropriate methods of the subsystems to perform complex tasks. These methods should hide the complexity of the underlying subsystems.

##### References 

https://refactoring.guru/design-patterns/facade <br/>
https://refactoring.guru/design-patterns/facade/cpp/example <br/>



