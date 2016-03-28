/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 6:08 PM
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
    int day, month, year, total;
    total=month*day;
    
    cout<<"Enter a the number of a day: \n";
    cin>>day;
    cout<<"Enter a month in two digit form: \n";
    cin>>month;
    cout<<"Enter the year in two digit format:"<<endl;
    cin>>year;
    
    if (year=total)
        cout<<"The year you picked is magical!!!"<<endl;
     else
        cout<<"The year is not magical. =("<<endl;
    
            
    return 0;
}

