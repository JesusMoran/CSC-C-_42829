/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 18, 2016, 8:33 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void mrkSort (int [], const int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    mrkSort(array, SIZE);
    
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void mrkSort(int array[], int n)
{
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
         if(array[i]>array[j]){
            array[i]=array[j]^array[i];
            array[j]=array[i]^array[j];
            array[i]=array[j]^array[i];
            }  
        }
    }
}