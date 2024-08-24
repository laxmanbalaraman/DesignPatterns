#include "Directory.h"
#include "File.h"
#include <iostream>
#include <memory>
using namespace std;


int main() {


    auto file1 = make_shared<File>("pic_dir1.jpg", 12);
    auto file2 = make_shared<File>("pic_dir1.png", 15);

    auto dir1 = make_shared<Directory>("dir1");
    dir1->add(file1);
    dir1->add(file1);

    auto root = make_shared<File>("root");
    auto file3 = make_shared<File>("movie_root.mp4", 30);
    root->add(file3);
    root->add(dir1);

    cout << root->getSize() << endl;
    root->showDetails();
    root->remove(dir1);
    cout << root->getSize();
    
}