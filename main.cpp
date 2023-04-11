//
//  main.cpp
//  CS 232 Gem
//
//  Created by Melissa Gio on 4/5/23.
//

#include <iostream>
#include "Gem.h"

using namespace std;

int main() {
   //declarations
    int userNum;
    Gem myGem;
    //get user input
    cout << "Enter an odd number: ";
    cin >> userNum;
    
    myGem.setSide(userNum);
    //calculations
    
    
    //output
    myGem.displayGem();
    
    return 0;
}
