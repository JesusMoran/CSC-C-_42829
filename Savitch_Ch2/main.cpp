/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 * Purpose: Babylonian Square root appro
 * Created on March 9, 2016, 8:01 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global COnstant
//Function Prototype

//Execution begins here
int main(int argc, char** argv)
{
//Declare variables
    float n, r, guess;
    
    //input our numbers to square root
    cout<< "What number would you like to find the square root of?"<<endl;
    cin>>n;
    
    //Calculate the first approximation 
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first approximation
    cout<<"First approximation = square root("<<n<<") = r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    //Second approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first approximation
    cout<<"Second approximation = square root("<<n<<") = r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    //Third approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first approximation
    cout<<"Third approximation = square root("<<n<<") = r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    //Forth approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first approximation
    cout<<"Forth approximation = square root("<<n<<") = r("
            <<r<<"),guess("<<guess<<")"<<endl;
    
    //Fifth approximation
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the first approximation
    cout<<"Fifth approximation = square root("<<n<<") = r("
            <<r<<"),guess("<<guess<<")"<<endl;
    //End
    return 0;
}

