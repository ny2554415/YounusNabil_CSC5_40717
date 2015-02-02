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
using namespace std;
//User Libraries

//Function Prototypes

//Global Constants

//Execution begins here!

int main(int argc, char** argv) {
    //Declare variables
    char answer;
    char choiceA='A';//choice A 
    char choiceB='B';//choice B 
    char choiceC='C';//choice C 
    char choiceD='D';//choice D 
    int mChoice;//Menu choice
    string name;//name of contestant
    ifstream input;
    string filedt;
   
    
    
    bool Gamebgn = false;//starting game with while
    
    //Questions to be asked
    
    string question1="1) Who designed the programming language C++?";
    string question2="2) What is Bill Gates most famously known for?";
    string question3="3) The country which ranks second in terms of land area is?";
    string question4="4) Who won the Super Bowl XLIX?";
    string question5="5) Who is most famously know as the father of Modern Physics?";
    string question6="6) Which of these insects is also a sport?";
    string question7="7) Where is the car company Jaguar originated?";
    string question8="8) Where is the Berlin Wall located";
    string question9="9) The largest coffee growing country in the world is?";
    string question10="10)The earlier name of New York city was?";
    
    
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
            ///enter a file of Rules here
            input.open("GameRules.txt");
            
            cout<<" RULES "<<endl;
            
            input.close();
            
            Gamebgn=true;
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
        // the questions
        cout<<"Your first question"<<endl;
        cout<<"-------------------"<<endl;
        cout<<question1<<endl;
        cout<<"A. Bill Gates       C. Bjarne Stroustrup"<<endl;
        cout<<"B. Dr. Mark E.Lehr  D. James Gosling"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Your Choice: ";
        cin>>answer;
        
        if((toupper(answer))==choiceC){
            cout<<"Correct Answer, you have won $1000"<<endl;
            cout<<"Your next question"<<endl;
            cout<<"-------------------"<<endl;
            cout<<question2<<endl;
            cout<<"A. Gates  C. Doors"<<endl;
            cout<<"C. Macs   D. Windows"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"Your Choice: ";
            cin>>answer;
        
            if((toupper(answer))==choiceD){
                cout<<"Correct Answer, you have won $2500"<<endl;
                cout<<"Your next question"<<endl;
                cout<<"-------------------"<<endl;
                cout<<question3<<endl;
                cout<<"A. Canada  C. China"<<endl;
                cout<<"B. India   D. United States of America"<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"Your Choice: ";
                cin>>answer;
                
                if((toupper(answer))==choiceA){
                    cout<<"Correct Answer, you have won $10,000"<<endl;
                    cout<<"Your next question"<<endl;
                    cout<<"-------------------"<<endl;
                    cout<<question4<<endl;
                    cout<<"A. New England Patriots   C. LA Kings"<<endl;
                    cout<<"B. Miami Heat             D. Miami Heat"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    cout<<"Your Choice: ";
                    cin>>answer;

                    if((toupper(answer))==choiceA){
                        cout<<"Correct Answer, you have won $25,000"<<endl;
                        cout<<"Your next question"<<endl;
                        cout<<"-------------------"<<endl;
                        cout<<question5<<endl;
                        cout<<"A. Steven Hawking    C. Michael Faraday"<<endl;
                        cout<<"B. Albert Einstein   D. Bill Nye"<<endl;
                        cout<<"----------------------------------"<<endl;
                        cout<<"Your Choice: ";
                        cin>>answer;

                        if((toupper(answer))==choiceB){
                            cout<<"Correct Answer, you have won $50,000"<<endl;
                            cout<<"Your next question"<<endl;
                            cout<<"-------------------"<<endl;
                            cout<<question6<<endl;
                            cout<<"A. Bee     C. Hockey"<<endl;
                            cout<<"B. Skiing  D. Cricket"<<endl;
                            cout<<"----------------------------------"<<endl;
                            cout<<"Your Choice: ";
                            cin>>answer;

                            if((toupper(answer))==choiceD){
                                cout<<"Correct Answer, you have won $75,000"<<endl;
                                cout<<"Your next question"<<endl;
                                cout<<"-------------------"<<endl;
                                cout<<question7<<endl;
                                cout<<"A. Great Britain               C. Italy"<<endl;
                                cout<<"B. United States of America    D. Germany"<<endl;
                                cout<<"----------------------------------"<<endl;
                                cout<<"Your Choice: ";
                                cin>>answer;

                                if((toupper(answer))==choiceA){
                                    cout<<"Correct Answer, you have won $100,000"<<endl;
                                    cout<<"Your next question"<<endl;
                                    cout<<"-------------------"<<endl;
                                    cout<<question8<<endl;
                                    cout<<"A. Bosnia   C. Poland"<<endl;
                                    cout<<"B. Germany  D. Austria"<<endl;
                                    cout<<"----------------------------------"<<endl;
                                    cout<<"Your Choice: ";
                                    cin>>answer;

                                    if((toupper(answer))==choiceB){
                                        cout<<"Correct Answer, you have won $250,000"<<endl;
                                        cout<<"Your next question"<<endl;
                                        cout<<"-------------------"<<endl;
                                        cout<<question9<<endl;
                                        cout<<"A. South Africa   C. Brazil"<<endl;
                                        cout<<"B. Argentina      D. China "<<endl;
                                        cout<<"----------------------------------"<<endl;
                                        cout<<"Your Choice: ";
                                        cin>>answer;

                                        if((toupper(answer))==choiceC){
                                            cout<<"Correct Answer, you have won $500,000"<<endl;
                                            cout<<"Your last question for the Million Dollars"<<endl;
                                            cout<<"-------------------"<<endl;
                                            cout<<question10<<endl;
                                            cout<<"A. New Jersey    C. New Amsterdam"<<endl;
                                            cout<<"B. New London    D. York "<<endl;
                                            cout<<"----------------------------------"<<endl;
                                            cout<<"Your Choice: ";
                                            cin>>answer;

                                            if((toupper(answer))==choiceC){
                                                cout<<"Correct Answer"<<endl;
                                                cout<<"Congratulations "<<name<<", You have won 1 MILLION DOLLARS."<<endl;
                                                cout<<"Thank you for playing the game, Enjoy your 1 million Dollars."<<endl;
                                                cout<<"Invest wisely and have a good day"<<endl;
                                                Gamebgn=false;
                                            }
                                            else{
                                                cout<<"Sorry wrong answer"<<endl;
                                                cout<<"The correct answer was New Amsterdam. "<<endl;
                                                cout<<"You win $500,000"<<endl;
                                                cout<<"Thank you for playing the game"<<endl;
                                                cout<<"Invest wisely and have a good day"<<endl;
                                                Gamebgn=false;
                                            }
                                        }
                                        else{
                                            cout<<"Sorry wrong answer"<<endl;
                                            cout<<"The correct answer was Brazil. "<<endl;
                                            cout<<"You win $250,000"<<endl;
                                            cout<<"Thank you for playing the game"<<endl;
                                            cout<<"Invest wisely and have a good day"<<endl;
                                            Gamebgn=false;
                                        }
                                    }
                                    else{
                                        cout<<"Sorry wrong answer"<<endl;
                                        cout<<"The correct answer was Germany. "<<endl;
                                        cout<<"You win $100,000"<<endl;
                                        cout<<"Thank you for playing the game"<<endl;
                                        cout<<"Invest wisely and have a good day"<<endl;
                                        Gamebgn=false;
                                    }
                                }else{
                                    cout<<"Sorry wrong answer"<<endl;
                                    cout<<"The correct answer was Great Britain."<<endl;
                                    cout<<"You win $75,000"<<endl;
                                    cout<<"Thank you for playing the game"<<endl;
                                    cout<<"Invest wisely and have a good day"<<endl;
                                    Gamebgn=false;
                                }
                            }else{
                                cout<<"Sorry wrong answer"<<endl;
                                cout<<"The correct answer was cricket."<<endl;
                                cout<<"You win $50,000"<<endl;
                                cout<<"Thank you for playing the game"<<endl;
                                cout<<"Invest wisely and have a good day"<<endl;
                                Gamebgn=false;
                            }
                        }else{
                            cout<<"Sorry wrong answer"<<endl;
                            cout<<"The correct answer was Albert Einstein."<<endl;
                            cout<<"You win $25,000"<<endl;
                            cout<<"Thank you for playing the game"<<endl;
                            cout<<"Invest wisely and have a good day"<<endl;
                            Gamebgn=false;
                        }
                    }else{
                        cout<<"Sorry wrong answer"<<endl;
                        cout<<"The correct answer was New England Patriots "<<endl;
                        cout<<"You win $10,000"<<endl;
                        cout<<"Thank you for playing the game"<<endl;
                        cout<<"Invest wisely and have a good day"<<endl;
                        Gamebgn=false;
                    }
                }else{
                    cout<<"Sorry wrong answer"<<endl;
                    cout<<"The correct answer was Canada"<<endl;
                    cout<<"You win $2500"<<endl;
                    cout<<"Thank you for playing the game"<<endl;
                    cout<<"Invest wisely and have a good day"<<endl;
                    Gamebgn=false;
                }
            }else{
                cout<<"Sorry wrong answer"<<endl;
                cout<<"The correct answer was Windows."<<endl;
                cout<<"You win $1000"<<endl;
                cout<<"Thank you for playing the game"<<endl;
                cout<<"Invest wisely and have a good day"<<endl;
                Gamebgn=false;
            }
    }else{
            cout<<"Sorry wrong answer. "<<endl;
            cout<<"The correct answer was Bjarne Stroustrup. "<<endl;
            cout<<"Thank you for playing the game"<<endl;
            Gamebgn=false;        
        }
    }    



       return 0;
    }

