/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Created on January 12, 2015, 11:37 AM
 * Purpose: My Car Payment
 */
//System Library
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float intRate=0.0319/12;//percentage of intrest,source capital one
    float msrplus=40000;//Loan ammount for Buick Avenir
    char nPaymnt=60;//number of monthly payments
    //Calculate the monthly payments
    float temp=pow((1+intRate),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs
    cout<<"Interest per year in percent = "<<intRate*100*12<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amout = $"<<msrplus<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    return 0;
}

