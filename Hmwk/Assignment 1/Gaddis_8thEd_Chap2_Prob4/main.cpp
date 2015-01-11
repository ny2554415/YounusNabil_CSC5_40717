/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Calculate the restaurant bill with tax and tip.
 * Created on January 8, 2015, 7:34 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;

//Function Prototypes

//Executions begin here
int main(int argc, char** argv) {
     //Declare Variables
    float Bill = 88.67;//the bill
    float tax = 6.75;//percentage of tax
    float tip = 20;//percentage of tip
    //Calculate tax,tip and total
  
    float taxtotal = Bill*tax/CONVPCT; //calculate tax
    float tiptotal = (Bill+taxtotal)*tip/CONVPCT; //calculating tip
    float total = Bill+taxtotal+tiptotal; //calculating total   
     
    //Output the results
    cout<<"Meal cost = $"<<Bill<<endl;
    cout<<"Tax = $"<<taxtotal<<endl;
    cout<<"Tip = $"<<tiptotal<<endl;
    cout<<"Grand Total = $"<<total<<endl;
    
    return 0;
}

