/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Math Tutor
 * Created on January 19, 2015, 2:25 PM
 */

//Global Libraries
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
//User Libraries

//Global Constants
const int MIN_VALUE=1;
const int MAX_VALUE=500;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned seed=time(0);
    int numOne;
    int numTwo;
    int Answer;
    //Output the Sum
    numOne=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    numTwo=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    cout<<"Complete the following Sum"<<endl;
    cout<<" "<<numOne<<endl;
    cout<<"+"<<numTwo<<endl;
    cout<<"----"<<endl;
    //Output the Solution
    cout<<"Type Answer to check your answer"<<endl;
    cin>>Answer;
    cout<<" "<<numOne<<endl;
    cout<<"+"<<numTwo<<endl;
    cout<<"----"<<endl;
    cout<<" "<<numOne+numTwo<<endl;
    cout<<"----"<<endl;
    
    

    
    
    return 0;
}