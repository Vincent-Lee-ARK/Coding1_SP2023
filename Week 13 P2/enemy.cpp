#include "enemy.h"
#include <iostream>
using std::cout;

// define the constructor
// has a default value for givenName.
enemy::enemy(string givenName) {
    name = givenName;
    health = 10;
    cout << name << " has appeared!\n";
}

void enemy::status() {
    cout << "My name is " << name << " and my health is ";
    cout << health << ".\n";
}

void enemy::changeHealth(int by) {
    health += by;

    if(health < 0) {
        health = 0;
    }
    else if(health > 10) {
        health = 10;
    }
}

int enemy::getHealth() { 
    return health; 
}

// parameter names don't have to match the header file.
void enemy::setName(string givenName) {
    if(givenName == "Poop") {
        cout << "Uh oh, stinky!\n";
        return;
    }
    
    name = givenName;
}

string enemy::getName() {
    return name;
}