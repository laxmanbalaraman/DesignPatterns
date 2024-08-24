#pragma once

#include <string>
#include <memory>
#include <vector>
using namespace std;

class FileSystemEntity {
    string name;
    size_t size;


    public:

    virtual void showDetails() const;
    virtual size_t getSize() const;
    virtual void add (shared_ptr<FileSystemEntity>);
    virtual void remove (shared_ptr<FileSystemEntity>);
    virtual ~FileSystemEntity() = default;

};


