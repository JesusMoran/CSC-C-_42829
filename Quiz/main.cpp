/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 4, 2016, 8:44 AM
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
    int total, num;
    
    for (num>1; num<11; num++ )
    {
    total+=num;  
    }
        
    cout<<"The sum of all integers from 1 to 10 is: "<<total<<endl;
    return 0;
}

