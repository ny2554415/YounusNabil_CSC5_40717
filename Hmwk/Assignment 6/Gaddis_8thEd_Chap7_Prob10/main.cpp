/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Exam
 * Created on February 8, 2015, 09:35 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare,initialize variables and arrays 
    int crrct=0,wrong=0;
    const int SIZE=20;
    const char test[SIZE]={'a','d','b','b','c','b','a','b','c','d',
                           'a','c','d','b','d','c','c','a','d','b'};
    char tstAns[SIZE];
    //Prompt user for Answers
    for(int i=0;i<SIZE;i++){
        cout<<"Answer for question: "<<i+1<<" ";
        cin>>tstAns[i];
        while((tstAns[i]!='a')&&(tstAns[i]!='b')&&
                (tstAns[i]!='c')&&(tstAns[i]!='d')){
            cout<<"Incorrect input, please choose a,b,c or d";
            cin>>tstAns[i];
        }
    }
    //Compare results
    for(int i=0;i<SIZE;i++){
        if(tstAns[i]==test[i]){
            crrct++;
        }else wrong++;
    }
    //Output the results
    if(crrct>=15)cout<<"You have passed!"<<endl;
    else cout<<"You have failed!"<<endl;
    cout<<"Total Amount Correct: "<<crrct<<endl;
    cout<<"Total Amount Incorrect: "<<wrong<<endl;
    for(int i=0;i<SIZE;i++){
        if(tstAns[i]!=test[i]){
            cout<<"Incorrect answer: "<<i+1<<endl;
        }
    }
    return 0;
}
