/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 2, 2016, 10:47 AM
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
    float google, calTax, total, gtotal;
    
//Map the input to the output
    
//Input values
    google = 57.86e9f;//Source: http://www.cnet.com/news/google-demolishes-financial-expectations-to-close-2013/
    calTax = 8.84;
    
    cout<<"Google earns around $57.86 billion but some of its earning are taken by taxes."<<endl;
    cout<<"Taxes in California for businesses are some of the highest at 8.84%, so the following program calculates about how much Google has to pay:"<<endl;
    total=google/calTax;
    cout<<fixed<<showpoint<<setprecision (2)<<"$"<<total<<endl;
    gtotal= google - total;
    cout<<"Leaving them with:\n";
    cout<<"$"<<gtotal;
    
    //End
    return 0;
}

