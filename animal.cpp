//
// Created by busev on 28/10/2024.
//

#include "animal.h"

#include <iostream>
using namespace std;

animal::animal (std::string name, std::string color, std::string sound) {
    this->name = name;
    this->color = color;
    this->sound = sound;
}
void animal::display() {
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Sound: " << sound << endl;
}