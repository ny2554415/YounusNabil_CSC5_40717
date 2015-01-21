/* 
 * File:   main.cpp
 * Author: Nabil Younus
 * Created on January 21, 2015, 11:37 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants
const float G=6.673e-8f;//Gravitational constants cm^3/g sec^2

//Function Prototypes
//F             m1    m2     d
float atrForc(float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables, Values found of Google
    float mEarth=5.972e24;//mass of earth in kilograms
    float wtMark=188.0f;//weight of Mark in pounds
    float rEarth=6.371e3l;//radius of earth in kilometers
    //Conversions for consistent units
    mEarth*=1e3;//convert to grams -> 10^3/kg
    float mMark=wtMark*453.59;//453.59/lb
    rEarth*=(1e3f*1e2f);//10^3m/kmU10^2cm/m
    //Calculate the attractive force in dynes
    float dynes=atrForc(mEarth,mMark,rEarth);
    float lbs=dynes/4.44822e5f;//conversion lbs to dynes
    //Output the results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs = "<<lbs<<endl;
    //Exit stage right
    return 0;
}

float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}