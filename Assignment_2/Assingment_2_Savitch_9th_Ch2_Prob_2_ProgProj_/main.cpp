/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 18, 2016, 5:07 PM
 */
//System Libraries
#include <iostream>
#include <cstring>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float weight, height, age, bmrM, bmrF, chocBM, chocBF; 
    char gendr;
   
    bmrF= 655+(4.3*weight)+(4.7*height)-(4.7*age);
    bmrM= 66+(6.3*weight)+(12.9*height)-(6.8*age);
    chocBM=bmrM/230;
    chocBF=bmrF/230;
    
    cout<<"Please enter your weight in pounds: \n";
    cin>>weight;
    
    cout<<"Next, enter your hight: \n";
    cin>>height;
    
    cout<<"What is your current age in years? \n";
    cin>>age;
    
    cout<<"Finally, enter M for male or F for female: "<<endl;
    cin.getline(gendr);
   
    if gendr = M
        cout<<"Your BMR is: "<<bmrM<<" or the equivalent of "<<chocBM
                <<" chocolate bars."<<endl;
    else gendr = F;
        cout<<"Your BMR is: "<<bmrF<<" or the equivalent of "<<chocBF
                <<" chocolate bars."<<endl;
   
    return 0;
}

