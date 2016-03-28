/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 23, 2016, 9:37 AM
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
    const int SIZE=40;
    char name[SIZE], grade;
    int score;
    
    //Input name
    cout<<"Enter the name of the student: \n";
    cin.getline(name,SIZE);
    
    //Input score
    cout<<"Enter the current grade of the student: "<<endl;
    cin>>score;
    
    switch(score <= 100 && score >=90){
        case true:grade = 'A';
        break;
         default:
     switch(score <= 89 && score >=80){
             case true:grade = 'B';
             break;
              default:
    switch(score <= 79 && score >=70){
                   case true:grade = 'C';
                    default:
    switch(score <= 69 && score >=60){
             case true:grade = 'D';
             break;
              default:
    switch(score <=59 && score >= 0){
             case true:grade = 'F';
             break;
              default:
    };
    };
    };
    };
    
     
    return 0;
}

