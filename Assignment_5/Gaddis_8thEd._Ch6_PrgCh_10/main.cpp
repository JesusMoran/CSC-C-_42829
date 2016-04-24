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
void futVal(float, float, float);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float present, fut, inRat, month;
    
    cout<<"Want to know how much money you will have?"<<endl;
    cout<<endl;
    
    cout<<"Enter the amount you currently have:"<<endl;
    cin>>present;
    
    cout<<"Enter the monthly interest rate:"<<endl;
    cin>>inRat;
    
    cout<<"Enter the number of months you plan to let money compound:"<<endl;
    cin>>month;
    
    if(present>0&&inRat>0&&month>0)
        futVal(present, inRat, month);
    else
        cout<<"Error!!! Enter a valid number."<<endl;
                
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void futVal(float present, float inRat, float month)
{
   float fut, intPer; 
   
   intPer=inRat/100.0;
   fut=present*(pow(1+intPer, month));
   
   cout<<"You would have $"<<
           fixed<<setprecision(2)<<showpoint<<fut<<endl;
}

