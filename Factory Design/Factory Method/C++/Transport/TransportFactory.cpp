#include "TransportFactory.h"


std::unique_ptr<Transport> TransportFactory::createTransport(TransportType type) {

    switch (type){
        case TransportType::Ship:
            return std::make_unique<Ship>();
            break;
        case TransportType::Plane:
            return std::make_unique<Plane>();
            break;
        case TransportType::Truck:
            return std::make_unique<Truck>();
            break;
        
        default:
            return nullptr;
            break;
    }
}