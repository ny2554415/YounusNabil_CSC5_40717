/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Yen and Euros Currency Calculator
 * Created on January 19, 2015, 3:31 PM
 */

//Global Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const float YEN_PER_DOLLAR=117.66;
const float EUROS_PER_DOLLAR=0.86;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float dollar, yen, euros;
    //Prompt for Input
    cout<<"This program calculates the Dollars in Yen and Euros"<<endl;
    cout<<"Enter the number of Dollars you want to convert"<<endl;
    cin>>dollar;
    //Convert to yen and euros
    yen=dollar*YEN_PER_DOLLAR;
    euros=dollar*EUROS_PER_DOLLAR;
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"---------"<<endl;
    cout<<"$"<<dollar<<" = "<<yen<<" Yen"<<endl;
    cout<<"$"<<dollar<<" = "<<euros<<" Euros"<<endl;
return 0;
}