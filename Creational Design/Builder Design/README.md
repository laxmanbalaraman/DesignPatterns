# Builder Design Pattern


### When?

When you want to create a object that taken in lots of configuration/arguments, you don't want the client to create a big ugly ass construtor. You create the object step by step using Builder desingn pattern.


### How?

Instead of creating the object at once, you create an another class called builder class that builds the object based on different configurations to taste.

Builder design pattern has three components:

+ Product
+ Builder
+ Director (optional)

    #### Product

    Instead of creating the actual product object inside product class, you just define different configuration attributes, thats it! The builder class will take care of assiging prefferd configurations on the fly.


    #### Builder

    The builder creates an empty product and the exposed all the possible setters based on the configuration possible. The based on the client's preference suitable setters can be invoked. once the client is happy, they can intiate generate the product wherein the buidler will return the product based on the set attributes.


    #### Director

    If you want to create multiple objects of same configs, Director can automate the process, where it has the predefined steps of building a common products using the builder.  


<br>

**Identification** : The Builder pattern can be recognized in a class, which has a single creation method and several methods to configure the resulting object. Builder methods often support chaining (for example, someBuilder->setValueA(1)->setValueB(2)->create()).

---

</br>

![Screenshot 2024-08-11 at 21-43-02 Course Design Patterns in Modern C Udemy Business](https://github.com/user-attachments/assets/042574ae-da86-435d-8aee-d51c66a67e50)



**References**: 

[https://refactoring.guru/design-patterns/builder](https://refactoring.guru/design-patterns/builder)

[https://refactoring.guru/design-patterns/builder/cpp/example](https://refactoring.guru/design-patterns/builder/cpp/example)
