#pragma once 
#include <iostream>
#include "FurnitureFactory.h"

class ModernChair : public Chair {

    public:

    void sitOn() override{
        std::cout << "Sitting on Modern Chair\n";
    }

};

class ModernTable : public Table {

    public:

    void placeItems() override {
        std::cout << "Place items on Modern Table\n";
    }

};

class ModernFurnitureFactory : public FurnitureFactory{


    public:

    Chair* createChair() override {
        return new ModernChair();
    }

    Table* createTable() override {
        return new ModernTable();
    }
    
};