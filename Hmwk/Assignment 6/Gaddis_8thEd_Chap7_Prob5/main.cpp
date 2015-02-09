/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Monkey Business
 * Created on February 8, 2015, 1:39 PM
 */

//System libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User libraries

//Global Constants

//Function Prototype
const int Days=7;
const int nApe=3;
int avg[Days][nApe];
//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int min,max,ape,day;
    float avgTot;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Prompt for input
    cout<<"This Program is used to store amounts of food eaten by 3 monkeys."<<endl;
    cout<<"Enter the food intake for each monkey in lbs "<<endl;
    cout<<endl;
    //Prompt User
    for(int ape=0;ape<nApe;ape++){
        for(int day=0;day<Days;day++){
            cout<<"Monkey "<<(ape+1)
                <<", Day "<<(day+1)<<": ";
            cin>>avg[ape][day];//User input
        }cout<<endl;
    }
    for(int ape=0;ape<nApe;ape++){
        for(int day=0;day<Days;day++){
            avgTot+=(avg[ape][day])/Days;
        }
    }
    max=avg[0][0];//
    min=avg[0][0];
    for(int ape=0;ape<nApe;ape++){
        for(int day=0;day<Days;day++){
            if(min>avg[ape][day]){
                min=avg[ape][day];
            }else if(avg[ape][day]>max){
                max=avg[ape][day];
            }
        }
    }
    //Output the results
    cout<<"Average food eaten per day by whole family      : "<<avgTot<<endl;
    cout<<"Least amount of food eaten by any one monkey    : "<<min<<endl;
    cout<<"Greatest amount of food eaten by any one monkey : "<<max<<endl;
    return 0;
}