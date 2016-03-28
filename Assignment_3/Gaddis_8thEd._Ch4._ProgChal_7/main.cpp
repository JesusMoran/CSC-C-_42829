/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 8:22 PM
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
    float sec, min, hour, day, total;
    
    cout<<"Enter the number of seconds it takes you to complete a task: \n";
    cin>>sec;
    
    min=sec/60;
    hour=sec/3600;
    day=sec/86400;
    
    if(sec<60)
        cout<<fixed<<setprecision(2)<<
                "The time it takes is "<<sec<<" second(s)."<<endl;
    if(sec>=60&&sec<3600)
        cout<<fixed<<setprecision(2)<<
                "The time it takes is "<<min<<" minute(s)."<<endl;
    if(sec>=3600&&sec<86400)
        cout<<fixed<<setprecision(2)<<
                "The time it take is "<<hour<<" hour(s)."<<endl;
    if(sec>=86400)
        cout<<fixed<<setprecision(2)<<
                "The time it take is "<<day<<" day(s)."<<endl;
    
    return 0;
}

