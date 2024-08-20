# Adapter Design Pattern


Adapter lets two object with incompatiable interfaces to collaborate. 


#### When?


When a function or class expects input of a specific object type, but you have an object of a different type that cannot be directly used, you can use the Adapter design pattern to "adapt" the interface of the object you have into the one that the function or class expects.


Example:
Legacy System Integration: When integrating a new system or component with an existing legacy system that has a different interface.

Third-Party Libraries: When you need to use a third-party library or service that does not match the interface of your application.


#### How?

1. Identify the interface the client expect to use (Target).
2. Identify the object you have and want to adapt (adaptee).
3. Create an adapter class that takes in this object.
4.  Implement the adapter class with Target interface and mould be adaptee object in the target implementation.
<br/>

```

class Target {
    print();
}

Class Adaptee {
    LegacyPrint();
}

Class AdapteeAdapter implements Target {

    Adaptee adaptee;
    AdapteeAdapter(adaptee) : adaptee(adaptee) {}

    print() override{
        adaptee.LegacyPrint();
    }
}

main code;

adapter = AdapteeAdapter();
adapter.print() // but iternally its is the  Legacy object that is moulded to do modern print. 

```

**References:**

https://refactoring.guru/design-patterns/adapter <br/>
https://refactoring.guru/design-patterns/adapter/cpp/example <br/>
https://en.wikipedia.org/wiki/Adapter_pattern <br/>