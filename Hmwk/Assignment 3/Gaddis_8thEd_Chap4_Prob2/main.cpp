/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Roman Numeral Converter
 * Created on January 19, 2015, 9:06 PM
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
    char choice;
    //Prompt for Input
    cout<<"This program is a Roman Numeral converter"<<endl;
    cout<<"Enter a number between 1-10 to be converted"<<endl;   
    cin>>choice;
    //Calculate and output
    switch(choice){
        case'1': cout<<"Roman Number = I. "<<endl;
        break;
        case'2': cout<<"Roman Number = II. "<<endl;
        break;
        case'3': cout<<"Roman Number = III. "<<endl;
        break;
        case'4': cout<<"Roman Number = IV. "<<endl;
        break;
        case'5': cout<<"Roman Number = V. "<<endl;
        break;
        case'6': cout<<"Roman Number = VI. "<<endl;
        break;
        case'7': cout<<"Roman Number = VII. "<<endl;
        break;
        case'8': cout<<"Roman Number = VIII. "<<endl;
        break;
        case'9': cout<<"Roman Number = IX. "<<endl;
        break;
        case'10': cout<<"Roman Number = X. "<<endl;
        break;
        default : cout<<"You did not enter a number between 1 to 10."<<endl;
        }
   
return 0;
}
