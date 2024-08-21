#pragma once
#include <iostream>

class Engine {

    public:
    virtual void start() = 0;

};



class PetrolEngine : public Engine {

    public:

    void start() override {
        std::cout << "started Petrol Engine";
    }
};


class DieselEngine : public Engine {

    public:

    void start() override {
        std::cout << "started Diesel Engine";
    }
};