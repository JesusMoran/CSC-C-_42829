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
    cout<<"This program shows the amount of calories burned every five minutes."
            <<endl;
    cout<<"Minutes     Total"<<endl;
    
    for(min=1; min<=6; min++)
    {
        minT=min*5;
        total=cal*minT;
        cout<<minT<<setw(15)<<total<<endl;
    }
    return 0;
}

