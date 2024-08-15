
# Factory Method & Abstract Factory



## Factory Method


#### When?

When you have so much have options/types in creating an object for a class. i.e. if a subclass has so many sibling classes. It provides interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.

#### How?

+ create a product interface
+ create concreate class for each product types
+ create a factory that creates an object for secified type
+ in the main function create an object of product interface type, but create assign it with sub class type using factory method.

Factory method is just a method that yeilds appropriate subclass objects for each super class types.

![image](https://github.com/user-attachments/assets/7f1b31b9-6062-42fb-8f08-138c714c687d)


## Abstract Factory


#### When?


When you have wide variety of variant for family of related objects; 

Use the Abstract Factory when your code needs to work with various families of related products, but you don’t want it to depend on the concrete classes of those products—they might be unknown beforehand or you simply want to allow for future extensibility.

An interface for factory itself, inaddition to products, so that the factory subclasses can produce variant for each product types


#### How?


create a factory interface that provides implementation facility for each class
create interface class for each products 
create concreate class for each variants;
create concrete class of each variant factory that return object of same variant type of the product family.
 
![image](https://github.com/user-attachments/assets/ff6eb9da-a1f0-4df4-86d2-59e2dbc1619b) <br>
![image](https://github.com/user-attachments/assets/dbe73682-1eb0-4741-b5d0-457294cfac5f)



**References:** <br>
https://refactoring.guru/design-patterns/factory-method <br>
https://refactoring.guru/design-patterns/abstract-factory
