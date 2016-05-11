/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 * Purpose: To illustrate the rule f 72 by way of do-while loop
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
    float pv=100.0f;//Present value
    float iRate=0.05f;//Interest rate
    float nComp;//number f compounding periods by rule of 72
    int nYears;//Comparison of calculation to the rule of 72
    float fv=pv;//Future value
    
    //Calculate the approximate number of years to double by rule of 72
    nComp=0.72f/iRate;
    
    //Loop each year until the future value is 2x the present value
    cout<<"Interest value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years   Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    do{
        fv*=(1+iRate);
        nYears++;
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    }while (fv<2*pv);
    
    //Output the result
    cout<<"By the rule f 72 it will take "<<nComp<<" years to double."<<endl;
    cout<<"The future value = $"<<fv<<endl;
    cout<<"The number of years to more than double = "<<nYears<<endl;
    
    //Fin
    return 0;
}

