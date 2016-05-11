/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on May 9, 2016, 9:48 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void input();
void output(int [], int);

//Execution Begins Here

int main(int argc, char** argv) {
    
    input();

    return 0;
}
/*******************************************************************************
*******************************************************************************/
void input()
{
   //Declare Variables
    const int NUM_VAL=10;
    int value[NUM_VAL];
    int num=0;
    
    do{
        cout<<"Enter value number "<<num+1<<": "<<endl;
        cin>>value[num++];

    }while(num<10); 
    
    output(value, num);
}
/*******************************************************************************
*******************************************************************************/
void output(int value[], int num)
{
    int count;
    
    num=0;
    
    do{
        
    }while(count<10);
}