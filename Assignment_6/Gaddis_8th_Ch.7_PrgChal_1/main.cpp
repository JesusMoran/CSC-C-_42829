/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 9, 2016, 9:48 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void input();
void output(int [], const int);

//Execution Begins Here

int main(int argc, char** argv) {
    
    input();

    return 0;
}
/*******************************************************************************
*******************************************************************************/
void input()
{
   //Declare Variables
    const int NUM_VAL=10;
    int value[NUM_VAL];
    int num=0;
    
    do{
        cout<<"Enter value number "<<num+1<<": "<<endl;
        cin>>value[num++];

    }while(num<10); 
    
    output(value, NUM_VAL);
}
/*******************************************************************************
*******************************************************************************/
void output(int value[], const int NUM_VAL)
{
    int count;
    int small=value[0];
    int big=0;
    
        for (count=0;count<10;count++)
            if (value[count]<small)
                small=value[count];
        
        cout<<"The smallest number is: "<<small<<endl;
        
        for (count=0;count<10;count++)
            if (value[count]>big)
                big=value[count];
        
        cout<<"The largest number is: "<<big<<endl;
}