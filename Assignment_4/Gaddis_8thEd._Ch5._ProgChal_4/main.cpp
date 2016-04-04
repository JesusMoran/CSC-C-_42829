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
    float min, minT, cal=3.6, total;
    
    //Purpose of the program
    cout<<"This program shows the amount of calories burned every five minutes."
            <<endl;
    cout<<"Minutes     Total"<<endl;
    
    //For loop that calculates the calories burned in five minute increments
    for(min=1; min<=6; min++)
    {
        minT=min*5;
        total=cal*minT;
        
        //Output of calories every 5 min
        cout<<minT<<setw(15)<<total<<endl;
    }
    
    //Fin
    return 0;
}

