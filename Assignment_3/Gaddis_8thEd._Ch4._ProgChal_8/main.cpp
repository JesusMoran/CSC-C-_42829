/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 8:41 PM
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
char color, color2, red, blue, yellow;
    
    cout<<"Enter the first primary color in all lowercase to be mixed:"<<endl;
    cin>>color;
    cout<<"Enter the next primary color in all lowercase to be mixed:"<<endl;
    cin>>color2;
    
    if(color==red&&color2==blue)
        cout<<"You've made violet"<<endl;
    if(color==red&&color2==yellow)
        cout<<"You've made orange"<<endl;
    if(color==blue&&color2==red)
        cout<<"You've made violet"<<endl;
    if(color==blue&&color2==yellow)
        cout<<"You've made green"<<endl;
    if(color==yellow&&color2==red)
        cout<<"You've made orange"<<endl;
    if(color==yellow&&color2==blue)
        cout<<"You've made green"<<endl;
    else
        cout<<"You've entered the wrong color(s), try again."<<endl;
    return 0;
}

