#include <iostream>

class Amplifier {
    public:
        void on() { std::cout << "Amplifier on\n"; } 
        void off() { std::cout << "Amplifier off\n"; }
        void setVolume(int vol) { std::cout << "Volume set to vol " << vol << std::endl;}
};


class Projector {
    public:
    void on() { std::cout << "Projector on\n"; }
    void off() { std::cout << "Projector off\n"; }
};

class DVDPlayer {
public:
    void on() { std::cout << "DVD Player on\n"; }
    void off() { std::cout << "DVD Player off\n"; }
    void play(const std::string& movie) { std::cout << "Playing movie: " << movie << "\n"; }
};

class Lights {
    public:
        void dim(int level) { std::cout << "Dimming lights to " << level << "%\n"; }
        void on() { std::cout << "Lights on\n"; }
};


class Screen {
    public:
        void down() { std::cout << "Lowering screen\n"; }
        void up() { std::cout << "Raising screen\n"; }
};  