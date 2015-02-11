/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Project (Who wants to be a Millionaire)
 * Created on February 1, 2015, 2:10 PM
 */
//System Libraries
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries

//Function Prototypes
void qualifier();
void game();
//Global Constants

//Execution begins here!

int main(int argc, char** argv) {
    //Declare variables
    
    int mChoice;//Menu choice
    string name;//name of contestant
    ifstream infile;
    string input;
    bool Gamebgn = false;//starting game with while
    char choiceY='Y';//choice to play game
    char doyou;
    
    //Menu for Game
    
    cout<<"Hello "<<name<<endl;
    cout<<"Welcome to WHO WANTS TO BE A MILLIONARE"<<endl;
    cout<<"Main Menu"<<endl;
    cout<<"Choose what you wish to do"<<endl;
    cout<<"I will advise you to check the rules first"<<endl;
    cout<<"------------"<<endl;
    cout<<"1.Start playing game"<<endl;
    cout<<"2.Rules"<<endl;
    cout<<"3.Quit game"<<endl;
    cout<<"------------"<<endl;
    cin>>mChoice;
    cout<<"------------"<<endl;
    
    //Switch and Output for menu
    switch (mChoice){
    
        case 1:
            cout<<"You have chosen to play the game."<<endl;
            cout<<"But wait this time there is a twist, to have a chance ";
            cout<<"to play for the Million Dollars you will have "; 
            cout<<"to prove your worth by playing a qualifier round."<<endl;
            cout<<"--------------------------------------------------"<<endl;
         
            
            //ENTER THE QUALIFIER GAME HERE!!
            qualifier();
            break;
        case 2:
            infile.open("GameRules.txt"); //opens file "RULES.txt"(will be placed in same destination as the cpp file

            if (infile) {
                getline(infile, input); 
                while (infile){
                    cout<<input<<endl;
                    getline(infile,input);                     }
                    infile.close(); 
                    
                }
            else //else statement if GameRules.txt cannot be read
            {
            cout<<"An Error has occurred, cannot display file contents"<<endl; 
            }
            
            cout<<"Do you wish to start playing?"<<endl;
            cout<<"Type Y for Yes, or anything else to quit"<<endl;
            cin>>doyou;
            if((toupper(doyou))==choiceY){
                qualifier();
            }
            break;
        
        case 3:    
            cout<<"You have chosen to quit"<<endl;
            cout<<"Have a good day"<<endl;
            
            break;
         default:
            cout<<"Invalid option "<<endl;        
        }
    //Exit stage right!
    return 0;
    }
void game(){
    //Declare variables
    string name;//Hold name of player
    char answer;
    char choiceA='A';//choice A 
    char choiceB='B';//choice B 
    char choiceC='C';//choice C 
    char choiceD='D';//choice D 
    //the questions to be asked
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
    // the questions
        cout<<"Enter your name ";
        cin>>name;
        cout<<endl;
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
                    cout<<"A. New England Patriots   C. LA Lakers"<<endl;
                    cout<<"B. Atlanta SeaHawks       D. NY Giants"<<endl;
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
                                                
                                            }
                                            else{
                                                cout<<"Sorry wrong answer"<<endl;
                                                cout<<"The correct answer was New Amsterdam. "<<endl;
                                                cout<<"You win $500,000"<<endl;
                                                cout<<"Thank you for playing the game"<<endl;
                                                cout<<"Invest wisely and have a good day"<<endl;
                                                
                                            }
                                        }
                                        else{
                                            cout<<"Sorry wrong answer"<<endl;
                                            cout<<"The correct answer was Brazil. "<<endl;
                                            cout<<"You win $250,000"<<endl;
                                            cout<<"Thank you for playing the game"<<endl;
                                            cout<<"Invest wisely and have a good day"<<endl;
                                            
                                        }
                                    }
                                    else{
                                        cout<<"Sorry wrong answer"<<endl;
                                        cout<<"The correct answer was Germany. "<<endl;
                                        cout<<"You win $100,000"<<endl;
                                        cout<<"Thank you for playing the game"<<endl;
                                        cout<<"Invest wisely and have a good day"<<endl;
                                        
                                    }
                                }else{
                                    cout<<"Sorry wrong answer"<<endl;
                                    cout<<"The correct answer was Great Britain."<<endl;
                                    cout<<"You win $75,000"<<endl;
                                    cout<<"Thank you for playing the game"<<endl;
                                    cout<<"Invest wisely and have a good day"<<endl;
                                    
                                }
                            }else{
                                cout<<"Sorry wrong answer"<<endl;
                                cout<<"The correct answer was cricket."<<endl;
                                cout<<"You win $50,000"<<endl;
                                cout<<"Thank you for playing the game"<<endl;
                                cout<<"Invest wisely and have a good day"<<endl;
                                
                            }
                        }else{
                            cout<<"Sorry wrong answer"<<endl;
                            cout<<"The correct answer was Albert Einstein."<<endl;
                            cout<<"You win $25,000"<<endl;
                            cout<<"Thank you for playing the game"<<endl;
                            cout<<"Invest wisely and have a good day"<<endl;
                            
                        }
                    }else{
                        cout<<"Sorry wrong answer"<<endl;
                        cout<<"The correct answer was New England Patriots "<<endl;
                        cout<<"You win $10,000"<<endl;
                        cout<<"Thank you for playing the game"<<endl;
                        cout<<"Invest wisely and have a good day"<<endl;
                        
                    }
                }else{
                    cout<<"Sorry wrong answer"<<endl;
                    cout<<"The correct answer was Canada"<<endl;
                    cout<<"You win $2500"<<endl;
                    cout<<"Thank you for playing the game"<<endl;
                    cout<<"Invest wisely and have a good day"<<endl;
                    
                }
            }else{
                cout<<"Sorry wrong answer"<<endl;
                cout<<"The correct answer was Windows."<<endl;
                cout<<"You win $1000"<<endl;
                cout<<"Thank you for playing the game"<<endl;
                cout<<"Invest wisely and have a good day"<<endl;
                
                
            }
    }else{
            cout<<"Sorry wrong answer. "<<endl;
            cout<<"The correct answer was Bjarne Stroustrup. "<<endl;
            cout<<"Thank you for playing the game"<<endl;
                
        }
    }    


