#include "library.h"

class HomeTheaterFacade {
    private:
        Amplifier* amp;
        Projector* projector;
        DVDPlayer* dvd;
        Lights* lights;
        Screen* screen;

    public:
        HomeTheaterFacade(Amplifier* a, Projector* p, DVDPlayer* d, Lights* l, Screen* s)
            : amp(a), projector(p), dvd(d), lights(l), screen(s) {}

    
    void watchMovie(const std::string& movie) {
        lights->dim(10);
        screen->down();
        projector->on();
        amp->on();
        amp->setVolume(5);
        dvd->on();
        dvd->play(movie);
        std::cout << "Get ready to watch a movie " << movie << std::endl;
    }

    void endMovie() {
        std::cout << "Shutting movie theater down...\n";
        lights->on();
        screen->up();
        projector->off();
        amp->off();
        dvd->off();
    }
};


