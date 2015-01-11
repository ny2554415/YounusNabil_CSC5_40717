/*
* File: main.cpp
* Author: Nabil Younus
* Purpose: Calculate Stock Comission (Gaddis_8thEd_Chap2_Prob17)
* Created on January 11, 2015, 1:16 PM
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
    float nostck = 750; //number of stocks bought
    float echstck = 35; //price of each stock in $
    float cmsnptg = 2; //percentage of commission for stock broker
    
    //calculate amount,commission and total
    float stckprc = nostck*echstck; //amount paid for stock
    float cmssn = stckprc*cmsnptg/CONVPCT; //amount of commission
    float total = stckprc+cmssn; //total amount paid
//Output the results
    cout<<"The amount paid for the stock alone is $"<<stckprc<<endl;
    cout<<"The amount of the commission is $"<<cmssn<<endl;
    cout<<"The total amount paid is $"<<total<<endl;
return 0;
}