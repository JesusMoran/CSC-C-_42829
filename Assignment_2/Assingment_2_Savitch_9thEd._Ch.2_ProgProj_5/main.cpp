/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 18, 2016, 4:00 PM
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
    int legNum, ilegNum, guest, maxOcp;
    
    cout<<"Please enter the number of maximum occupancy: \n";
    cin>>maxOcp;
    cout<<"How many guest will be attending the event? \n";
    cin>>guest;
    legNum = maxOcp - guest;
    ilegNum = guest - maxOcp;
    
    if (guest < maxOcp)
        cout<<"You do not exceed the maximum number of guest. \n"<<"You may also"
                " invite "<<legNum<<" more guest. Enjoy the event!"<<endl;
    else if (guest > maxOcp)
            cout<<"You've exceeded the maximum number of guest!"<<
                    "Please remove "<<ilegNum<<" guest from the list."<<endl;
         
    return 0;
}

