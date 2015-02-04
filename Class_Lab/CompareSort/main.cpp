/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 3, 2015, 11:16 AM
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
void copy(int [],int [],int);
void selcSrt(int [],int);//Selection Sort without Functions
void bublSrt(int [],int);//Bubble Sort without Functions
void markSrt(int [],int);//Mark Sort without Functions

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=100000;
    int pFilRow=100000,perLine=10;
    int array[ROW]={};
    int brray[ROW],crray[ROW];
    //Fill the Arrays
    filAray(array,pFilRow);
    copy(array,brray,pFilRow);
    copy(array,crray,pFilRow);
    //Print the Arrays
    //prntAry(array,pFilRow,perLine);
    //prntAry(brray,pFilRow,perLine);
    //prntAry(crray,pFilRow,perLine);
    //Sort using all Sorts
    int begs=time(0);
    selcSrt(array,pFilRow);
    int begb,ends;begb=ends=time(0);
    bublSrt(brray,pFilRow);
    int begm,endb;begm=endb=time(0);
    markSrt(crray,pFilRow);
    int endm=time(0);
    //Print the total time
    cout<<"Bubble Sort = "<<endb-begb<<"(secs)"<<endl;
    cout<<"Selection Sort = "<<ends-begs<<"(secs)"<<endl;
    cout<<"Mark Sort = "<<endm-begm<<"(secs)"<<endl;
    //Print the sorted array
    //prntAry(array,pFilRow,perLine);
    //prntAry(brray,pFilRow,perLine);
    //prntAry(crray,pFilRow,perLine);
    //Exit stage right
    exit(0);
}

void markSrt(int a[],int n){
    //Apply swapMin from beginning to end
    for(int i=0;i<n-1;i++){
        //Swap elements at the top of the list
        //with the minimum
        for(int j=i+1;j<n;j++){
            //Swap individual elements with smaller
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void bublSrt(int a[],int n){
    //Declare a swap variable
    bool bSwap;
    //Do while swapping has occurred
    do{
        bSwap=false;
        //Swap as we go down the list
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

void selcSrt(int a[],int n){
    //Swap as we go down the list
    for(int i=0;i<n-1;i++){
        //Declare and set the minimum
        int min=a[i],indx=i;
        //Loop and find the minimum in the list
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                indx=j;
            }
        }
        if(i!=indx){
            int temp=a[i];
            a[i]=a[indx];
            a[indx]=temp;
        }
    }
}

void copy(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
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