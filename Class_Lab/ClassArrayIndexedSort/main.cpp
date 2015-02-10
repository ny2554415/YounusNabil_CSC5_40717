/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 10, 2015, 10:11 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries
#include "Array.h"
//Global Constants

//Execution begins here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Fill the array ADT
    int size=100,perLine=10;
    Array array;//Declare the array object
    array.filAray(size);//Fill the array 
    //mrkSort array
    array.mrkSort();
    //Print the array
    array.prntAry(perLine);
    //Clean up
    array.destroy();
    //Exit stage right!    
    return 0;
}

