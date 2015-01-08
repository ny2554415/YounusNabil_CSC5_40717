/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Total Purchase by a customer (Gaddis_8thEd_Chap2_Prob8)
 * Created on January 8, 2015, 10:41 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const char CONVPCT=100;
//Function Prototypes
//Execution begins here!

int main(int argc, char** argv) {
//Declare variables
    //price of each item
    float itm1 = 15.95;
    float itm2 = 24.95;
    float itm3 = 6.95;
    float itm4 = 12.95;
    float itm5 = 3.95;
    
    float slstx = 7; //percentage of sales tax
    
//Calculate subtotal and sales tax

float subttl = itm1+itm2+itm3+itm4+itm5;
float taxtotal = subttl*slstx/CONVPCT;
float Total = subttl+taxtotal;

//Output the results
cout<<"Price of item 1 =     $"<<itm1<<endl;    
cout<<"Price of item 2 =     $"<<itm2<<endl; 
cout<<"Price of item 3 =     $"<<itm3<<endl; 
cout<<"Price of item 4 =     $"<<itm4<<endl; 
cout<<"Price of item 5 =     $"<<itm5<<endl;
cout<<"The subtotal    =     $"<<subttl<<endl;
cout<<"Sales tax       =     $"<<taxtotal<<endl;
cout<<"Total           =     $ "<<Total<<endl;
    return 0;
}

