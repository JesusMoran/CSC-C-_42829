/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 30, 2016, 9:48 AM
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
    char ascii;
    int num;
    
    //Purpose of the program
    cout<<"The following displays the ASCII character for codes 0 to 127."<<endl;
    
    //For loop that outputs numbers from 1 to 127
   for
    (num=0;num<=127;num++)
   {
       //If statement that limits each row to 16 characters
       if (num%16 ==0)
           cout<<endl;
       ascii++;
    //Output of the characters
    cout<<ascii<<"  ";
   }
    //Fin
    return 0;
}

