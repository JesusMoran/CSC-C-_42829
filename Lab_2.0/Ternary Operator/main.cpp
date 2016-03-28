/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author:Jesus E. Moran Rivera
 * 
 *
 * Created on March 23, 2016, 8:11 AM
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
    
    //Ternary outputs grade based on score
    (score <= 100 && score>=90 ? grade = 'A':'F');
    (score <= 89 && score>= 80 ? grade = 'B':'F');
    (score <= 79 && score>= 70 ? grade = 'C':'F');
    (score <= 69 && score>= 60 ? grade = 'D':'F');
    (score <= 59 && score>= 0 ? grade = 'F':'F');
    
    //Name and grade output
    cout<<name<<" has a grade of "<<grade<<"."<<endl;
    
    //Fin
    return 0;
}

