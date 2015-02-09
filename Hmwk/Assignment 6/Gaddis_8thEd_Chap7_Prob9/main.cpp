/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Payroll
 * Created on February 8, 2015, 11:46 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and array
    const int ROW=7;
    int ID [ROW]{5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours [ROW];//Amount of hours worked per employee
    float payrate [ROW];//Pay rate per employee
    float wages [ROW];//Employee  wage
    //Prompt user for Input
    for(int i=0;i<ROW;i++){
        cout<<"This program calculates your gross pay"<<endl;
        cout<<"Please enter the employee's hours and pay rate"<<endl;
        cout<<"Employee ID: "<<ID[i]<<endl;
        cout<<"Hours worked: ";
        cin>>hours[i];
        while(hours[i]<0){
            cout<<"Invalid input, please enter a positive value ";
            cin>>hours[i];
        }
        cout<<"Pay rate: ";
        cin>>payrate[i];
        while(payrate[i]<15){
            cout<<"Invalid input, please enter an amount greater or equal to $15 ";
            cin>>payrate[i];
        }
    }
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=0;i<ROW;i++){
        wages[i]=hours[i]*payrate[i];
        cout<<"Employee ID: "<<ID[i]<<endl;
        cout<<"Gross Wages: $"<<wages[i]<<endl;
    } 
    return 0;
}