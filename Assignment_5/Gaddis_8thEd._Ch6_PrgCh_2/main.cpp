/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 23, 2016, 5:49 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void total(float, float);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float lenght, width, area;
    
    cout<<"Enter the length of the rectangle:"<<endl;
    cin>>lenght;
    
    cout<<"Enter the width of the rectangle:"<<endl;
    cin>>width;
    
    if (lenght>0&&width>0)
        total(lenght, width);
    else
        cout<<"Pleas enter a valid number and try again."<<endl;
            
    return 0;
}
/*******************************************************************************
*******************************************************************************/
 void total(float lenght,float width)
 {
     float area;
     
     area=lenght*width;
    
    cout<<"The area of the rectangle is "<<area<<endl; 
 }