/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Calculate the average of Values (Gaddis_8thEd_Chap2_Prob5)
 * Created on January 11, 2015, 12:40 PM 
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
    //the 5 items
    float itm1 = 28;
    float itm2 = 32;
    float itm3 = 37;
    float itm4 = 24;
    float itm5 = 33;
    
    //calculate sum and average
    float sum = itm1+itm2+itm3+itm4+itm5;
    float avg = sum/5;
    
    //Output the results
    cout<<"Sum of the five values = "<<sum<<endl;
    cout<<"Average of the five values = "<<avg<<endl;
    return 0;
}

