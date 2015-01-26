/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Distance travelled
 * Created on January 25, 2015, 3:29 PM
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
    //Declare variables
    int speed, hour;
    //Prompt for input
    cout<<"This program calculates the distance traveled"<<endl;
    cout<<"What is the speed of the vehicle in MPH? ";
    cin>>speed;
    cout<<"How many hours have you been traveling? ";
    cin>>hour;
    cout<<"Hour      Distance traveled(miles)"<<endl;
    cout<<"---------------------------"<<endl;
    
    //IF
    if((speed>=0)&&(hour>0)){
        //Loop and Output
        for(int Hours; Hours<=hour; Hours++ ){
        int distance = speed*Hours;
        cout<<Hours<<"              "<<distance<<endl;
        }
    }
    
        
    return 0;
}

