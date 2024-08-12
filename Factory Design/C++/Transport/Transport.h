#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>

class Transport {

    public:
    
    virtual void loadGoods() const = 0;
    virtual ~Transport() = default;

};


class Ship : public Transport {
    public:
    void loadGoods() const override;

};

class Plane : public Transport {
    public:
    void loadGoods() const override;

};

class Truck : public Transport {
    public:
    void loadGoods() const override; 
};

#endif