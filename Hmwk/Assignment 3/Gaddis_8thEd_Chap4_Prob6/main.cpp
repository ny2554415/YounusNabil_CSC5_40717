/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Mass and Weight
 * Created on January 19, 2015, 9:14 PM
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
    float mass;
    float weight;
    //Prompt for Input
    cout<<"This program calculates the weight of an object in Newtons"<<endl;
    cout<<"Enter the mass of the object."<<endl;
    cin>>mass;
    //Calculate the Weight
    weight=mass*9.8;
    //Output the results
    cout<<"The weight of object is = "<<weight<<" Newtons"<<endl;
    if(weight>1000)
        cout<<"Object is too heavy!"<<endl;
    else if(weight<10)
        cout<<"Object is too light!"<<endl;
        else
        cout<<"Object is normal"<<endl;
return 0;
}
