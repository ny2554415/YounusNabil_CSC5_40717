/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Markup
 * Created on January 25, 2015, 4:14 PM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float calculateRetail(float whscst, float markup)
//Executions begin here !
{
float retail;
retail = (whscst * markup/100) + whscst;
return retail;
}
int main(int argc, char** argv){
    //Declare variables
    float whscst;
    float markup;
    float total;
    float calculateRetail (float, float);
    //Prompt for Input
    cout<<"This program calculates the markup price"<<endl;
    cout<<"Enter the wholesale price of the item"<<endl;
    cin>>whscst;
    if( whscst < 0 )
    {
    cout<<"Invalid entry, Please enter a positive price"<<endl;
    cin>>whscst;
    }
    cout<<"Enter the markup percentage of the item"<<endl;
    cin>>markup;
    if(markup < 0)
    {
    cout<<"Invalid entry, Please enter positive percentage"<<endl;;
    cin>>markup;
    }
   
    total = calculateRetail(whscst, markup);
    cout<<fixed<<setprecision(2);
    cout<<"The retail price is $"<<total<<endl;
    cout<<endl;
    return 0;
    }