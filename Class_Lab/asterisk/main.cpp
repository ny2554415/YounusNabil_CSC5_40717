/* 
 * File:   main.cpp
 * Author: Nabil
 *
 * Created on February 10, 2015, 9:23 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    char char1;
    char char2;
    char char3;
    char char4;
    int i;
    
    
    cout<<"enter"<<endl;
    cin>>char1>>char2>>char3>>char4;
    
     
    if (isdigit(char1)) {
        cout<<char1;
        for (i=0;i<(char1-48);i++)
            cout<<" "<<'*';
            cout<<endl;}
            
    else{
         cout<<char1;
         cout<<" ?"<<endl;
    }
    if (isdigit(char2)) {
        cout<<char2;
        for (i=0;i<(char2-48);i++)
            cout<<" "<<'*';
            cout<<endl;}
            
    else{
         cout<<char2;
         cout<<" ?"<<endl;
    }
    if (isdigit(char3)) {
        cout<<char3;
        for (i=0;i<(char3-48);i++)
            cout<<" "<<'*';
            cout<<endl;}
            
    else{
         cout<<char3;
         cout<<" ?"<<endl;
    }
    if (isdigit(char4)) {
        cout<<char4;
        for (i=0;i<(char4-48);i++)
            cout<<" "<<'*';
            cout<<endl;}
            
    else{
         cout<<char4;
         cout<<" ?"<<endl;
    }
    
    
    return 0;
}

