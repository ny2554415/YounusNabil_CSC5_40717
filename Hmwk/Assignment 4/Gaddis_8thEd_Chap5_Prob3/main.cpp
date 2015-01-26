/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Ocean Levels
 * Created on January 22, 2015, 11:58 AM
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
    float rrate=1.5;//rising rate in millimeters per year
    float years;//years
    float level;//ocean level Risen
    int minyear=1;//starting year
    int maxyear=25;//ending year
    
    //Headings 
    cout<<"Year      Ocean Level Risen"<<endl;
    cout<<"---------------------------"<<endl;
    //Make Loop
    for (years = minyear;years <= maxyear;years++){
        //Calculate ocean level
        level=rrate*years;
        //Display Results
        cout<<years+2014<<"            "<<level<<endl;
    } 
    return 0;
}

