/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 27, 2016, 5:05 PM
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
    int dig1, dig2;
    
    //Input for first digit
    cout<<"Enter a number of your choice:"<<endl;
    cin>>dig1;
    
    //Input for second digit
    cout<<"Enter a second number:"<<endl;
    cin>>dig2;
    
    //Compare both input digits
    if (dig1>dig2)
        cout<<dig1<<" is greater than "<<dig2<<endl;
    else if (dig1<dig2)
            cout<<dig1<<" is less than "<<dig2<<endl;
     else if (dig1=dig2)
         cout<<"The numbers are equal."<<endl;
     else
         cout<<"Restart and enter a valid number."<<endl;
    
    //Fin  
    return 0;
}

