/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: 
 * Created on January 14, 2015, 10:34 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int CNVLBGM=453.592;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    const float CONC=1e-3f;//Sweetener concentration
    float wtCoke=3.5e2f;//Weight of coke in grams
    float kMouse=5.0;//Quantity of sweetener that kills a mouse
    float wtMouse=3.5e1f;//Weight of mouse in grams
    float kPer, wtDsPer;
    int nCans;
    
    //Input the desired weight of person
    cout<<"Input your desired weight in lbs"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//Convert to grams
    
    //Calculation 
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    
    //Output the limit of what you can drink
    cout<<"Number of cans of diet coke ";
    cout<<"that will kill you = "<<nCans<<endl;
    
    //Exit stage right
   return 0;
}

