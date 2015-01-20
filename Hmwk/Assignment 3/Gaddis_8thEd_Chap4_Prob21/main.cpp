/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Speed of Sound in Gases
 * Created on January 19, 2015, 4:47 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float CO2=258.0; //speed of Sound in Carbon Di Oxide /meters per Second
    float Air=331.5; //speed of Sound in Air /meters per Second
    float He=972.0; //speed of Sound in Helium /meters per Second
    float H=1270.0; //speed of Sound in Hydrogen /meters per Second
    short choice, seconds, temp;
    float dist;
    //Prompt Input for Medium
    cout<<"This program calculates the speed of Sound in different Gases ";
    cout<<"at 0 degrees centigrade"<<endl;
    cout<<"Please choose a medium:"<<endl;
    cout<<"1: Carbon Dioxide"<<endl;
    cout<<"2: Air"<<endl;
    cout<<"3: Helium"<<endl;
    cout<<"4: Hydrogen"<<endl;
    cin>>choice;
    temp=choice;
    //Prompt Input of seconds
    cout<<"Please input the number of seconds it took for the sound to ";
    cout<<"travel in this medium from its source to the location where it ";
    cout<<"was detected. Please enter between 1-30 second"<<endl;
    cin>>seconds;
    //Output according to choice
    switch (choice){
        case 1:{
            //Calculate and Output meters
        if((seconds>=1)&&(seconds<=30)){
            if(temp=1){
            dist=seconds*CO2;
            cout<<"The source is "<<dist;
            cout<<" meters away from the detection location."<<endl;
            }
        }
        else cout<<"Sorry, Input is not within range"<<endl;
        break;
        }
        case 2:{
            //Calculate and Output meters
        if((seconds>0)&&(seconds<30)){
            if(temp=2){
            dist=seconds*Air;
            cout<<"The source is "<<dist;
            cout<<" meters away from the detection location."<<endl;
            }
        }
        else cout<<"Sorry, Input is not within range"<<endl;
        break;
        }
        case 3:{
            //Calculate and Output meters
        if((seconds>0)&&(seconds<30)){
            if(temp=3){
            dist=seconds*He;
            cout<<"The source is "<<dist;
            cout<<" meters away from the detection location."<<endl;
            }
        }
        else cout<<"Sorry, Input is not within range"<<endl;
        break;
        }
        case 4:{
            //Calculate and Output meters
        if((seconds>0)&&(seconds<30)){
            if(temp=4){
            dist=seconds*H;
            cout<<"The source is "<<dist;
            cout<<" meters away from the detection location."<<endl;
            }
        }
        else cout<<"Sorry, Input is not within range"<<endl;
        break;
        }
        default:{ cout<<endl<<"Sorry, Input is not within range"<<endl;}
        }
    return 0;
}