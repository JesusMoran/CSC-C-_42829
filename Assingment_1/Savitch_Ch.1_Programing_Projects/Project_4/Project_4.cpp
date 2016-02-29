/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on February 28, 2016, 6:04 PM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main() 
{
//Variables
    int dis, acc, sec;
    
    //Projects starts here
    cout << "Welcome to Newton labs. Home of gravitational studies.\n";
    cout << "Please choose an object and throw it in the air.\n";
    cout << "How long did it take for the object to fall in seconds?\n";
    
    //First input
    cin >> sec;
    
    cout << "Due to advanced studies, we know the object falls at 32 feet per second in a vacuum.\n";
    
    //Equation
    acc = 32;
    dis = acc * (sec * sec)/2;
    
   //Result
    cout << "The total distance the object can traveled is: ";
    cout << dis << " ft/sec.\n";
    
    //End.
    cout << "Congratulations future scientist!!! =D.\n";
    return 0;
}

