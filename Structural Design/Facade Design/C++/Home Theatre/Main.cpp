#include "HomeTheaterFacade.h"

int main() {

    Amplifier amp;
    Projector projector;
    DVDPlayer dvd;
    Lights lights;
    Screen screen;

    HomeTheaterFacade homeTheater(&amp, &projector, &dvd, &lights, &screen);

    homeTheater.watchMovie("Inception");
    homeTheater.endMovie();

    return 0;
}