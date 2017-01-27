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

void ProjectController :: start()
{
    tryNumbers(10);
}
void ProjectController :: tryNumbers(int sent)
{
    cout << "The number you get is: " << sent << endl;
    cout << "Your number multiplied by 3 is: " << sent * 3 << endl;
}
