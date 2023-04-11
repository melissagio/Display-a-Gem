//
//  Gem.h
//  CS 232 Gem
//
//  Created by Melissa Gio on 4/5/23.
//

#ifndef Gem_h
#define Gem_h
#include <string>

using namespace std;

class Gem {

public:
    int getSide();
    void setSide(int sidePar);
    void displayGem();
    void drawSpaces(int numOfSpaces);
    void drawStars(int numOfStars);
    
    Gem();
private:
    int side;
    int stars;
    int spacesBefore;
    int spacesBetween;
    int spacesAfter;
    
    string output;
    
};




#endif /* Gem_h */
