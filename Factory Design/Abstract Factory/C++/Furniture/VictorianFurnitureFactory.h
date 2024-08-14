#pragma once
#include <iostream>
#include "FurnitureFactory.h"



class VictorianChair : public Chair {

    public:

    void sitOn() override{
        std::cout << "Sitting on Victorian Chair";
    }

};

class VictorianTable : public Table {

    public:

    void placeItems() override {
        std::cout << "Placed items on Victorian Table";
    }

};

class VictorianFurnitureFactory : public FurnitureFactory{


    public:

    Chair* createChair() override {
        return new VictorianChair();
    }

    Table* createTable() override {
        return new VictorianTable();
    }
    
};