/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Illustration Dynamic Memory with a sort
 * Created on February 5, 2015, 10:00 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int *filAray(int);
void prntAray(int *,int,int);
int * markSrt(int *,int);
void swap (int *,int *);
void swap (int &,int &);
void destroy (int *);

//Execution starts here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize our array 
    int size=100;
    int *array=filAray(size);
    //Print the array
    prntAray(array,size,10);
    //sort the array
    int *barray
    //Destroy the arrays
    destroy(array);
    
    //Exit stage right
    return 0;
}
int * markSrt(int *a,int n){
    //allocate array
    if(n<=1)return 0;
    int *b=new int[n];
    //copy information
    for(int i=0;i<n;i++){
        *(b+i)=a[i];
    }
    //Sort the array
    for(int pos=0;pos<n-1;pos++){
        for(int lst=pos+1;lst<n-1;lst++){
            if(*(b+pos)>b[lst])swap(&b[pos],(b+lst));
        }
    }
    return b;
}

void swap (int *x,int *y){
    int temp=*x;
    *x=*y;
    
}

void prntAray(int *a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1)cout<<endl);
        
    }
    cout<<endl;
}

//fill a dynamic array with 2 digit random numbers
int *filAray(int n){
    //Allocate memory
    if(n<=1)return 0;
    int *a=new int[n];
    //Fill with random numbers
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;
        
    }
    return a;
}
void destroy(int *a){
    delete []a;
}

