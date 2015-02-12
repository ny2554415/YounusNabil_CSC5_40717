/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Purpose: Project (Who wants to be a Millionaire)
 * Created on February 1, 2015, 2:10 PM
 */
//System Libraries
#include <iostream>//Keyboard/Monitor I/O
#include <fstream>////File I/O
#include <ctime>//Time functions
#include <cstdlib>//Random rand(),srand()
using namespace std;
//User Libraries

//Function Prototypes
void qualifier();// for the qualifying game
void game();//for the main game
void mMenu();//for Main menu


//Global Constants

//Execution begins here!

int main(int argc, char** argv) {
    
    //Game starts by displaying menu using Menu function
    mMenu();
    
    //Exit stage right!
    return 0;
    }


void mMenu(){
    //Declare variables
    int mChoice;//Menu choice
    string name;//name of contestant
    ifstream infile;//input from file
    string input;//input from file
    char choiceY='Y';//choice to play game
    char doyou;//choice to play game after rules
    
    //Menu is displayed for Game
    //Option for user to start game ,check rules or quit
    cout<<"          Hello and "<<name<<endl;
    cout<<"           Welcome "<<endl;
    cout<<"             to"<<endl;
    cout<<"*-----------------------------*"<<endl;
    cout<<"*WHO WANTS TO BE A MILLIONAIRE*"<<endl;
    cout<<"*-----------------------------*"<<endl;
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
    
    //Use Switch statement for Menu choices
    //Switch and Output for Menu
    switch (mChoice){
    
        case 1:
            cout<<"You have chosen to play the game."<<endl;
            cout<<"But to have a chance ";
            cout<<"to play for the Million Dollars you will have "; 
            cout<<"to prove your worth by playing a qualifier round."<<endl;
            cout<<"--------------------------------------------------"<<endl;
         
            
            //ENTER THE QUALIFIER GAME HERE!!
            qualifier();//leads to qualifying function
            break;
        case 2:
            infile.open("GameRules.txt"); //opens the file containing rules
            //file is placed within the project folder
            //Use if function incase the file does not open
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
            cout<<"Open file manually to learn the rules."<<endl;
            }
            
            cout<<"Do you wish to start playing?"<<endl;
            cout<<"Type Y for Yes, or anything else to quit"<<endl;
            cin>>doyou;
            if((toupper(doyou))==choiceY){
                cout<<"You have chosen to play the game."<<endl;
                cout<<"But wait this time there is a twist, to have a chance ";
                cout<<"to play for the Million Dollars you will have "; 
                cout<<"to prove your worth by playing a qualifier round."<<endl;
                cout<<"--------------------------------------------------"<<endl;
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
}

void game(){
    //Declare variables
    string name;//Hold name of player
    char answer;
    char choiceA='A';//choice A 
    char choiceB='B';//choice B 
    char choiceC='C';//choice C 
    char choiceD='D';//choice D 
    int reward;//for reward
    ofstream output;//Declaring a file object
    unsigned int totTim,begTim,endTim;
    //Open the file
    output.open("Report.dat");
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
    begTim=static_cast<unsigned int>(time(0));
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
                                                reward=1000000;
                                                
                                            }
                                            else{
                                                cout<<"Sorry wrong answer"<<endl;
                                                cout<<"The correct answer was New Amsterdam. "<<endl;
                                                cout<<"You win $500,000"<<endl;
                                                cout<<"Thank you for playing the game"<<endl;
                                                cout<<"Invest wisely and have a good day"<<endl;
                                                reward=500000;
                                            }
                                        }
                                        else{
                                            cout<<"Sorry wrong answer"<<endl;
                                            cout<<"The correct answer was Brazil. "<<endl;
                                            cout<<"You win $250,000"<<endl;
                                            cout<<"Thank you for playing the game"<<endl;
                                            cout<<"Invest wisely and have a good day"<<endl;
                                            reward=250000;
                                        }
                                    }
                                    else{
                                        cout<<"Sorry wrong answer"<<endl;
                                        cout<<"The correct answer was Germany. "<<endl;
                                        cout<<"You win $100,000"<<endl;
                                        cout<<"Thank you for playing the game"<<endl;
                                        cout<<"Invest wisely and have a good day"<<endl;
                                        reward=100000;
                                    }
                                }else{
                                    cout<<"Sorry wrong answer"<<endl;
                                    cout<<"The correct answer was Great Britain."<<endl;
                                    cout<<"You win $75,000"<<endl;
                                    cout<<"Thank you for playing the game"<<endl;
                                    cout<<"Invest wisely and have a good day"<<endl;
                                    reward=75000;
                                }
                            }else{
                                cout<<"Sorry wrong answer"<<endl;
                                cout<<"The correct answer was cricket."<<endl;
                                cout<<"You win $50,000"<<endl;
                                cout<<"Thank you for playing the game"<<endl;
                                cout<<"Invest wisely and have a good day"<<endl;
                                reward=50000;
                            }
                        }else{
                            cout<<"Sorry wrong answer"<<endl;
                            cout<<"The correct answer was Albert Einstein."<<endl;
                            cout<<"You win $25,000"<<endl;
                            cout<<"Thank you for playing the game"<<endl;
                            cout<<"Invest wisely and have a good day"<<endl;
                            reward=25000;
                        }
                    }else{
                        cout<<"Sorry wrong answer"<<endl;
                        cout<<"The correct answer was New England Patriots "<<endl;
                        cout<<"You win $10,000"<<endl;
                        cout<<"Thank you for playing the game"<<endl;
                        cout<<"Invest wisely and have a good day"<<endl;
                        reward=10000;
                    }
                }else{
                    cout<<"Sorry wrong answer"<<endl;
                    cout<<"The correct answer was Canada"<<endl;
                    cout<<"You win $2500"<<endl;
                    cout<<"Thank you for playing the game"<<endl;
                    cout<<"Invest wisely and have a good day"<<endl;
                    reward=2500;
                }
            }else{
                cout<<"Sorry wrong answer"<<endl;
                cout<<"The correct answer was Windows."<<endl;
                cout<<"You win $1000"<<endl;
                cout<<"Thank you for playing the game"<<endl;
                cout<<"Invest wisely and have a good day"<<endl;
                reward=1000;
                
            }
    }else{
            cout<<"Sorry wrong answer. "<<endl;
            cout<<"The correct answer was Bjarne Stroustrup. "<<endl;
            cout<<"Thank you for playing the game"<<endl;
            reward=0;    
        }
        endTim=static_cast<unsigned int>(time(0));
        //Output results to file
            output<<"Player Name: "<<name<<endl;
            output<<"Reward:    : $"<<reward<<endl;
            output<<"Time taken : "<<endTim-begTim<<" seconds"<<endl;
              
            //Close the stream
            output.close();
            
        
       
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
    string input;//input from file
    ofstream output;//Declaring a file object
    //Open the file
    output.open("QualifierReport.dat");
    //the questions
    quests[0]="1) Answer 123+321\n"
              "a.333    c.450\n"
              "b.444    d.455";
    quests[1]="2) What is known as the study of fossils?\n"
              "a.Fossilogy  c.Palaeontology\n"
              "b.Astronomy  d.Archaeology";
    quests[2]="3) Which of the following data types is penalized with a direct failure in our class?\n"
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
    //Display qualifier rules which are different than normal
    cout<<"THE QUALIFIERS"<<endl;
    cout<<"Qualifier Rules:\n"
        "1) You will have 6 questions followed one by another.\n"
        "2) You will have 60 seconds to answer all the questions,\n"
        "   if you fail to do so you will fail.\n"
        "3) You need to get at least 4 correct answers to qualify for the Main Event.\n"
         "---------------------------------------------------------------------------"<<endl;
    //Prompt input to start
    cout<<"Enter any character to begin qualifier round ";
    cin>>enter;
    cout<<"Qualifier round begins, Good Luck"<<endl;
    cout<<"-------------------------------- "<<endl;
    //Time for the Questions and answers
    totTim=60;
    begTim=static_cast<unsigned int>(time(0));
    for(int i=0;i<SIZE;i++){
        
        cout<<quests[i]<<" "<<endl;
        cin>>answr[i];
        //Validate if input is valid
        while((answr[i]!='a')&&(answr[i]!='b')&&
              (answr[i]!='c')&&(answr[i]!='d')){
            cout<<"Incorrect input, please choose a,b,c or d ";
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
    //if at least 4 correct then proceed to game
    if(totTim>endTim-begTim){
        if(crrct>=4){
            cout<<"You had "<<crrct<<" correct answers"<<endl;
            cout<<"Congratulations you have qualified for the Main Event"<<endl;
            cout<<"The game will now begin, I wish you luck"<<endl;
            output<<"Correct answers: "<<crrct<<endl;
            output<<"Incorrect answers "<<wrong<<endl;
            output<<"Time taken : "<<endTim-begTim<<" seconds"<<endl;
            game();
            
        //if less than 4 correct answers then the following
        }else{ cout<<"You have failed to qualify!"<<endl;            
            cout<<"You had "<<wrong<<" incorrect answers"<<endl;
            output<<"Correct answers: "<<crrct<<endl;
            output<<"Incorrect answers "<<wrong<<endl;
            output<<"Time taken : "<<endTim-begTim<<" seconds"<<endl;
        }
        //If too much time taken then the following
    }else{
        cout<<"Sorry, you have been disqualified for taking too much time"<<endl;
        cout<<"Time allowed = "<<totTim<<" seconds"<<endl;
        cout<<"Your time = "<<endTim-begTim<<" seconds"<<endl;
        cout<<"Thank you for playing, Have a good day. "<<endl;
        //Output results to file
        output<<"Correct answers: "<<crrct<<endl;
        output<<"Incorrect answers "<<wrong<<endl;
        output<<"Time taken : "<<endTim-begTim<<" seconds"<<endl;
              
                           
    } 
    //Close the stream
    output.close(); 
}
