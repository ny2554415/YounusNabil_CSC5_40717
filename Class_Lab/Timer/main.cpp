/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Timing
 * Created on January 26, 2015, 10:03 AM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each variable
    x=rand()%90+10;
    y=rand()%90+10;
    totTim=10;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt User for Input
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer "<<endl;
    cout<<"Wait for the next prompt"<<endl;
    do{
        endTim=static_cast<unsigned int>(time(0));
        
    }while(endTim-begTim<5);
    cout<<"Your answer is?"<<endl;
    cin>>ans;
    if(ans==(x+y))cout<<"Your are correct"<<endl;
    else cout<<"You are wrong"<<endl;
    
    
    
    

    //Exit stage right!
    return 0;
}

