/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 2, 2016, 7:58 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User libraries

//Global Constant

//Function Prototype

//Execution begins here
int main(int argc, char** argv)
{
//Declare Variables
   float nasaB, milB,fedB, totalM, totalN, totalP;
    
//Map the input to the output
    
//Input values
    nasaB = 19.3e9f;
    milB  = 601e9f;
    fedB  = 3.8e12f;
    
    cout<<"The following program has been written to evaluate the total budget for both NASA and the Military."<<endl;
    cout<<"The total percentage for the military, considering that the Federal budget is 3.8 trillion and 601 billion is allocated to it is about:"<<endl;
    totalM = (milB/fedB)*100;//Total budget for the military
    cout<<fixed<<showpoint<< setprecision(2)<< totalM<<"%"<<endl;
    
    cout<<"The total for NASA, that has 19.3 billion is:"<<endl;
    totalN = (nasaB/fedB)*100;//Total for budget NASA
    cout<<fixed<<showpoint<< setprecision(2)<< totalN <<"%"<< endl;
    
    //Output results
    cout<<"The total Federal budget for both branches is:"<<endl;
    totalP=totalN + totalM;
    cout<<totalP<<"%"<<endl;//Both NASA and Military
    
//End
    return 0;
}

