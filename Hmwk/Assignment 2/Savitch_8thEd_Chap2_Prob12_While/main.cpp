/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Babylonian Square root calculator
 *      New version to utilize loops
 *      While implementation 
 * Created on January 13, 2015, 11:35 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Begin execution here
int main(int argc, char** argv) {
    float number,guess,r,count=0;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //Initialize the guess
    guess=number/2;
    while(abs(guess-r)>.01){
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        //Output the first pass
        cout<<"Loop "<<count<<" -> "<<guess<<endl;
    //while(guess!=r);//My preferred technique
    }
          
    
    
    //Exit stage right
    return 0;
}

