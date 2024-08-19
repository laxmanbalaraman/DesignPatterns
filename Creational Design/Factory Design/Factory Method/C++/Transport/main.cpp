#include "TransportFactory.h"


int main() {


    std::unique_ptr<Transport> ship = TransportFactory::createTransport(TransportFactory::TransportType::Ship);
    ship->loadGoods();

    std::unique_ptr<Transport> Plane = TransportFactory::createTransport(TransportFactory::TransportType::Plane);
    Plane->loadGoods();

    std::unique_ptr<Transport> Truck = TransportFactory::createTransport(TransportFactory::TransportType::Truck);
    Truck->loadGoods();

    return 0;

}