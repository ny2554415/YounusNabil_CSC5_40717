/* 
 * File:   main.cpp
 * Author: Nabil
 * Purpose: Utilizing partially filled arrays
 * Created on January 29, 2015, 9:16 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//User Libraries

//Global constants

//Function prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
int lSearch(int,int [],int,int);
void fndVals(int [],int,int[]);

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=100;
    int pFilRow=100,perLine=10;
    int array[ROW]={};
    int found[ROW]={};
   
   
    //Fill the Arrays
    filAray(array,pFilRow);
    //Print the Arrays
    prntAry(array,pFilRow,perLine);
    //Test the liner search
    int val=50;
    fndVals(array,pFilRow,val);
    prntAry(found,pFilRow,perLine);
    
    
    //Exit stage right
    exit(0);
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

int Lsearch(int posStrt,int a[],int n,int val){
    //Loop until you find
    for(int indx=posStrt;indx<n;indx++){
        if(val==a[indx])return indx;
        
    }
    return -1;
}
void fndVals(int a[],int n ,int val,int f[]){
    //Loop until you find all the elements
    //in the array
    int indx;
    do{
        indx=lSearch(count,a,n,val);
        f[count++]=indx;
        count=indx++;
    }while(indx>0&&indx<n);
}