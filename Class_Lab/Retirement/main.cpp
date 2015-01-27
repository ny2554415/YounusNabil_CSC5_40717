/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Use the Babylonian 10 for retirement 
 * Created on January 27, 2015, 9:10 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
//for overloaded functions return type does not matter 
//only the types associated with parameters in the argument list
//pass by reference vs. pass by value does not count
//when overloading the function name
float retirement(float,float,float,int);
void retirement(float &,float,float,float);
//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables from Input
    float salary;
    cout<<"What is your salary?"<<endl;
    cin>>salary;
    float invRate=0.05f;//california.municipalbond.com
    float defPrct=0.25f;//babylonian 10
    float ndSave=salary/invRate;
    float retSav=0;
    float nmYears;
    //Heading
    cout<<"Year  Savings"<<endl;
    cout<<"-------------"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Calculate when we can retire
    for(int year=1;retSav<=ndSave;year++){
        //retSav=retirement(0.0,invRate,defPrct*salary,year);
        retSav=0;
        retirement(retSav,invRate,defPrct*salary,year*1.0f);
        cout<<setw(4)<<year+2015<<" "<<setw(12)<<retSav<<endl;
        
    }
    //Exit stage right
    
    
    return 0;
}
void retirement(float &p,float i,float d,float n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
        
    }
}

float retirement(float p,float i,float d,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
        
    }
    return p;
}