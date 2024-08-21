# Bridge Design


Bridge lets you split closely related classes into separate hierarchies. The Bridge pattern lets you split the monolithic class into several class hierarchies.

#### When?


When extending classes lead to cartesian product. 

Eg you have a two types of car and each car can have 2 color variant. if you want to create classes that reprensent these using inheritance, that clean to a cartesian product number of class, here 2^2 = 4.


### How?


1. Separate Whatever you are extending into a new interface and then include that object into the main extender class.

eg create interface for color and induce the color object inside car. intialise the color object and pass to the car object constructor.

<br/> <br/>

**References**

https://refactoring.guru/design-patterns/bridge
