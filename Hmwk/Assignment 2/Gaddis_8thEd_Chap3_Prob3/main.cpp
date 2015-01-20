/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Test Average
 * Created on January 19, 2015, 2:18 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
//Declare variables
float average;//The average of the five test scores
int test1;
int test2;
int test3;
int test4;
int test5;
//Prompt for Input
cout<<"This program calculates the average of 5 test scores"<<endl;
cout<<"Enter test score 1."<<endl;
cin>>test1;
cout<<"Enter test score 2."<<endl;
cin>>test2;
cout<<"Enter test score 3."<<endl;
cin>>test3;
cout<<"Enter test score 4."<<endl;
cin>>test4;
cout<<"Enter test score 5."<<endl;
cin>>test5;
//Calculate the average
average=(test1+test2+test3+test4+test5)/5.0;
//Display the Output
cout<<"The average score is : "<<average<<endl;
return 0;
}

