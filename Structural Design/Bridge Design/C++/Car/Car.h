#pragma once
#include <iostream>
#include "Engine.h"
#include "Color.h"

class Car {

    Engine *engine;
    Color *color;

    public:

    Car(Engine* engine, Color* color) : engine(engine), color(color) {}

    void paint() {
        color->paint();
    }

    void start() {
        engine->start();
    }

};

