/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 8:12 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int mass, newton;
    
    cout<<"Input the mass of an object in kilograms: \n";
    cin>>mass;
    
    newton=mass*9.8;
    
    if (newton>=10&&newton<=1000)
      cout<<"Its weight is equal to "<<newton<<" newton's."<<endl;
        if (newton<10)
            cout<<"The object's weight is "<<newton<<". It is to light."<<endl;
        if (newton>1000)
            cout<<"The object's weight is "<<newton<<". It is to heavy."<<endl;
    
    return 0;
}

