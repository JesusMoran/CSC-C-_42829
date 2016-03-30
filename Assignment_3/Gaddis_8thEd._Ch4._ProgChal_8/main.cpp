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
int color, color2, red=1, blue=2, yellow=3;
    
    cout<<"Enter the number 1 for Red, 2 for blue, and 3 for yellow."<<endl;
    cout<<"Enter the first primary color in all lowercase to be mixed:"<<endl;
    cin>>color;
    cout<<"Enter the next primary color in all lowercase to be mixed:"<<endl;
    cin>>color2;
    
    if(color==1&&color2==2)
        cout<<"You've made violet"<<endl;
    else if(color==1&&color2==3)
        cout<<"You've made orange"<<endl;
    else if(color==2&&color2==1)
        cout<<"You've made violet"<<endl;
    else if(color==2&&color2==3)
        cout<<"You've made green"<<endl;
    else if(color==3&&color2==1)
        cout<<"You've made orange"<<endl;
    else if(color==3&&color2==2)
        cout<<"You've made green"<<endl;
    else
        cout<<"You've entered the wrong color(s), try again."<<endl;
    return 0;
}

