#pragma once
#include<iostream>


class Beverage {

    public:
    struct nutri_info
    {
        int calorie;
        int sugar_content;

        nutri_info(int calorie, int sugar_content) : calorie(calorie), sugar_content(sugar_content){}
    };

    nutri_info* nutri;

    virtual void getNutriValue() = 0;
    
    virtual ~Beverage() {
        if(nutri) delete nutri;
    }

    Beverage(int calorie, int sugar_content) : nutri(new nutri_info(calorie, sugar_content)) {}

    Beverage(Beverage& other) {
        nutri = new nutri_info(other.nutri->calorie, other.nutri->sugar_content); 
    }

    friend std::ostream& operator<<(std::ostream& os, const Beverage* obj) {
        return os 
              << "Calorie Content is " << obj->nutri->calorie << "\n"
              <<  "Sugar Content is " << obj->nutri->sugar_content << "\n";
    }

};