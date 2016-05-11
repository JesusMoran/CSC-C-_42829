/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on February 28, 2016, 4:54 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User libraries

//Global Constant

//Function Prototype

//Execution begins here
int main( ) 
{   
//Declare variables
    float total, quarter, dime, nickel;
    
//Map the input to the output
    
//Input values
    cout << "Welcome.\n";
    cout << "Please enter the number of quarters in the register: \n";
    cin >> quarter; //First input
    
    cout << "Please enter the number of dimes: \n";
    cin >> dime;   // Second input
    
    cout << "Please enter the number of nickels: \n";
    cin >> nickel;  //Third input
    
   //Output results
    total = (quarter * .25) + (dime * .10) + (nickel * .05);
    cout<<fixed<<showpoint<< setprecision(2)<< "Your total is:$ "<< total<<endl;

    //End.
    return 0;
}

