#pragma once

#include <string>
#include "Chair.h"
#include "Table.h"


class FurnitureFactory {

    public:

    virtual Chair* createChair() = 0;
    virtual Table* createTable() = 0;

};
