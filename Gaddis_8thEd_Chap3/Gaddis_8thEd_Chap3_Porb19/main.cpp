/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 7, 2016, 8:04 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
//User libraries

//Global Constant

//Function Prototype

//Execution begins here
using namespace std;

/*
 * 
 */
int main(int argc, char** argv)

{
//Declare variables
    float l, r, n, p, x;
    
//Map the input to the output
   cout<< "How much money do you want in the loan?\n";
   cin>>l;
    
   cout<< "This is our current interest rate you are qualified for.\n";
   cin>>r;
   
   cout<< "This is the number of payments in the year.\n";
   cin>>n;
    
   x = pow(1 + r, n);
   p = ((r*x)/(x-1))*l;
   
   
   cout<<fixed<<showpoint<< setprecision(2)<< "Your total is:$"<< p <<" per month."<<endl;
//Input values
    
    return 0;
}

