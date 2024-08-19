#include <iostream>
#include "Coffee.h"




int main() {

    Beverage* b = new Coffee(10, 20);
    Beverage* c = new Coffee(*b);
    std::cout << b;
    c->nutri->calorie = 100;
    std::cout << c;
    std::cout << b;

}