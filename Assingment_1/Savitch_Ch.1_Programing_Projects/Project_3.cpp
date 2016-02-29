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

#include <iostream>
using namespace std;

/* 
 * 
 */
int main( ) 
{   
// Variables
    float total, quarter, dime, nickel;

// Program starts
    cout << "Welcome.\n";
    cout << "Please enter the number of quarters in the register: \n";
    cin >> quarter; //First input
    
    cout << "Please enter the number of dimes: \n";
    cin >> dime;   // Second input
    
    cout << "Please enter the number of nickels: \n";
    cin >> nickel;  //Third input
    
    //Math formula for program
    total = (quarter * .25) + (dime * .10) + (nickel * .05);
    
// Total output in dollars
    cout << "Your total is:$ ";
    cout << total;
    //End.
    return 0;
}

