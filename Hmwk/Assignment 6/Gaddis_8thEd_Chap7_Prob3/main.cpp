/* 
 * File:   main.cpp
 * Author: Samsung
 * Purpose: Chips and Salsa
 * Created on February 8, 2015, 2:27 PM
 */
//System Libraries
#include <iostream>
#include <string> 
using namespace std;
//User Libraries

//Global Constant

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables    
    string names[5];
    int sales[5]; //0-5 array for the # of jars sold
    int i; //In an array 
    int mostSld=0; //Setting the most salsa sold 
    int mostNme;  //the most selling salsa name
    int lestsld=0; //the least selling salsa sold 
    int lestNme; //the least selling salsa name
    int total=0; //the total number of jars (salsa) sold
    //These are the 5 salsa names 
    names[0]="Mild"; 
    names[1]="Medium";
    names[2]="Sweet";
    names[3]="Hot";
    names[4]="Zesty";
    cout<<"This program calculates information about salsa's sold"<<endl;
    for (i=0;i<=4;i++)
    { //Prompt user for Input
        
        cout<<"Enter number of "<<names[i]<<" jars sold: ";
        cin>>sales[i];
        total=total+sales[i]; 
    if (i==0) 
    {  
        //setting the salsa names/sales with the lowest and highest sold = i
        mostSld=sales[i]; mostNme=i; lestsld=sales[i]; lestNme=i;  
    } 
    if (mostSld<sales[i]) 
        {    
        mostSld=sales[i]; mostNme=i; 
        }
    if (lestsld>sales[i]) 
        { 
        lestsld=sales[i]; lestNme=i; 
        }
    }
    //Output
    cout<<endl;
    cout<<"Report: "<<endl;
    cout<<"Number sold    Type   "<<endl;
    for (i=0;i<=4;i++){ 
    cout<<"    "<<sales[i]<<"              "<<names[i]<<""<<" "<<endl; 
    }
    
    cout<<"The total sales: "<<total<<" jars"<<endl;
    cout<<"The highest sales: "<<mostSld<<" ("<<names[mostNme]<<" salsa)"<<endl;
    cout<<"The lowest sales: "<<lestsld<<" ("<<names[lestNme]<<" salsa)"<<endl; 

//Exit stage right!
return 0;
}