/* 
 * File:   main.cpp
 * Author: Samsung
 *
 * Created on January 19, 2015, 2:06 PM
 */
//Global Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float proval, assvalue, taxassd;//value of property,assessment value and tax
    
    //Prompt for Input
    cout<<"This program calculates the assessment value and tax for a property"<<endl;
    cout<<"Enter the value of the Property in $"<<endl;
    cin>>proval;
    //Calculate the results
    assvalue=proval*0.6;//assessment value of property in $
    taxassd=(0.75/100)*assvalue;//property tax, 75 cents for every 100$
    
    //Output the results
    cout<<"       ------------------------------------     "<<endl;
    cout<<"The value of your property is            = $"<<proval<<endl;
    cout<<"The assessment value of your property is = $"<<assvalue<<endl;
    cout<<"The property tax is                      = $"<<taxassd<<endl;
return 0;
}