/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on February 28, 2016, 3:10 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User libraries

//Global Constant

//Function Prototype

//Execution begins here
int main( )
{
//Declare Variables
    int roomP, roomA, length, width;

     //Map the input to the output
    
    
//Calculates the total of the rooms perimeter and area
    
    cout << "Welcome to Flooring Pro's.\n" ;

    cout << "Press enter after placing the measurement's.\n";
    cout << "Enter the length of the room in feet: \n ";

    cin >> length ;

    cout << "Now, enter the width of the room in feet: \n";

    //Input values
    cin >> width;
    roomP = length + width;
    roomA = length * width;
    
    cout << "Thank you. Please verify that the information is correct. \n" ;
    cout << "The total perimeter of the room in feet is: \n" ;
    cout << roomP ;
    cout << " feet.\n";
    
    //Output results
    cout << "The total area of carpet needed in square feet is: \n";
    cout << roomA ;
    cout << " square feet.\n";
    
    cout << "An assistant will now show you our selection.\n";
    cout << "Thank you for choosing Flooring Pro's. \n";

// End.

    return 0;
}

