/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 6:33 PM
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
int length, width, total, length2, width2, total2; 

//Input length and width of first triangle
    cout<<"Enter the length of the first rectangle:"<<endl;
    cin>>length;
    cout<<"Enter the width of the first rectangle:"<<endl;
    cin>>width;
 //Calculation for first triangle  
total=length*width;
    
//Input for second triangle
    cout<<"Enter the length of the second rectangle:"<<endl;
    cin>>length2;
    cout<<"Enter the width of the second rectangle:"<<endl;
    cin>>width2;
 //Calculation for second triangle   
total2=length2*width2;
    
//Compares the two results to output the correct order
    if (total>total2)
        cout<<"The are of Rectangle one("<<total<<
                ") is greater than Rectangle two("<<total2<<"). \n";
     else 
        cout<<"The are of Rectangle two("<<total2<<
                ") is greater than Rectangle one("<<total<<")."<<endl;
    
//Fin
    return 0;
}