/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Calculate the miles per Gallon (Gaddis_8thEd_Chap2_Prob10)
 *
 * Created on January 8, 2015, 10:30 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {

//Declare variables
short miles = 375; //miles the car has
short gallons = 15; //gallons the car has 
 
//Calculate MPG
short MPG = miles/gallons;

//Output the results
cout<<"The car gets "<<MPG<<"miles per gallon"<<endl;
    return 0;
}

