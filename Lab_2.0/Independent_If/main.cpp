/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 23, 2016, 9:36 AM
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
    
    //Input name of student
    cout<<"Enter the name of the student: \n";
    cin.getline(name,SIZE);
    
    //Input students score
    cout<<"Enter the current score of the student: "<<endl;
    cin>>score;
    
    //If statement to output letter grade
    if (score >= 90) grade='A';
    else if (score >= 80) grade='B';
    else if (score >= 70) grade='C';
    else if (score >= 60) grade='D';
    else if (score < 59) grade='F';
    
    //Final output of the name and letter grade 
    cout<<name<<" currently has a grade of "<<grade<<"."<<endl;
    
    //Fin
    return 0;
}

