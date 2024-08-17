#include "Database.h"
#include<iostream>


SingletonDatabase* SingletonDatabase::instance = nullptr;

SingletonDatabase* SingletonDatabase::createDatabase() {

    if(!instance)
        return instance = new SingletonDatabase();
    else 
        return instance;

    return nullptr;
}

void SingletonDatabase::loadDatabase() {
    std::cout << "Loading Database...\n";
}


int main() {
    
    SingletonDatabase* db = SingletonDatabase::createDatabase();

    if(db) db->loadDatabase();
    else std::cout << "failed creating db...\n";

    delete db;
}