# Singleton Design

Ensure that a class has just a single instance. 


#### When?

when you want to have control access to some shared resource—for example, a database or a file. You might want only one object of database created in some cases. you do not want to give access to the client to create multiple objects.


#### How?

+ Make the default constructor private, to prevent other objects from using the new operator with the Singleton class.
+ create a static variable of object type that caches the first object created
+ create a static function that lets user create object
+ This function for first time return a object, for second time return first object that is previously stored in cache variable.


## Multiton


 Allows you to create multiple instances of a class but restricting them based on a key. 

eg   db1onj -> primary db (key)
     db2obj -> second db  (key)

Example: In large systems, you might need multiple database connections to different databases or different schemas within the same database. Instead of creating a new connection every time, a Multiton can be used to manage connections, ensuring that each connection is reused.


#### How?

use a map as a cache variable instead of normal cache variable that store only one object instance. so for each each return the object that is created once in the cache.


<br/>

References: <br>

https://refactoring.guru/design-patterns/singleton <br/>
https://refactoring.guru/design-patterns/singleton/cpp/example <br/>
https://justgokus.medium.com/what-is-the-multiton-design-pattern-eeeb5dd8bc7d 