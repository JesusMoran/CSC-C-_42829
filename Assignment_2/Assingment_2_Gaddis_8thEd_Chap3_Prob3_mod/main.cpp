/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 9, 2016, 10:11 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
const float f1(32);
const float f2(212);
const float c1(0);
const float c2(100);

//Function Prototype

//Execution Begins Here
int main(int argc, char** argv)
{
//Declare Variables
    float f1, f2, c1,c2, c0, c, f0, fI;
    
    cout<<"What is the temperature in Fahrenheit? \n";
    cin>>f0;
    c = (5.0f / 9) * (f0 - 32.0);
    cout<<fixed<<showpoint<< setprecision(1)<<f0<<
            " Degrees Fahrenheit is equal to "<<c<<" Degrees Celsius."<<endl;
    
    c0 = c1 + (c2 - c1) * (f0 - f1) / (f2 - f1);
    cout<<"In a Interpolatin scale we get the result of: "<<c0<<endl;
    
    return 0;
}

