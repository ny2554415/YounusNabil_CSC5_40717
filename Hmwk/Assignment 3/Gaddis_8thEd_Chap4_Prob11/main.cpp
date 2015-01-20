/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Math Tutor
 * Created on January 19, 2015, 8:34 PM
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
    int cAnswer;
   
    //Output the Sum
    numOne=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    numTwo=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    cout<<"Complete the following Sum"<<endl;
    cout<<" "<<numOne<<endl;
    cout<<"+"<<numTwo<<endl;
    cout<<"----"<<endl;
    cin>>Answer;
    //Calculate the Answer
    cAnswer=numOne+numTwo;
    //Output the results
    if(Answer==cAnswer){
        cout<<"Congratulations your answer is correct."<<endl;
        }
    else{
        cout<<"Sorry your answer is wrong"<<endl;
        cout<<"The correct answer is = "<<cAnswer<<endl;
                
        }
return 0;
}