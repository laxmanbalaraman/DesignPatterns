
#ifndef TRANSPORTFACTORY_H
#define TRANSPORTFACTORY_H

#include "Transport.h"
#include <memory>

class TransportFactory {

    public:
    enum class TransportType{
        Ship,
        Plane,
        Truck
    };

    static std::unique_ptr<Transport> createTransport(TransportType type);
    
};

#endif