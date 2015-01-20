/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose The Speed of Sound
 * Created on January 19, 2015, 4:25 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float air=1100;//speed of sound in air /feet per second
    float water=4900;//speed of sound in water /feet per second
    float steel=16400;//speed of sound in steel /feet per second
    float time,distance;
    short choice;
    //Prompt for Medium
    cout<<"This program calculates the speed of Sound in 3 different mediums"<<endl;
    cout<<"Select a medium from 1 to 3"<<endl;
    cout<<"1: Air"<<endl;
    cout<<"2: Water"<<endl;
    cout<<"3: Steel"<<endl;
    cin>>choice;
    //Output depending on Medium
    cout<<fixed<<setprecision(4);
    switch (choice){
        case 1:{
        cout<<"You have selected Air"<<endl;
        cout<<"Please enter a distance in feet"<<endl;
        cin>>distance;
        if(distance>0){
            //Calculate the time and Output
            time=distance/air*1.0f;
            cout<<"It took sound "<<time<<" seconds to travel";
            cout<<" in Air";
            }
        else cout<<""<<endl;
        break;
    }
        case 2:{
        cout<<"You have selected Water"<<endl;
        cout<<"Please enter a distance in feet"<<endl;
        cin>>distance;
        if(distance>0){
            //Calculate the time and Output
            time=distance/water*1.0f;
            cout<<"It took sound "<<time<<" seconds to travel";
            cout<<" in Water";
            }
            else cout<<"Input distance is not valid"<<endl;
        break;
        }
        case 3:{
        cout<<"You have selected Steel"<<endl;
        cout<<"Please enter a distance in feet"<<endl;
        cin>>distance;
        if(distance>0){
            //Calculate the time and Output
            time=distance/steel*1.0f;
            cout<<"It took sound "<<time<<" seconds to travel";
            cout<<" in Steel";
            }
            else cout<<"Input distance is not valid"<<endl;
        break;
        }
        }
return 0;
}