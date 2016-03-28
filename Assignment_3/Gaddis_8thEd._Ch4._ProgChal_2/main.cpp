/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 27, 2016, 5:30 PM
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
    int num;
    
    cout<<"Choose a number between 1 and 10:"<<endl;
    cin>>num;
    
    if (num<1||num>10)
        cout<<"Retry and enter a valid number."<<endl;
    else
        cout<<"The number you entered is "<<num<<"or Roman numeral:"<<endl;
    
    switch(num){
            
        case 1:cout<<"I \n";
            break;
        case 2:cout<<"II \n";
            break;
        case 3:cout<<"III \n";
            break;
        case 4:cout<<"IV \n";
            break;
        case 5:cout<<"V \n";
            break;
        case 6:cout<<"VI \n";
            break;
        case 7:cout<<"VII \n";
            break;
        case 8:cout<<"VIII \n";
            break;
        case 9:cout<<"XI \n";
            break;
        case 10:cout<<"X \n";
}   
    return 0;
}

