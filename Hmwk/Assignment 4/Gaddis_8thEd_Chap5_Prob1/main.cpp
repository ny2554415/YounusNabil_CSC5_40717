/* 
 * File:   main.cpp
 * Author: Nabil Younus 
 * Purpose: Sum of Numbers
 * Created on January 25, 2015, 1:51 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int frstnm;
    int total;
    //Prompt for Input
    cout<<"This program calculates the sum of all numbers uptil the number you enter"<<endl;
    cout<<"Enter a positive number"<<endl;
    cin>>frstnm;
    //Loop and IF
    if(frstnm<=0){
        cout<<"This Input in invalid"<<endl;
    }
    for (int number = 1;frstnm>=number;number++){
        //calculate total
        total+=number;}
    
        //display Output
        cout<<"Total is "<<total<<endl;
    
    return 0;
}

