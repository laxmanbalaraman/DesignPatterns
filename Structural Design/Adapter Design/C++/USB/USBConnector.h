#pragma once
#include<iostream>

class UsbCConnector {


    virtual void chargeWithUSBC() = 0;

};



class MicroUsbconnector {


    public:
    void chargeMicroUSB() {
        std::cout << "charging with Micro Usb Connector";
    }
};


class MicroUsbAdapter : public UsbCConnector {


    MicroUsbconnector microUsbConnector;

    public:
    MicroUsbAdapter(MicroUsbconnector &microUsbConnector) : microUsbConnector(microUsbConnector) {}

    void chargeWithUSBC() override {
        microUsbConnector.chargeMicroUSB();
    }

};