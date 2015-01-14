/* 
 * File:   main.cpp
 * Author: Nabil Younus
 *
 * Created on January 14, 2015, 11:01 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries

//Global constants
const int CNVLBGM=453.592;//Grams per pound
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Assignment 2 Menu
    cout<<"solution 1 Savitch 8thEd Chap 2 Problem 2"<<endl;
    cout<<"Solution 2 Savitch 8thEd Chap 2 Problem 3"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Base upon the choice, display the results
    switch(choice) {
        case 1: {
            cout<<"You have chosen solution 1"<<endl;
            //Declare variables
                const float CONC=1e-3f; //Sweetener concentration
                float wtCoke=3.5e2f; //Weight of coke in grams
                float kMouse=5.0; //Quantity of sweetener that kills a mouse
                float wtMouse=3.5e1f; //Weight of mouse in grams
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
            break;
        }   
        case 2: {
            cout<<"You have chosen solution 2"<<endl;
            cout<<"IT IS USELESSS"<<endl;
            break;
            
            default: cout<<"Incorrect Choice!"<<endl;
            break;
        }
        }
return 0;    
}




