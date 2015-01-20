/*
* File: main.cpp
* Author: Nabil Younus
* Purpose: Stadium Seat Income generator
* Created on January 18th, 2015, 2:41 PM
*/
//Global Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float seatA=15;//price of seat A in Dollars
    float seatB=12;//price of seat B in Dollars
    float seatC=9;//price of seat C in Dollars
    float Asld,Bsld,Csld;
    //Input the values
    cout<<"How many Class A seats were sold?"<<endl;
    cin>>Asld;
    cout<<"How many Class B seats were sold?"<<endl;
    cin>>Bsld;
    cout<<"How many Class C seats were sold?"<<endl;
    cin>>Csld;
    //Calculate the income
    float incmA=seatA*Asld;//sales for seat A
    float incmB=seatB*Bsld;//sales for seat B
    float incmC=seatC*Csld;//sales for seat C
    float tltinc=incmA+incmB+incmC;//total income generated
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Income generated from the ticket sales: $"<<tltinc<<endl;
    
}