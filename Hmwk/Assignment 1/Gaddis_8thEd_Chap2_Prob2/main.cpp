/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Calculate the sales by the East coast divison (Gaddis_8thEd_Chap2_Prob2)
 * Created on January 8, 2015, 11:11 AM
 */

///System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const char CONVPCT=100;
//Function Prototypes
//Execution begins here!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short Eastsls = 58; //percentage of sales by east coast
    float cpnysls = 8.6; //sales by company in millions
    
    //Calculate the east coast sales
    float Estsale = cpnysls*Eastsls/CONVPCT;
    
    //Output the results
    cout<<"The east coast division generated $"<<Estsale<<" million"<<endl;
    return 0;
}

