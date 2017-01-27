//
//  ProjectController.cpp
//  SecondCPPProject
//
//  Created by Martinsen, Kaden on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "ProjectController.hpp"
#include <iostream>

using namespace std;

int ProjectController :: changeNumber()
{
    return 42;
}

void ProjectController :: changeWithPointer(int * numberPointedTo)
{
    //method for grabbing input from keyboard
//    cout << "type in a number please " <<endl;
//    int derpy;
//    cin >> derpy;
    
    *numberPointedTo += 9000;
}

void ProjectController :: start()
{
    
    
    int myNumber = 23445;
    
    int * numberPointer = &myNumber;
    
    cout << myNumber << endl;
    tryNumbers(myNumber);
    cout << "here is my number again: " << myNumber << endl;
    myNumber = changeNumber();
    cout << "Changed? " << myNumber << endl;
    
    changeWithPointer(numberPointer);
    cout << "changed?? " << myNumber << endl;
    int newNumber = favoriteNumber();
    cout << newNumber;
}

void ProjectController ::tryNumbers(int provideNumber)
{
     cout << "The number you get is: " << provideNumber << endl;
    provideNumber = (8 + 42 + 34632) / provideNumber;
    cout << provideNumber << " is the new value" << endl;
}

int ProjectController :: favoriteNumber()
{
    cout << " whats your favorite number?" << endl;
    int favNum;
    cin >> favNum;
    cout << "your favorite number is: " << favNum << endl;
    return 0;
    
}
