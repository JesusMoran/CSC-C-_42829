/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 24, 2016, 12:11 AM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void outcome(int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int choice, count;
    
    cout<<"How many time would you like to toss the coin?"<<endl;
    cin>>choice;
    
    if (choice>0){
        srand(time(NULL));
        cout<<"Flip Results"<<endl;
        for(count=1;count<=choice;count++)
        outcome(choice);
    
    }else{
        cout<<"Error!!! Enter a valid number."<<endl;
    }
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void outcome(int choice)
{
    choice=rand();
    choice=(choice%2)+1;
    
    if (choice==1)
        cout<<"Heads"<<endl;
    if (choice==2)
        cout<<"Tails"<<endl;
}
