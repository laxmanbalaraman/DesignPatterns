#pragma once
#include <iostream>

class Color {

    public:
    virtual void paint() = 0;

};



class BlueCar : public Color {

    public:

    void paint() override {
        std::cout << "A blue painted car\n";
    }
};


class RedCar : public Color {

    public:

    void paint() override {
        std::cout << "A red painted car\n";
    }
};