/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 27, 2016, 12:33 PM
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
    char choice1, choice2;
 
    //Input for first player
    cout<<"Let's play a game of rock, paper, scissors. \n";
    cout<<"Enter 'R' for rock \n";
    cout<<"Enter 'P' for paper \n";
    cout<<"Enter 'S' for scissors: "<<endl;
    cin>>choice1;
    
    //Input for second player
    cout<<"Now its player two's turn. "<<endl;
    cin>>choice2;
 
    //Mapping the inputs to the outputs for Rock
    if (choice1=='R')
         if (choice2=='S') cout<<"Rock breaks Scissors."; 
         else if (choice2=='P') cout<<"Paper covers Rock."<<endl;
              else cout<<"Nobody wins."<<endl;
         
    //Mapping the inputs to the outputs for Paper
    if (choice1=='P')
          if(choice2=='S') cout<<"Scissors cut Paper.";
          else  if (choice2=='R') cout<<"Paper covers Rock."<<endl;
          else cout<<"Nobody wins."<<endl;
          
    //Mapping the inputs to the outputs for Scissors      
    if (choice1=='S')
          if(choice2=='P') cout<<"Scissors cut Paper.";
          else  if (choice2=='R') cout<<"Rock breaks Scissors."<<endl;
          else cout<<"Nobody wins."<<endl;
    //Fin
    return 0;
}

