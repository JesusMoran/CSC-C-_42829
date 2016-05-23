/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 18, 2016, 7:29 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void fillAry(int [],const int, int);
void prntAry(int [],const int, int);
//Execution Begins Here

int main(const char [], int argc, char** argv) {
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int big;
    int n=10;
    
    cout<<"Pick a number between 1 and 100."<<endl;
    cin>>big;
     //Fill the array
    fillAry(array,SIZE, big);
    
    //Print the array
    prntAry(array,SIZE,n);
    
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void prntAry(int b[], int n, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<100;i++){
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

void fillAry(int a[],int n, int big){
    int cont;
    
    for(int i=0;i<n;i++){
         big+=1;
        for(cont=0;cont>1;cont++)        
            big+=1;
        a[i]=big;//2 digit random number
    }
}