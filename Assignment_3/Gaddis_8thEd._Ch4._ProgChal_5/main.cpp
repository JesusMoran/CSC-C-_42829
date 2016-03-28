/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 7:42 PM
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
    int weight, hight, bmi;
    
    cout<<"Enter your current weight in pounds: \n";
    cin>>weight;
    
    cout<<"Enter current height in inches: \n";
    cin>>hight;
    
    bmi=weight * 704 / (hight*hight);
    
    cout<<fixed<<setprecision(0)<<"Your BMI is "<<bmi<<"."<<endl;
    
    if (bmi>=18.5&&bmi<=25)
        cout<<"You are at Optimum for your weight."<<endl;
     if (bmi<18.5)
        cout<<"Carful, you are underweight."<<endl;
         if (bmi>25)
             cout<<"Careful, you are overweight."<<endl;
               else
                  cout<<"Error. Invalid value, try again."<<endl;
                
    return 0;
}

