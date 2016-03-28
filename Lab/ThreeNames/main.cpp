/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 16, 2016, 10:07 AM
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
    const int SIZE=40;
    char name1[SIZE], name2[SIZE], name3[SIZE];
    
    cout<<"Enter a name: \n";
    cin.getline(name1,SIZE);
    
    cout<<"Enter a second name: \n";
    cin.getline(name2,SIZE);
    
    cout<<"Enter a third name: \n";
    cin.getline(name3,SIZE);
    
    if (strcmp(name1,name2)== 0)
        cout<<"You have entered the same name twice. \n";
    else if (strcmp(name1,name2)<0)
        cout<<"You have entered: "<<name1<<", "<<name2<<", and "<<name3<<"\n";
    return 0;
}

