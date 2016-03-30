/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 27, 2016, 5:05 PM
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
    int digt1, digt2;
    
    //Input for first digit
    cout<<"Enter a number of your choice:"<<endl;
    cin>>digt1;
    
    //Input for second digit
    cout<<"Enter a second number:"<<endl;
    cin>>digt2;
    
    //Compare both input digits
    if (digt1>digt2)
        cout<<digt1<<" is greater than "<<digt2<<endl;
    else if (digt1<digt2)
            cout<<digt1<<" is less than "<<digt2<<endl;
     else if (digt1=digt2)
         cout<<"The numbers are equal."<<endl;
     else
         cout<<"Restart and enter a valid number."<<endl;
    
    //Fin  
    return 0;
}