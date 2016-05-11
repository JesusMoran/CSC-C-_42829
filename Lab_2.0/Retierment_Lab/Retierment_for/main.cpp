/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 * Purpose: To Calculate Retirement using for loops
 * Created on March 28, 2016, 8:04 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float salary=6e4f;//$60,000
    float percDep=1e-1f;//10% to save each year
    float pv=0.0f;//Present value
    float iRate=0.05f;//Interest rate
    int   nYears=0;//Comparison of calculation to the rule of 72
    float fv=pv;//Future value
    float yrlyDep;//Yearly Deposit in $'s
    float savRet;//Savings to retire in $'s
    
    //Calculate the approximate number of years to double by rule of 72
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //Loop each year until the future value is 2x the present value
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years   Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    for (nYears=1; fv<savRet; nYears++){
        fv*=(1+iRate);
        fv+=yrlyDep;
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    };
    //Fin
    return 0;
}