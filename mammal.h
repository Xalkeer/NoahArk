//
// Created by busev on 28/10/2024.
//

#ifndef MAMMAL_H
#define MAMMAL_H
#include <string>

#include "animal.h"

class mammal : public animal {
    double weaningDuration;

public:
    mammal(std::string name, std::string color, std::string sound, double weaningDuration);

    void display();

    void display() const;
};



#endif //MAMMAL_H
