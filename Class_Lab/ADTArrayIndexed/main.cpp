/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose ADTArray Indexed
 * Created on February 9, 2015, 9:24 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries
#include "Array.h"
//Global Constants

//Function prototypes
Array *filAray(int);
void prntAry(const Array *,int);
void destroy(Array *);

//Execution begins here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Fill the array ADT
    int size=100,perLine=10;
    Array *array=filAray(size);
    //Print the array
    prntAry(array,perLine);
    //Clean up
    destroy(array);
    //Exit stage right!    
    return 0;
}

void destroy(Array *a){
    delete [] a->data;
    delete [] a->indx;
    delete a;
}
void prntAry(const Array *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
        
    }
    cout<<endl;
}
Array *filAray(int n){
    //Make sure valid size for the array
    if(n<=0)return 0;
    //Dynamically create the array ADT
    Array *a=new Array;
    //FIll the array ADT
    a->size=n;
    //Now declare and allocate memory for the array
    a->data=new int[a->size];
    a->indx=new int[a->size];
    //Fill data with 2 digit numbers
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10;
        a->indx[i]=i;
    }
    return a;
}
