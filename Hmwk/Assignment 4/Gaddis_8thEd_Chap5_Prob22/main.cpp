/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Square Display
 * Created on January 25, 2015, 10:52 PM
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
    //Declare a variable
    int number;
    //Prompt for Input
    cout<<"This program produces a square display for a character"<<endl;
    cout<<"How large do you want the character square"<<endl;
    cin>>number;
    //Loop and Output
    for(int row=1;row<=number;row++){
        for(int col=1;col<=number;col++){
            cout<<"X";
            }
        cout<<endl;
    }
    cout<<endl;
    //Exit Stage Right
    return 0;
    }

   

