/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chuy
 *
 * Created on February 29, 2016, 10:15 AM
 */
//System Libraries
#include <iostream>

//User Libraries

using namespace std;

//Global Constants
unsigned char CNVHRMN=60;//Conversion from Hours to Minutes
unsigned char CNVMNSC=60;//Conversion from Minutes to seconds

int main( ){
    //Declare Variables
float mph;//Miles per hour
float fmin;//Pace minutes float
int   imin;//Pace minutes integers
float fsec;//Pace residual seconds float
int   isec;//Pace residual seconds integer

//Prompt for the input in mph
cout << "Input the miles per hour pace(dd.dd)"<<endl;
cin>>mph;

//Calculate the pace
fmin=CNVHRMN/mph;
imin=static_cast<int>

    return 0;
}