/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Project (Who wants to be a Millionaire)
 * Created on February 1, 2015, 2:10 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//User Libraries

//Function Prototypes

//Global Constants

//Execution begins here!

int main(int argc, char** argv) {
    //Declare variables
    string quest[10];
    const int SIZE=20;
    const char test[SIZE]={'b','d','b','b','c','b','a','b','c','d',
                           'a','c','d','b','d','c','c','a','d','b'};
    int mChoice;//Menu choice
    string name;//name of contestant
    
    bool Gamebgn = false;//starting game with while
    
    //Questions to be asked
    
    quest[0]="1) Who designed the programming language C++?\n"
                 "a.Dr. Mark E. Lehr  b.Bjarne Stroustrup\n"
                 "c.Bill Gates        c.Steve Jobs";
    
    quest[1]="2) What is Bill Gates most famously known for?\n"
                 "a.Gates       b.Doors\n"
                 "c.Windows     d.Macs";
    quest[2]="3) The country which ranks second in terms of land area is?\n"
                 "a.Canada      b.China\n"
                 "c.Russia      d.United States of America";
    quest[3]="4) Who won the Super Bowl XLIX?";
    quest[4]="5) Who is most famously know as the father of Modern Physics?";
    quest[5]="6) Which of these insects is also a sport?";
    quest[6]="7) Where is the car company Jaguar originated?";
    quest[7]="8) Where is the Berlin Wall located";
    quest[8]="9) The largest coffee growing country in the world is?";
    quest[9]="10)The earlier name of New York city was?";
    
    
    //Menu for Game
    cout<<"Enter your name ";
    cin>>name;
    cout<<endl;
    cout<<"Hello "<<name<<endl;
    cout<<"Welcome to WHO WANTS TO BE A MILLIONARE"<<endl;
    cout<<"Main Menu"<<endl;
    cout<<"Choose what you wish to do"<<endl;
    cout<<"------------"<<endl;
    cout<<"1.Start playing game"<<endl;
    cout<<"2.Rules then Start"<<endl;
    cout<<"3.Quit game"<<endl;
    cout<<"------------"<<endl;
    cin>>mChoice;
    cout<<"------------"<<endl;
    
    //Switch and Output for menu
    switch (mChoice){
    
        case 1:
            cout<<"You have chosen to play the game, I wish you luck."<<endl;
            cout<<"--------------------------------------------------"<<endl;
            Gamebgn = true; //game starts
            break;
        case 2:
            cout<<" RULES "<<endl;
            cout<<"This game is similar to Who wants to be a Millionaire.";
            cout<<"A question and four options will be displayed.";
            cout<<"Only of of them is the correct answer.";
            cout<<"You have to enter the option you believe is correct.";
            cout<<"A correct answer will move you to the next question while a wrong answer will end the game.";
            cout<<"Good Luck, The game will now begin"<<endl;
            cout<<endl;

            Gamebgn = true;//used to start game
            break;
        case 3:    
            cout<<"You have chosen to quit"<<endl;
            cout<<"Have a good day"<<endl;
            Gamebgn = false; //program will end if quit
            break;
         default:
            cout<<"Invalid option "<<endl;        
        }
    if (Gamebgn=true){ //game starts here
        char answer[SIZE];
        //Loop Questions and answer
        for(int i=0;i<10;i++){
            cout<<""<<quest[i]<<" ";
            cin>>answer[i];
            while((answer[i]!='a')&&(answer[i]!='b')&&
                    (answer[i]!='c')&&(answer[i]!='d')){
                    cout<<"Incorrect input, please choose a,b,c or d"<<endl;
                    cin>>answer[i];
            if(!answer[i]==test[i])
                cout<<"Thank you "<<endl;
                    break;
                
           


            }  }}
       return 0;
    }

