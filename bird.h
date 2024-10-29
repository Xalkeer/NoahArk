//
// Created by busev on 28/10/2024.
//

#ifndef BIRD_H
#define BIRD_H
#include <string>

#include "animal.h"


class bird : public animal {
    double wingLengh;


public:
    bird(std::string name, std::string color, std::string sound, double wingLengh);

    void display();
};



#endif //BIRD_H
