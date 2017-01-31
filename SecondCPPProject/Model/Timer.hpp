//
//  Timer.hpp
//  SecondCPPProject
//
//  Created by Martinsen, Kaden on 1/31/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    //data members
    clock_t executionTime;
public:
    //constructor
    Timer();
    //methods
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
};

#endif /* Timer_hpp */
