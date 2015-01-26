/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Calories Burned
 * Created on January 22, 2015, 11:34 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float clrspm=3.6;// calories burned per minute
    float clrsbrn;//total calories burned 
    float mins;//time in minutes
    int minmins=05;//minimum minutes
    int maxmins=30;//maximum minutes
    const int increment=5;//time increment
    
    //Headings
    cout<<"Time(minutes)        Calories burned"<<endl;
    cout<<"------------------------------------"<<endl;
            
    //Make the loop
    for (mins = minmins; mins <= maxmins; mins += increment)
    {
        //Calculate calories burned
        clrsbrn=clrspm*mins;
        //Display results
        cout<<"      "<<mins<<"                "<<clrsbrn<<endl;
    }

    return 0;
}

