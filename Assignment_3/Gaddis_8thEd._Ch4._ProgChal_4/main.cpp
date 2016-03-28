/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 6:33 PM
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
int length, width, total, length2, width2, total2; 

    cout<<"Enter the length of the first rectangle:"<<endl;
    cin>>length;
    cout<<"Enter the width of the first rectangle:"<<endl;
    cin>>width;
    
total=length*width;
    
    cout<<"Enter the length of the second rectangle:"<<endl;
    cin>>length2;
    cout<<"Enter the width of the second rectangle:"<<endl;
    cin>>width2;
    
total2=length2*width2;
    
    if (total>total2)
        cout<<"The are of Rectangle one("<<total<<
                ") is greater than Rectangle two("<<total2<<"). \n";
     else 
        cout<<"The are of Rectangle two("<<total2<<
                ") is greater than Rectangle one("<<total<<")."<<endl;
    
    return 0;
}

