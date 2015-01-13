/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: bitcoin conversion
 * Created on January 13, 2015, 10:16 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Begin execution here
int main(int argc, char** argv) {
    //Declare variables and initialize
    float bcToDlr=232.8;    //January 13th,2015 10:18am
    float erToDlr=0.849381; //January 13th,2015 10:18am
    float ynToDlr=118.03;  //January 13th,2015 10:18am
    float bitcoin,dollars,euros,yen;
    //Input the number of bitcoi and then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //Convert to all currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);        
    cout<<bitcoin<<" =   "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    return 0;
}

