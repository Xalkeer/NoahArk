#include "bird.h"
#include <iostream>

#include "animal.h"
using namespace std;

bird::bird(std::string name, std::string color, std::string sound, double wingLengh)
    : animal(name, color, sound), wingLengh(wingLengh) {}

void bird::display() {
    animal::display();
    cout << "Wing Length: " << wingLengh << " cm" << endl;
}