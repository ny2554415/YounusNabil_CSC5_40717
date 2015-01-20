/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Celsius to Fahrenheit
 * Created on January 19, 2015, 1:08 PM
 */

//Global Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float Farhen, Cels;
    short convFC;
    //Prompt for Input
    cout<<"This program will convert Celsius to Fahrenheit"<<endl;
    cout<<"Enter Celsius."<<endl;
    cin>>Cels;
    
    //Calculate the conversion
    convFC=(9*Cels/5)+32;
    
    //Output the results
    cout<<"Fahrenheit = "<<convFC<<endl;
return 0;
}