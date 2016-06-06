/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 28, 2016, 9:05 PM
 */
//System Libraries
#include <iostream>
#include <string> 
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void srtName(string [], int);
//Execution Begins Here

int main(int argc, char** argv){
    //Declare Variables
     const int NUM_NAME=20;
     string names[NUM_NAME]={"Collins, Bill", "Smith, Bart", "Allen, Jim", 
     "Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri", 
     "Johnson, Jill", "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
     "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
     "Javens, Renee",  "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", 
     "Holland, Beth"};
     
     srtName(names, NUM_NAME);
     
    return 0;
}
void srtName(string names[], int size){
    int start, minIndx;
     
     for(start=0;start<size-1;start++)
     {
         minIndx=start;
        string minVal=names[start];
         for(int index=start+1;index<size;index++){
             if (names[index]<minVal){
                 minVal=names[index];
                 minIndx=index;
             }         
         }
         names[minIndx]=names[start];
         names[start]=minVal;
     }  
     
     for(start=0;start<=19;start++)
         cout<<names[start]<<endl;
}