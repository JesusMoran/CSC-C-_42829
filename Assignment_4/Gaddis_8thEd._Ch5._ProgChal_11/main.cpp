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
    float sNum,sNumT, avrPI, inDays, tIncr, total, days;
    
    //Purpose of the program
    cout<<"This program shows the increase of a"
            " population of organisms per day."<<endl;
    cout<<"=================================="
            "===================================="<<endl;
    
    //Inputs for starting number(sNum)
    cout<<"Please enter the starting number of organisms"
            " (Must be more than two):"<<endl;
    cin>>sNum;
    
    //Input for average daily population increase (avrPI)
    cout<<"Enter the average daily population increase as a percentage"
            " for this organisms (Use positive numbers):"<<endl;
    cin>>avrPI;
    
    //Input of days observed (inDays)
    cout<<"Enter the number of days it will be observed"
            " (Must be more than one):"<<endl;
    cin>>inDays;
    
    //If statement for invalid inputs
    if (sNum>2, avrPI>0, days>1)
        cout<<"Error. Enter a valid number!!!"<<endl;
        
    else
        cout<<"Days     Total"<<endl;
    
        //Loop for calculations of daily increase
        for(days=2;days<=inDays;days++)
        { 
            sNum+=tIncr;
            tIncr=(avrPI/100)*sNum;
            total=tIncr+sNum;
            
            //Output of day and total number of organisms
            cout<<days<<setw(12)<<total<<endl;
        }
        
    //Fin
    return 0;
}

