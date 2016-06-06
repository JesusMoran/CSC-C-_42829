/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 29, 2016, 5:44 PM
 */
//System Libraries
#include <iostream>
#include <string> 
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void srtName(string [], int, string);
int binSrch(string [], int, string);

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
     string userI="Setzer, Cathy";
     
     srtName(names, NUM_NAME, userI);
     
    return 0;
}
void srtName(string names[], int size, string userI){
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
    
     binSrch(names, size, userI);
}
int binSrch(string names[], int size, string userI){
    //Define range and midpoint
    int beg=0,end=size-1,middle=(beg+end)/2;
    //Loop until found
    while(end>=beg){
        if(names[middle]==userI){ 
           cout<<userI<<" has been found."<<endl;
            return middle;
        }else if(names[middle]>userI)end=middle-1;
        else beg=middle+1;
        middle=(beg+end)/2;
    }
   cout<<userI<<" was not found."<<endl;
    return -1;
}
