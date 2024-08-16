# Prototype Design Pattern

Prototype is a creational design pattern that allows cloning objects, even complex ones, without coupling to their specific classes.

#### When?

When you want to multiple object that are having almost same properties. Sometime object instialisation may need costly DB operations or other complex transactions, When you want to create similar such object multiple time, you can just clone the previous object using prototype design

Bascially its just Deep copying of objects nothing much, which employs usage of copy construct, operator overloading of "=" or just some ``clone`` function that facilitate deep copying. Thats it.

<i>or optionally create prototype factory, where the factory cretes object clone based on subclass type.</i>

#### How?

Just do deep copying or shallow copying (based on situation).
Add a clone function in prototype interface.
Each class that inherits this interface implements cloning by:
+ copy constructor
+ operator overloading


**Reference:** <br>

https://refactoring.guru/design-patterns/prototype <br/>
https://refactoring.guru/design-patterns/prototype/cpp/example <br/>
