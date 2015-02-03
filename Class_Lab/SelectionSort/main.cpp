/* 
 * File:   main.cpp
 * Author: Nabil
 * Purpose:
 * Created on February 3, 2015, 10:30 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global constants

//Function prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
void swap(int &,int&);// with x or's
void selSort(int [],int);//with a swap function
void minLst(int,int [],int);//finding minimum in lost


//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=1000;
    int pFilRow=100,perLine=10;
    int array[ROW]={};
   
    //Fill the Arrays
    filAray(array,pFilRow);
    //Print the Arrays
    prntAry(array,pFilRow,perLine);
    //Sort using Mark Sort
    selSort(array,pFilRow);
    //print the sorted array
    prntAry(array,pFilRow,perLine);
    
    
  
    //Exit stage right
    exit(0);
}
void minLst(int pos,int a[],int n){
    //declare and set the minimum
    int min=a[pos];
    int indx=pos;
    //Loop and find the minimum in the list
    for(int i=0;i<n-1;i++){
        if(a[i]<min){
            min=a[i];
            indx=i;
                
    }

    
}

void selSort(int a[],int n){
    //declare a swap variable
    bool bSwap;
    //Do while swapping has occurred
    do{
        bSwap=false;
        //swap as we go down the list
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                        
            bSwap=true;
            }
        }
    }while(bSwap);
    }


void swap(int &a,int&b){
    //In place swap using logical exclusive or's
    a=a^b;
    b=a^b;
    a=a^b;
}

void swapMin(int pos,int a[],int n){
    //Swap as you go to place the minimum
    //at the top of the list
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}


//Print perLine Columns for the array output by row
void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Randomly fill the array with 2-digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}