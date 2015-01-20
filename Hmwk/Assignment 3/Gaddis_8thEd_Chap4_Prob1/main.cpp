/* 
 * File:   main.cpp
 * Author: Nabil Younus 
 * Purpose: Minimum/Maximum
 * Created on January 19, 2015, 7:54 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declaring Variables
    float a, b;
    //Prompt for Input
    cout<<"This program calculates which number is Larger and Smaller."<<endl;
    cout<<"Enter 2 numbers separated by a space"<<endl; 
    cin>>a;
    cin>>b;
    //Output the results
    if(a>b){
        cout<<a<<" is the larger number."<<endl;
        cout<<b<<" is the smaller number."<<endl;
        }
    else{
        cout<<b<<" is the larger number."<<endl;
        cout<<a<<" is the smaller number."<<endl;
        }
    return 0;
}