# Decorator design pattern

**Also known as Wrapper**

Allow you to extend behaviour to your objects by wrapping these objection inside a special wrapper object.

Example: make a plain icecream and optionally extend it to taste such as adding choco coating, adding some syrup, adding nuts, and adding cherry. Hear each of the item added on top of icecream is wrapper object. it takes the current icecream object and created a new one via an ice cream interface.


#### When?

Use the Decorator pattern when you need to be able to assign extra behaviors to objects at runtime without breaking the code that uses these objects.

The Decorator lets you structure your business logic into layers, create a decorator for each layer and compose objects with various combinations of this logic at runtime. **The client code can treat all these objects in the same way, since they all follow a common interface.**

#### How?

1. Make sure your business domain can be represented as a primary component with multiple optional layers over it.
2. Figure out what methods are common to both the primary component and the optional layers. Create a component interface and declare those methods there.
3. Create decorator class and also have a wrapper object of base type that stores the current object state.
4. implement the interface methods in the decorator class which extends the current object states behavior (wrapper object).
5. Pass in the object to decorator in any order as all the decorator object takes in common interface type object and yields a wrapped object.


**References** <br/>

https://refactoring.guru/design-patterns/decorator <br/>
https://refactoring.guru/design-patterns/composite/cpp/example





