/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Population
 * Created on January 25, 2015, 10:43 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int strtno, incrs, nodays, popsze;
    //Prompt for Input
    cout<<"This program calculates the population of the organisms"<<endl;
    cout<<"What is the starting number of organisms?"<<endl;
    cin>>strtno;
    cout<<"What is the daily average population increase as percentage? "<<endl;
    cin>>incrs;
    cout<<"What is the number of days they will multiply? "<<endl;
    cin>>nodays;
    popsze = strtno;
    for(int count = 2; count <= nodays; count++)
    {
    popsze = popsze +(strtno * incrs/100);
    cout<<"The size of the population is: "<< popsze<<endl;
    }
    return 0;
    }


