
#include "Car.h"

int main () {

    Engine* petrolEngine = new PetrolEngine();
    Color* blueColor = new BlueCar();
    Car c(petrolEngine, blueColor);
    c.paint();
    c.start();

}