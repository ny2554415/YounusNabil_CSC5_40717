/* 
 * File:   main.cpp
 * Author: Nabil Younus
 *
 * Created on January 14, 2015, 11:01 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float i;//Interest rate per cent per year
    float t;//Temporary variable
    float l;//loan amount $'s
    float n;//Number of months
    float mp;//Monthly payments $'s
    //Input the variables required
    cout<<"What is the interest rate in per cent per year? (format float)"<<endl;
    cin>>i;
    i/=100*12;//Convert to decimal
    cout<<"What is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly Payments (format integer)"<<endl;
    cin>>n;
    //calculate the monthly payment
    if(i<=0) {
        mp=l/n;
    }else {
        t=pow(l+i,n);
        mp=i*t*1/(t-1);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment = $"<<mp<<endl;
    //Exit stage right!

    return 0;
}

