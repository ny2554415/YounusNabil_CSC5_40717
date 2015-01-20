/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Assignment 3 Menu
 * Created on January 19, 2015, 9:29 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <iomanip>

using namespace std;
//User Libraries

//Global constants
const int MIN_VALUE=1;
const int MAX_VALUE=500;
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int choice;
    //Assignment 2 Menu
    cout<<"Input which solution you would like to see. Enter Number"<<endl;
    cout<<"Solution 1:Gaddis_8thEd_Chap4_Prob1"<<endl;
    cout<<"Solution 2:Gaddis_8thEd_Chap4_Prob2"<<endl;
    cout<<"Solution 3:Gaddis_8thEd_Chap4_Prob4"<<endl;
    cout<<"Solution 4:Gaddis_8thEd_Chap4_Prob5"<<endl;
    cout<<"Solution 5:Gaddis_8thEd_Chap4_Prob6"<<endl;
    cout<<"Solution 6:Gaddis_8thEd_Chap4_Prob11"<<endl;
    cout<<"Solution 7:Gaddis_8thEd_Chap4_Prob20"<<endl;
    cout<<"Solution 8:Gaddis_8thEd_Chap4_Prob21"<<endl;
    cout<<"-----------------------------------"<<endl;
    cin>>choice;
    //Base upon the choice, display the results
    switch(choice) {
    case 1: {
    cout<<"You have chosen solution 1"<<endl;
    //Declaring Variables
    float a, b;
    //Prompt for Input
    cout<<"This program calculates which number is Larger and Smaller."<<endl;
    cout<<"Enter 2 numbers separated by a space"<<endl; 
    cin>>a;
    cin>>b;
    //Output the results
    if(a>b){
        cout<<a<<" is the larger number."<<endl;
        cout<<b<<" is the smaller number."<<endl;
        }
    else{
        cout<<b<<" is the larger number."<<endl;
        cout<<a<<" is the smaller number."<<endl;
        }
    }
    }
    switch(choice) {
    case 2: {
    cout<<"You have chosen solution 2"<<endl;
    //Declare variables
    char choice;
    //Prompt for Input
    cout<<"This program is a Roman Numeral converter"<<endl;
    cout<<"Enter a number between 1-10 to be converted"<<endl;   
    cin>>choice;
    //Calculate and output
    switch(choice){
        case'1': cout<<"Roman Number = I. "<<endl;
        break;
        case'2': cout<<"Roman Number = II. "<<endl;
        break;
        case'3': cout<<"Roman Number = III. "<<endl;
        break;
        case'4': cout<<"Roman Number = IV. "<<endl;
        break;
        case'5': cout<<"Roman Number = V. "<<endl;
        break;
        case'6': cout<<"Roman Number = VI. "<<endl;
        break;
        case'7': cout<<"Roman Number = VII. "<<endl;
        break;
        case'8': cout<<"Roman Number = VIII. "<<endl;
        break;
        case'9': cout<<"Roman Number = IX. "<<endl;
        break;
        case'10': cout<<"Roman Number = X. "<<endl;
        break;
        default : cout<<"You did not enter a number between 1 to 10."<<endl;
        }
    }
    }
    switch(choice) {
    case 3: {
        cout<<"You have chosen solution 3"<<endl;
        //Declare variables
    float L1, W1, L2, W2, A1, A2;
    //Prompt for Input
    cout<<"This program will determine which rectangle has the greater Area."<<endl;
    cout<<"Enter length of First rectangle."<<endl;
    cin>>L1;//Length of first rectangle 
    cout<<"Enter width of First rectangle."<<endl;
    cin>>W1;//Width of first rectangle
    cout<<"Enter length of Second rectangle."<<endl;
    cin>>L2;//Length of Second rectangle
    cout<<"Enter width of Second rectangle."<<endl;
    cin>>W2;//Width of Second rectangle
    
    //Calculate Area
    A1=L1*W1;//Area of first rectangle
    A2=L2*W2;//Area of Second rectangle
    //Output results with IF
    if(A1>A2)
        cout<<"First rectangle has greater area."<<endl;
        else if(A1==A2)
        cout<<"Both rectangles have equal area."<<endl;
        else
        cout<<"Second rectangle has greater area."<<endl;
    }
    }
    switch(choice) {
    case 4: {
        cout<<"You have chosen solution 4"<<endl;
        //Declare Variables
        float BMI, weight, height;
        //Prompt for Input
        cout<<"This Program calculates the BMI of a person"<<endl;
        cout<<"Please enter your weight in pounds."<<endl;
        cin>>weight;
        cout<<"Please enter your height in inches."<<endl;
        cin>>height;
        //Calculate BMI
        BMI=(weight*703)/(height*height);

        //Display Output
        if (BMI>25)
            cout<<"You are overweight."<<endl;
        else if(BMI<18.5)
            cout<<"You are underweight."<<endl;
        else
            cout<<"You have Optimal weight."<<endl;
    }
    }
    switch(choice) {
    case 5: {
        cout<<"You have chosen solution 5"<<endl;
        //Declare variables
        float mass;
        float weight;
        //Prompt for Input
        cout<<"This program calculates the weight of an object in Newtons"<<endl;
        cout<<"Enter the mass of the object."<<endl;
        cin>>mass;
        //Calculate the Weight
        weight=mass*9.8;
        //Output the results
        cout<<"The weight of object is = "<<weight<<" Newtons"<<endl;
        if(weight>1000)
            cout<<"Object is too heavy!"<<endl;
        else if(weight<10)
            cout<<"Object is too light!"<<endl;
            else
            cout<<"Object is normal"<<endl;
    }}
    switch(choice) {
    case 6: {
        cout<<"You have chosen solution 6"<<endl;
        //Declare variables
        unsigned seed=time(0);
        int numOne;
        int numTwo;
        int Answer;
        int cAnswer;

        //Output the Sum
        numOne=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
        numTwo=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
        cout<<"Complete the following Sum"<<endl;
        cout<<" "<<numOne<<endl;
        cout<<"+"<<numTwo<<endl;
        cout<<"----"<<endl;
        cin>>Answer;
        //Calculate the Answer
        cAnswer=numOne+numTwo;
        //Output the results
        if(Answer==cAnswer){
            cout<<"Congratulations your answer is correct."<<endl;
            }
        else{
            cout<<"Sorry your answer is wrong"<<endl;
            cout<<"The correct answer is = "<<cAnswer<<endl;

        }}}
    switch(choice) {
    case 7: {
        cout<<"You have chosen solution 7"<<endl;
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
            }}}
    switch(choice) {
    case 8: {
        cout<<"You have chosen solution 8"<<endl;
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
    
    }
    }
   

    return 0;
}

