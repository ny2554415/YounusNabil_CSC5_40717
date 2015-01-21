/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose Factorial
 * Created on January 21, 2015, 8:53 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nFactrl=1,n;
    //Prompt user to input the factorial
    cout<<"What N would you like to use ";
    cout<<"to calculate N!"<<endl;
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
    }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    //Exit stage right
    
    
    return 0;
}

