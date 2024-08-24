#include "FileSystemEntity.h"
#include <string>
#include <iostream>



// leaf class, does not contain collection of class

class File : public FileSystemEntity {

    string name;
    size_t size;

    public:

    File(const string& name, const size_t size) : name(name), size(size) {}

    size_t getSize() const {
        return size;
    }

    void showDetails() const  {
        cout << "File name is " << name << " and its size is " << size << endl;
    }

};


