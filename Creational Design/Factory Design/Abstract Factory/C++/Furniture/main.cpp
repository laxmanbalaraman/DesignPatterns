#include <iostream>
#include "FurnitureFactory.h"
#include "ModernFurnitureFactory.h"
#include "VictorianFurnitureFactory.h"



int main() {


    FurnitureFactory* modernFactory = new ModernFurnitureFactory();

    if(modernFactory) {
        Chair* modernChair = modernFactory->createChair();
        if(modernChair)
            modernChair->sitOn();
        delete modernFactory;
        delete modernChair;
    }


    FurnitureFactory* victorianFactory = new VictorianFurnitureFactory();
    if(victorianFactory) {
        Table* victorianTable = victorianFactory->createTable();
        if(victorianTable)
            victorianTable->placeItems();
        delete victorianFactory;
        delete victorianTable;
    }


}