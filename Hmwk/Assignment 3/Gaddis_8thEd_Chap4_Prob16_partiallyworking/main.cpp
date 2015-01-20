/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Running the race
 * Created on January 19, 2015, 10:18 PM
 */

//Global Libraries
#include <iostream>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    string rnnr1, rnnr2, rnnr3;//Names of all three runners
    float time1,time2,time3;//Times of all 3 runners
    //Prompt for Input
    cout<<"This program calculates which runner was first, second and third"<<endl;
    cout<<"Enter the first name of first runner and his time taken";
    cout<<" separated with a space"<<endl;
    cin>>rnnr1>>time1;
    cout<<"Enter the first name of second runner and his time taken";
    cout<<" separated with a space"<<endl;
    cin>>rnnr2>>time2;
    cout<<"Enter the first name of third runner and his time taken";
    cout<<" separated with a space"<<endl;
    cin>>rnnr3>>time3;
    //Output the results
        if ((time1<time2)&&(time2<time3))
        {
            cout<<"First = "<<rnnr1<<"."<<endl;
            cout<<"Second = "<<rnnr2<<"."<<endl;
            cout<<"Third = "<<rnnr3<<"."<<endl;
        }
        else
        {
            if ((time1<time3)&&(time3<time2))
            {
                cout<<"First = "<<rnnr1<<"."<<endl;
                cout<<"Second = "<<rnnr3<<"."<<endl;
                cout<<"Third = "<<rnnr2<<"."<<endl; 
            }
            else
            {   
                if ((time2<time1)&&(time1<time3))
                {
                    cout<<"First = "<<rnnr2<<"."<<endl;
                    cout<<"Second = "<<rnnr1<<"."<<endl;
                    cout<<"Third = "<<rnnr3<<"."<<endl;   
                }
                else
                {    
                    if ((time2<time3)&&(time3<time1))
                    {
                        cout<<"First = "<<rnnr2<<"."<<endl;
                        cout<<"Second = "<<rnnr3<<"."<<endl;
                        cout<<"Third = "<<rnnr1<<"."<<endl;   
                    }
                    else
                    {
                        if ((time3<time1)&&(time1<time2))
                        {
                            cout<<"First = "<<rnnr3<<"."<<endl;
                            cout<<"Second = "<<rnnr1<<"."<<endl;
                            cout<<"Third = "<<rnnr2<<"."<<endl;    
                        }
                        else
                        {    
                            if ((time3<time2)&&(time2<time1))
                            {
                                cout<<"First = "<<rnnr1<<"."<<endl;
                                cout<<"Second = "<<rnnr2<<"."<<endl;
                                cout<<"Third = "<<rnnr3<<"."<<endl;    
                            }        
                            else
                            {
                                cout<<"Your input is invalid"<<endl;
                            }    
        
                        }}}}}            
                        

return 0;
}