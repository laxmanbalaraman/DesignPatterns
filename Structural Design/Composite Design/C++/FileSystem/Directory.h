#include "FileSystemEntity.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>


class Directory : public FileSystemEntity{

    string name;
    size_t size;
    
    vector<shared_ptr<FileSystemEntity>> entities; // could be file (leaf) or an other directory (composite)

    public:

    Directory(const string &name) : name(name), size(0) {}
    
    void showDetails() const override{
        cout << "Directory name is " << name << " and size is " << size << endl;
        for(shared_ptr<FileSystemEntity> entity : entities) {
            entity->showDetails();
        }
    }

    size_t getSize() const override{
        size_t total = 0;

        for(const auto entity : entities) {
            total += entity->getSize();
        }

        return total;
    }

    void add(auto entity) {
        entities.push_back(entity);
        size += entity->getSize();
    }

    void remove(auto entity) {
        auto it = find(entities.begin(), entities.end(), entity);
        
        /// erase the enity
        if (it != entities.end()) {
            entities.erase(it); // Erase the entity itself
        }

        auto dir = dynamic_pointer_cast<Directory>(entity);
        // if the entity is a dir
        if(dir) {
            for(auto child : dir->entities) {
                dir->remove(child);
            }
        }
    }
};