/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 24, 2016, 1:23 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void preVal(float, float, float);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float pres, futu, inRate, years;
    
    cout<<"Want to know how much to deposit?"<<endl;
    cout<<endl;
    
    cout<<"Enter the amount you wish to reach:"<<endl;
    cin>>futu;
    
    cout<<"Enter the annual interest rate:"<<endl;
    cin>>inRate;
    
    cout<<"Enter the number of years you plan to let money sit:"<<endl;
    cin>>years;
    
    if(futu>0&&inRate>0&&years>0)
        preVal(futu, inRate, years);
    else
        cout<<"Error!!! Enter a valid number."<<endl;
                
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void preVal(float futu, float inRate, float years)
{
   float pres, intPerc; 
   
   intPerc=inRate/100;
   pres=futu/(pow(1+intPerc, years));
   
   cout<<"You would need to deposit $"<<
           fixed<<setprecision(2)<<showpoint<<pres<<endl;
}
