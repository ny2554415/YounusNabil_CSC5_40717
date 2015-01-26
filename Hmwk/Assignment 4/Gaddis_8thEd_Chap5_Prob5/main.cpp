/* 
 * File:   main.cpp
 * Author: Samsung
 * Purpose: Membership fees Increase
 * Created on January 25, 2015, 2:32 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float incrs=0.04;//percentage of fee increased
    float currnt=2500;//current fees for membership in $
    int years=1;
    float newfee;
    
    //Loop and Output
    cout<<"This program calculates the membership fee per year of a Country club";
    cout<<"for the next six years."<<endl;
    cout<<"Year      Price"<<endl;
    cout<<"---------------"<<endl;
    while(years<=6){
    newfee = currnt*pow(1+incrs,years);
    cout<<"Year "<<years<<"    $"<<newfee<<" "<<endl;
    years++;
}
    return 0;
}

