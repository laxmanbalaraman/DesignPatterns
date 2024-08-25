# Composite Design Pattern

lets you compose objects into tree structures and then work with these structures as if they were individual objects.

The Composite pattern provides you with two basic element types that share a common interface: simple leaves and complex containers. A container can be composed of both leaves and other containers. This lets you construct a nested recursive object structure that resembles a tree.

Basically two components:
1. Simple (leaf)
2. Complex containters (node)

complex container can have leaf.

Composite Design provide certain functionalities that are common across this simple and complex.


### When?

When you want to implement a tree-like object structure. When you can create collection of objects and you need to perform same operations to group of object as on the individual objects.

### How?

1. Make sure that the core model of your app can be represented as a tree structure. Try to break it down into simple elements and containers. Remember that containers must be able to contain both simple elements and other containers.

2. Declare the component interface with a list of methods that make sense for both simple and complex components.

3. Create and implement leaf class

4. create and implement Complex class. In this class, provide an array field for storing references to sub-elements. The array must be able to store both leaves and containers, so make sure it’s declared with the component interface type.

5. Finally, define the methods for adding and removal of child elements in the container. This should perform the recursive operation logic.


#### References

https://refactoring.guru/design-patterns/composite <br/>
https://refactoring.guru/design-patterns/composite <br/>



