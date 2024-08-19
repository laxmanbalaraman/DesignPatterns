
#pragma once
#include "Beverage.h"
#include <iostream>


class Coffee : public Beverage {

    public:

    void getNutriValue() override;

    Coffee(int calorie, int sugar_content);

    Coffee(Beverage&other);
    
    //operator
    Coffee& operator=(const Beverage &other);

};

Coffee::Coffee(int calorie, int sugar_content) :
     Beverage(calorie, sugar_content){}



// copy constructor
Coffee::Coffee(Beverage& other) : Beverage(other) {
    std::cout << "copy constructor invoked\n";
}

// = operator can also do prototype design using operator overloading;
// Coffee& Coffee::operator=(const Coffee &other) {
    
// }

void Coffee::getNutriValue() {
    std::cout << "Calorie Content is " << nutri->calorie << "\n"
              <<  "Sugar Content is " << nutri->sugar_content << "\n";
}