void qualifier(){
    //Declare variables
    string quests[6];
    int crrct=0;
    int wrong=0;
    const int SIZE=6;
    const char test[SIZE]={'b','c','a','d','d','a'};
    char answr[SIZE];
    unsigned int totTim,begTim,endTim;
    char enter;
    //the questions
    quests[0]="1) Answer 123+321\n"
              "a.333    c.450\n"
              "b.444    d.455";
    quests[1]="2) What is known as the study of fossils?\n"
              "a.Fossilogy  c.Palaeontology\n"
              "b.Astronomy  d.Archaeology";
    quests[2]="3) Which of the following data types is penalised with a direct failure in our class?\n"
              "a.double  c.int\n"
              "b.float   d.const\n";
    quests[3]="4) Which French term means the front of a building?\n"
              "a.bâtiment   c.avant\n"
              "b.face       d.facade\n";
    quests[4]="5) Which shape has 9 sides? \n"
              "a.hexagon    c.decagon\n"
              "b.heptagon   d.nanagon\n";
    quests[5]="6) Which of the following cannot be used to measure speed. \n"
              "a.km/km  c.kmph\n"
              "b.m/s    d.mph\n";
    //Prompt input to start
    cout<<"THE QUALIFIERS"<<endl;
    cout<<"You have 120 seconds to answer all the questions."<<endl;
    cout<<"Enter character to continue ";
    cin>>enter;
    cout<<"Qualifier round begins, Good Luck"<<endl;
    cout<<"-------------------------------- "<<endl;
    //Time for the Questions and answers
    totTim=50;
    begTim=static_cast<unsigned int>(time(0));
    for(int i=0;i<SIZE;i++){
        
        cout<<quests[i]<<" "<<endl;
        cin>>answr[i];
        //Validate if input is valid
        while((answr[i]!='a')&&(answr[i]!='b')&&
              (answr[i]!='c')&&(answr[i]!='d')){
            cout<<"Incorrect input, please choose a,b,c or d";
            cin>>answr[i];
        }    
    }
    endTim=static_cast<unsigned int>(time(0));
    //Check Answers
    for(int i=0;i<SIZE;i++){
        if(answr[i]==test[i]){
            crrct++;
        }else wrong++;
    }
    //Output results
    if(totTim>endTim-begTim){
        if(crrct>=6){
            cout<<"You had "<<crrct<<" correct answers"<<endl;
            cout<<"Congratulations you have qualified for the Main Event"<<endl;
            cout<<"The game will now begin, I wish you luck"<<endl;
            game();
        //enter game function
        }else{ cout<<"You have failed!"<<endl;
            cout<<"Total Amount Correct: "<<crrct<<endl;
            cout<<"You had "<<wrong<<" wrong answers"<<endl;

        }
    }else{
        cout<<"Sorry, you have been disqualified for taking too much time"<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endTim-begTim<<endl;
        cout<<"Thank you for playing, Have a good day. "<<endl;
        
    } 
}
