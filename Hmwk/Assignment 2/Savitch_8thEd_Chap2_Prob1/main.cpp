/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Metric conversion
 * Created on January 13, 2015, 10:51 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const float CMTNONS=3.527392e4f;//Conversion from metric ton to ounces

//Function prototypes

//Begin execution here

int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;//Weight of cereal contents in ounce
    float wtPackTn;//Weight of cereal contents in tons
    float nPackTn; //Number of cereal boxes in a metric ton
    //Prompt User for cereal weights.
    cout<<"Input the number of ounces on cereal box to convert"<<endl;
    cout<<"to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes or N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='Y'){

    //Prompt User for cereal weights.
    cout<<"Input the number of ounces on cereal box to convert"<<endl;
    cout<<"to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;
    }

    
    return 0;
}

