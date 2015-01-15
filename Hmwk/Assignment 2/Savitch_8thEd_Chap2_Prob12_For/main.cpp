/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Babylonian Square root calculator
 *      New version to utilize loops
 *      For implementation 
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
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //Initialize the guess
    guess=number/2;
    for(int count=1;abs(guess-r)>.01;count++){
        r=number/guess;
        guess=(guess+r)/2;
      
        //Output the first pass
        cout<<"Loop "<<count<<" -> "<<guess<<endl;
    //while(guess!=r);//My preferred technique
    }
          
    
    
    //Exit stage right
    return 0;
}

