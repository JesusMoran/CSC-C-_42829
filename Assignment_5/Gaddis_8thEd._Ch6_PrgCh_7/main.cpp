/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 23, 2016, 10:17 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void temInC(float);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float fahren;
    
    cout<<"Enter a valid number of Fahrenheit you wish to convert:"<<endl;
    cin>>fahren;
    
    if (fahren>=0)
        temInC(fahren);
    
    else
        cout<<"Error!!! Enter a valid number."<<endl;
    
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void temInC(float fahren)
{   
    float celsi, temp, max;
    {
    celsi=(5*(fahren-32))/9;
    
    cout<<fixed<<setprecision(2)<<fahren<<
           " degrees Fahrenheit is equal to "<<celsi<<" degrees Celsius."<<endl;
    
    cout<<endl;
    cout<<"The following is the conversion from 0 to 20:"<<endl;
    cout<<"Fahrenheit     Celsius"<<endl;
    }
    for(temp=0;temp<=20;temp++){
        max=(5*(temp-32))/9;
  
    cout<<fixed<<setprecision(2)<<showpoint<<temp<<"           "<<max<<endl;
    }
}
