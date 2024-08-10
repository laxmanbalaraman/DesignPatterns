#include <iostream>
#include<vector>

using namespace std;

class Builder {
    public:
    virtual void addPartA() const = 0;
    virtual void addPartB() const = 0;
    virtual void addPartC() const = 0;
};


class Product {


    public:
    vector<string> parts;
    void listParts() {
        for (int i = 0; i < parts.size(); i++) {
            if(i != (parts.size() - 1)) {
                cout << parts[i] << ",";
            } else {
                cout << parts[i] << endl;
            }
        }
    }
};

class ConcreteBuilder : public Builder {

    Product* product = new Product();

    public:

    void addPartA() const override{
        product->parts.push_back("PartA");
    }

    void addPartB() const override{
        product->parts.push_back("PartB");
    }

    void addPartC() const override{
        product->parts.push_back("PartC");
    }

    void reset() {
        product = new Product();
    }

    Product* getProduct() {
        Product* result = product;
        reset();
        return result;
    }

    ~ConcreteBuilder() {
        delete product;
    }

};

class Director {

    Builder* builder;

    public:
    

    void setBuilder(Builder &builder1) {
        builder = &builder1;
    }

    void makeMinimalviableproduct() {
        builder->addPartA();
    }

    void makeFullFeaturedProduct() {
        builder->addPartA();
        builder->addPartB();
        builder->addPartC();
    }

};




int main() {


    ConcreteBuilder b;
    Director d;
    d.setBuilder(b);
    // make a standard product 
    d.makeMinimalviableproduct();
    Product* p2 = b.getProduct();
    p2->listParts();
    delete p2;

    // make anothe standard product
    d.makeFullFeaturedProduct();
    Product* p3 = b.getProduct();
    p3->listParts();
    delete p3;


    // make a custom product
    b.addPartA();
    b.addPartB();
    Product* p1 = b.getProduct();

    p1->listParts();
    delete p1;

}
