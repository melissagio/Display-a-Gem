//
//  Gem.cpp
//  CS 232 Gem
//
//  Created by Melissa Gio on 4/5/23.
//

#include "Gem.h"
#include <iostream>
#include <cmath>
using namespace std;


Gem::Gem() {
    side = 5;
}

int Gem::getSide() {
    return side;
}


void Gem::setSide(int sidePar){
    if (side %2 == 1 && side > 5) {
        side = sidePar;
    }
}


void Gem::displayGem() {
    //declarations
    spacesBefore = side - 1;
    spacesBetween = 0;
    spacesAfter = side - 1;
    
    
    //part 1
    drawSpaces(spacesBefore);
    drawStars(1);
    drawSpaces(spacesBefore);
    cout << endl;
    
    
    //part 2
    spacesBefore--;
    spacesBetween ++;
    spacesAfter --;
    for (int i = 0; i < 4; i++) {
        drawSpaces(spacesBefore);
        drawStars(1);
        drawSpaces(spacesBetween);
        drawStars(1);
        drawSpaces(spacesAfter);
        
        cout << endl;
        spacesBetween += 2;
        spacesBefore--;
        spacesAfter--;
        
    }
    
    
    //part 3
    spacesBefore = 1;
    spacesAfter = 1;
    spacesBetween = side;
    drawSpaces(spacesBefore);
    drawStars(1);
    drawSpaces(spacesBetween);
    drawStars(1);
    drawSpaces(spacesAfter);
    cout << endl;
    
    //part 4
    spacesBefore = 2;
    spacesAfter = 2;

    drawSpaces(spacesBefore);
    drawStars(side);
    drawSpaces(spacesAfter);
}


void Gem::drawSpaces(int numOfSpaces) {
    for (int i = 0; i < numOfSpaces; i ++) {
        cout << "-";
    }
}
//using a - in order to visibily see the spaces, also to determine that the program is displaying the correct amount of spaces

void Gem::drawStars(int numOfStars) {
    for (int i = 0; i < numOfStars; i ++) {
        cout << "*";
    }
}

