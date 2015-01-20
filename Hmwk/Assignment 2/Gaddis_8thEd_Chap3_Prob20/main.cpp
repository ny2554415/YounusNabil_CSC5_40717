/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Pizza Pi 
 * Created on January 19, 2015, 3:03 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int PI=3.14159;

//Function Prototypes

//Execution stars here!
int main(int argc, char** argv) {
    //Declare Variables
    float Dia, Area, Rad;
    float nSlices;//number of slices
    float Slice=14.125;//each slice of pizza must have following area (inches)

    //Prompt for Input which is diameter of Pizza
    cout<<"This program calculates the number of slices a Pizza can be divided into"<<endl;
    cout<<"Enter diameter of Pizza in inches."<<endl;
    cin>>Dia;
    //Calculate the radius and slices
    Rad=Dia/2;
    Area=PI*Rad*Rad;
    nSlices=Area/Slice;
    //Display the Output
    cout<<fixed<<setprecision(0);
    cout<<"The number of slices this pizza can be cut into is "<<nSlices<<endl;
    
    return 0;
}

