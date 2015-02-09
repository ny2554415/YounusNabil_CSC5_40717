/* 
 * File:   main.cpp
 * Author: Nabil
 * Purpose: Larger than n
 * Created on February 8, 2015, 2:10 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global constants

//Function prototypes
void num(int, int);

int main(int argc, char** argv) {
    //Output and call function
    cout<<"Array size: 20"<<endl;
    cout<<"n: 11"<<endl;
    num(20,11);
    return 0;
}
//FUNCTION CALLS ANY NUMBER GREATER THAN N
void num(int SIZE, int N){
    for (SIZE=N; SIZE<20; SIZE++)
        cout<<(SIZE+1)<<endl;
}