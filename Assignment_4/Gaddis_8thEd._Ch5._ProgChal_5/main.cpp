/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 30, 2016, 9:48 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float year, per=0.04, fee=2500;
    cout<<"This program shows the total fees for a country club every year." 
            <<endl;
    
    cout<<"Year       Total"<<endl;
    
    for(year=1; year<=6; year++)
    {
        fee=fee+(fee*per);
               
        cout<<fixed<<setprecision(0)<<year<<
                setw(8)<<fixed<<setprecision(2)<<"$"<<fee<<endl;
    }
    return 0;
}

