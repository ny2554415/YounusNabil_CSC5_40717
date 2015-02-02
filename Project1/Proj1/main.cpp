/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Project (Who wants to be a Millionare)
 * Created on February 1, 2015, 2:10 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
//User Libraries
//Function Prototypes
//Global Constants
//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    char A;//choice A 
    char B;//choice B
    char C;//choice C
    char D;//choice D
    int mChoice;//Menu choice
    string name;//name of contestant
    
    bool startGame = false;//starting game with while
    
    //Questions to be asked
    
    string question1="Who designed the programming language C++?";
    string question2="What is Bill Gates most famously known for?";
    string question3="The country which ranks second in terms of land area is?";
    string question4="Who won the Super Bowl XLIX?";
    string question5="Who is most famously know as the father of Modern Physics?";
    string question6="Which of these insects is also a sport?";
    string question7="Where is the car company Jaguar originated?";
    string question8="Where is the Berlin Wall located";
    string question9="The largest coffee growing country in the world is?";
    string question10="The earlier name of New York city was?";
    
    
    //Menu for Game
    cout<<"Enter your name ";
    cin>>name;
    cout<<endl;
    cout<<"Hello "<<name<<endl;
    cout<<"Welcome to WHO WANTS TO BE A MILLIONARE"<<endl;
    cout<<"Main Menu"<<endl;
    cout<<"------------"<<endl;
    cout<<"1.Start playing game"<<endl;
    cout<<"2.Rules"<<endl;
    cout<<"3.Quit game"<<endl;
    cin>>mChoice;
    cout<<"------------"<<endl;
    
    //Switch and Output for menu
    switch (mChoice){
    
    case 1:
        startGame = true; //game starts
        break;
    case 2:
        cout<<" RULES "<<endl;
        ///enter a file of Rules here
        break;
    case 3:    
        cout<<"You have chosen to quit"<<endl;
        cout<<"Have a good day"<<endl;
        startGame = false; //program will end if quit
        break;
            
    }
   return 0;
}

