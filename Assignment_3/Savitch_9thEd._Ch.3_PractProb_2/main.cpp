/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 27, 2016, 1:58 PM
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
float inter, total, minPay, accBal, totalL, intrL, iPayL, iPay, month;

cout<<"What is the current balance in the account in dollars?"<<endl;
cin>>accBal;
cout<<"Current balance is $"<<setprecision(2)<<fixed<<accBal<<endl;

inter=0.15;
iPay=accBal*inter;
total=accBal+iPay;

intrL=0.01;
iPayL=accBal*intrL;
totalL=accBal+iPayL;
month=totalL*0.10;

if (accBal<1000)
    cout<<"Total amount due is $"<<total<<"\n"<<
            "Total interest is 1.5% or $"<<iPay<<"\n"<<
            "Minimum payment is $10 or per month or total balance."<<endl;

else if (accBal>=1000)
            cout<<"Total amount due is $"<<totalL<<"\n"<<
                  "Total interest is 1% or $"<<iPayL<<"\n"<<
                  "Minimum payment is $"<<month<<" per month."<<endl;

    return 0;
}

