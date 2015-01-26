/* 
 * File:   main.cpp
 * Author: Samsung
 * Purpose: Characters for ASCII code
 * Created on January 25, 2015, 2:54 PM
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
    //Declare Variables
    char number=32;
    //Output and loop
    cout<<"This program shows the characters for the ASCII Codes 1-127"<<endl;
    cout<<"0-32 are un printable"<<endl;
    while(number<127){
        cout<<number;
        number++;
    }

    return 0;
}

