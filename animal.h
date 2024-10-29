//
// Created by busev on 28/10/2024.
//

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


class animal {
public:
    std::string name;
    std::string color;
    std::string sound;


    animal(std::string name, std::string color, std::string sound);

    void display();
};




#endif //ANIMAL_H
