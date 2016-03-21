/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 16, 2016, 8:40 PM
 */
//System Libraries
#include <iostream>
#include <cstring>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv)
{
    //Declare Variables
    const int SIZE=40;
    char iName[SIZE], yName[SIZE], food[SIZE], 
            adjtv[SIZE], color[SIZE], animal[SIZE];
    int number;
    //First input
    cout<<"Enter the first or last name of your instructor: "<<endl;
    cin.getline(iName,SIZE);
    //Second input
    cout<<"Enter your name: "<<endl;
    cin.getline(yName,SIZE);
    //Third input
    cout<<"Enter an adjective: \n";
    cin.getline(adjtv,SIZE);
    //Forth input
    cout<<"Enter your favorite food: "<<endl;
    cin.getline(food,SIZE);
    //Fifth input
    cout<<"Enter your favorite color: "<<endl;
    cin.getline(color,SIZE);
    //Sixth input
    cout<<"Enter your favorite animal: "<<endl;
    cin.getline(animal,SIZE);
    //Seventh input
    cout<<"Enter a number between 100 and 120: \n";
    cin>>number;
   
    cout<<" "<<endl;
    
    //Map the input to the output
    cout<<"Dear Instructor "<<iName<<"\n";
    cout<<"\n";
    cout<<"I am sorry that I am unable to turn in my homework at this time. First, \n";
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I \n";
    cout<<"came down with a fever of "<<number<<". Next, my "<<adjtv<<" pet \n";
    cout<<animal<<" must have smelled the remains of the "<<food<<" on my homework, \n";
    cout<<"because he ate it. I am currently rewriting my homework and hope you \n";
    cout<<"will accept it later. \n";
    cout<<"\n";
    cout<<"Sincerely, \n";
    cout<<yName<<endl;
    
    //End      
    return 0;
}

