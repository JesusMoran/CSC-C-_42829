/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 21, 2016, 9:56 AM
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
float lotT1, lotT, lotTNM;
float lumpS   = 0.62;
float taxP    = 0.52;
float marrigP = 0.50;


    cout<<"If you win the lottery, you lose a percentage. \n";
    cout<<"This program calculates your earnings after penalties. \n";
    cout<<"Enter the lottery total you dream of winning in dollars:"<<endl;
    cin>>lotT1;
    lotT=lotT1*(lumpS*(taxP*marrigP));
    lotTNM=lotT1*(lumpS*taxP);
    
   cout<<setprecision(2)<<fixed<<
    "First the Lump sum penalty is claimed at 6.2%, followed by a tax penalty at 5.2%"
      "and then the marriage penalty of 5%, leaving $"<<lotT<<"."<<endl;
    cout<<setprecision(2)<<fixed<<
    "If you are not married, first the Lump sum penalty is claimed at 6.2% and"
            " followed by a tax penalty at 5.2%, leaving $"<<lotTNM<<endl;   
    return 0;
}

