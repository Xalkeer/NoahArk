//
// Created by busev on 28/10/2024.
//

#include "mammal.h"
#include <iostream>
#include "animal.h"
using namespace std;

mammal::mammal(std::string name, std::string color, std::string sound, double weaningDuration)
    : animal(name, color, sound), weaningDuration(weaningDuration) {}


void mammal::display() {
    animal::display();
    cout << "Weaning Duration: " << weaningDuration << " months" << endl;
}