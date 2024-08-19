
#include "USBConnector.h"


int main() {

    // old device that uses microUsbConnector
    MicroUsbconnector oldDevice;
    // adapt the old device to use USB-C
    MicroUsbAdapter adapter(oldDevice);
    adapter.chargeWithUSBC();

}