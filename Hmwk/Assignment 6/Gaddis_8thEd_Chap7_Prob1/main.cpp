/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Largest/smallest Array values
 * Created on February 8, 2015, 1:30 PM
 */
//System libraries
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function Prototype
const int num=10;
int a[num];
//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare variables
    int min,max;
    //Prompt user
    cout<<"Input 10 random numbers."<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];//User input
    }
    min=a[0];
    max=a[0];
    //Finding the max and minimum of the input
    for(int i=1;i<10;i++){
        if(min>a[i]){
            min=a[i];
        }else if(max<a[i]){
            max=a[i];
        }
    }
    //Output the results
    cout<<"Smallest value = "<<min<<endl;
    cout<<"Largest value = "<<max<<endl;
    return 0;
}
