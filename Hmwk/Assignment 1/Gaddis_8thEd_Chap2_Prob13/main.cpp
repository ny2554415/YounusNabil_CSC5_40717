/*
* File: main.cpp
* Author: Nabil Younus
* Purpose: Calculate profit on circuit board (Gaddis_8thEd_Chap2_Prob13)
* Created on 11 January, 2015, 12:57 PM
*/
//Global Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const char CONVPCT=100;
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
//Declare variables
    float cost = 14.95; // cost for the circuit board
    float prft = 35; // percentage of profit
//Calculate selling price
    float sprc = cost*((prft+CONVPCT)/CONVPCT);
    
    //Output the results
    cout<<"The circuit boart was sold at = $"<<sprc<<endl;
    
return 0;
}