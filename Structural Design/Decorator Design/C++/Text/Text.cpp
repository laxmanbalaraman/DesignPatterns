#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;


class Text {

    public:
    string text;
    virtual string getText() const = 0;
    virtual ~Text() = default;
    
};


class PlainText : public Text{

    public:

    PlainText(string text) {
        this->text =  text;
    }

    string getText() const override {
        return text;
    }
    
};


class BoldText : public Text{
    shared_ptr<Text> wrapper;
    public:

    BoldText(shared_ptr<Text> obj) : wrapper(obj) {} 

    string getText() const override{
        ostringstream oss;
        oss << "<br>" << wrapper->getText() << "<br/>";
        return oss.str();
    }
    
};


class ItalicText : public Text{
    shared_ptr<Text> wrapper;
    public:

    ItalicText(shared_ptr<Text> obj) : wrapper(obj) {} 

    string getText() const override{
        ostringstream oss;
        oss << "<i>" << wrapper->getText() << "<i/>";
        return oss.str();
    }

};


int main() {

    auto plaintText = make_shared<PlainText>("Hello World");
    auto boldText = make_shared<BoldText>(plaintText);
    auto italicboldText = make_shared<ItalicText>(boldText);

    cout << italicboldText->getText();

}
