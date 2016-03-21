/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author:Jesus E. Moran Rivera
 *
 * Created on March 16, 2016, 8:01 AM
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
    float payRate, hrsWrkd, payChk;
    float ovrTime=40;
    
    //Input values
    cout<<"Input Pay Rate ($'s/hr) and Hours Worked both dd.dd format."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map the input to the output
    if(hrsWrkd <= ovrTime) payChk=hrsWrkd*payRate;
    if(hrsWrkd > ovrTime) payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    if(hrsWrkd < 0 || hrsWrkd > 98)payChk=0;
    
    //Output results
    cout<<"Paycheck = $"<<payChk<<" for "<<hrsWrkd<<
            " hours worked at $"<<payRate<<"/hr"<<endl;
    
//End    
    return 0;
}

