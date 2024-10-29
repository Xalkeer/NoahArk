//
// Created by busev on 28/10/2024.
//

#include "game.h"
#include "animal.h"
#include <iostream>

#include "bird.h"
#include "mammal.h"
class animal;
using namespace std;

void game::startGame() {
    cout << "Welcome to the game!" << endl;
    cout << "Please select how many animals you want to create:" << endl;
    int nbList;
    cin >> nbList;
    animal *animals[nbList];
    for (int i = 0; i < nbList; i++) {
        cout << "Please select the type of the animal you want to create:" << endl;
        cout << "1. Bird" << endl;
        cout << "2. Mammal" << endl;
        int type;
        cin >> type;
        string name, color, sound;
        cout << "Please enter the name of the animal:" << endl;
        cin >> name;
        cout << "Please enter the color of the animal:" << endl;
        cin >> color;
        cout << "Please enter the sound of the animal:" << endl;
        cin >> sound;
        if (type == 1) {
            double wingLength;
            cout << "Please enter the wing length of the bird:" << endl;
            cin >> wingLength;
            animals[i] = new bird(name, color, sound, wingLength);
        } else if (type == 2) {
            double weaningDuration;
            cout << "Please enter the weaning duration of the mammal:" << endl;
            cin >> weaningDuration;
            animals[i] = new mammal(name, color, sound, weaningDuration);
        }
        std::flush(std::cout);
        std::cin.clear();
        std::cin.ignore();

    }
    for (int i = 0; i < nbList; i++) {
        animals[i]->display();
        cout << "\n"<<endl;
    }
    for (int i = 0; i < nbList; i++) {
        delete animals[i];
    }
}