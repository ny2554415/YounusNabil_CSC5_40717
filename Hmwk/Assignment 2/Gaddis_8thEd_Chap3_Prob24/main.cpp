/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Word Game
 * Created on January 19, 2015, 2:43 PM
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
    string name;
    int age;
    string city;
    string college;
    string prof;//profession
    string pet;//pet
    string namePet;//name of pet
    //Ask for Input
    cout<<"Answer the following questions in one word"<<endl;
    cout<<"Enter your name."<<endl;
    cin>>name;
    cout<<"Enter your age."<<endl;
    cin>>age;
    cout<<"Enter your city."<<endl;
    cin>>city;
    cout<<"Enter your college."<<endl;
    cin>>college;
    cout<<"Enter your profession."<<endl;
    cin>>prof;
    cout<<"Enter what type of animal is your pet."<<endl;
    cin>>pet;
    cout<<"Enter name of your pet."<<endl;
    cin>>namePet;
    //Output the results
    cout<<"-----------------"<<endl;
    cout<<"There once was a person named "<<name;
    cout<<" who lived in "<<city<<".";
    cout<<" At the age of "<<age<<", ";
    cout<<name<<" went to college at "<<college<<"."<<endl;
    cout<<name<<" graduated and went to work ";
    cout<<"as a "<<prof<<".";
    cout<<" Then, "<<name<<" adopted a "<<pet;
    cout<<" named "<<namePet<<".";
    cout<<" They both lived happily ever after!"<<endl;
return 0;
}
