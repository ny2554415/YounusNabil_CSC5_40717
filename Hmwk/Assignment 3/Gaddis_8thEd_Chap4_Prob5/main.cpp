/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Body Mass Index
 * Created on January 19, 2015, 8:57 PM
 */

//SYSTEM LIBRARIES
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float BMI, weight, height;
    //Prompt for Input
    cout<<"This Program calculates the BMI of a person"<<endl;
    cout<<"Please enter your weight in pounds."<<endl;
    cin>>weight;
    cout<<"Please enter your height in inches."<<endl;
    cin>>height;
    //Calculate BMI
    BMI=(weight*703)/(height*height);

    //Display Output
    if (BMI>25)
        cout<<"You are overweight."<<endl;
    else if(BMI<18.5)
        cout<<"You are underweight."<<endl;
    else
        cout<<"You have Optimal weight."<<endl;
    return 0;
    }