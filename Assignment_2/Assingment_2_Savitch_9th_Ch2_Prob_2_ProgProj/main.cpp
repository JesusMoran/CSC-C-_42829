/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 9, 2016, 8:55 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) 
{
//Declare Variables
    float omSalry, oSalary, nSalary,nmSalry, backPay, perInc (.076), months, bPay, tMonth;
    
    cout<<"How much was your last years salary in dollars?"<<endl;
    cin>>oSalary;
    omSalry = oSalary / 12;
    cout<<fixed<<showpoint<< setprecision(2)<<"Your salary was: $"<<
            oSalary<<" or $"<<omSalry<<" per month"<<endl;
    
    nSalary = oSalary * (1 + perInc);
    nmSalry = nSalary / 12;
    cout<<"The new percentage increase means your new pay will be: $"<<nSalary<<
            " or $"<<nmSalry<<" per month."<<endl;
    
    cout<<"How many months did you work while being owed the new percentage? \n";
    cin>>months;
    tMonth = 12 / months;
    bPay = (nSalary - oSalary) / tMonth;
    cout<<"You are owed: $"<<bPay<<", Congradulations!!! =D"<<endl;
    
    //End
    return 0;
}

