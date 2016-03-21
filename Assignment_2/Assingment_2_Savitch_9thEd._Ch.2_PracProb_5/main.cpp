/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 18, 2016, 3:43 PM
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
    float rad, vol;
    
    cout<<"Enter the radius of a sphere: "<<endl;
    cin>>rad;
    
    vol=(4.0/3.0)*3.1415*rad*rad*rad;
    
    cout<<"The volume is: "<<vol<<endl;
    return 0;
}