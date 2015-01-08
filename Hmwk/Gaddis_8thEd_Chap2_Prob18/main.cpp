/* 
 * File:   main.cpp
 * Author: Nabil Younus
 *
 * Created on January 8, 2015, 8:17 AM
 */
//Global Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
 const char CONVPCT=100;
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    short custSrv=16500;//Customers Surveyed
    char perEDrk=15;//Percentage Energy Drinkers
    char perCDrk=58;//Percentage Citrus Drinkers
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //Output the results
    cout<<"Customers surveyed that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = ";
    cout<<custC<<endl;
    //Exit stage right
    return 0;
}