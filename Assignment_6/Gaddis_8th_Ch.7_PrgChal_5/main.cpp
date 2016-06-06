/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 22, 2016, 4:58 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void monkeys();

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    const char MONK=100;
    const int DAY=5;
    int chart[MONK][DAY];
    char a=0;
    int p;
    
    cout<<"Enter the name of each monkey:"<<endl;
    cout<<"Monkey #1: ";
    cin>>a;
 
    cout<<"Monkey #2: ";
    cin>>a;

    cout<<"Monkey #3: ";
    cin>>a;

    for(p=0;p<=a;p++)
        cout<<chart[a];
    return 0;
}

void monkeys()
{
    const int SIZE=7;
    const char chips[SIZE][7]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int salsa[SIZE];
    int flav, type;

    for(flav=0;flav<=4;flav++){
    cout<<chips[flav]<<": ";
    cin>>salsa[flav];
    }
    
    int low=salsa[0];
    int high=0;
    
        for (type=0;type<5;type++){
            if (salsa[type]<low)
                low=salsa[type];
        }    
        cout<<"The lowest seller had: "<<low<<"."<<endl;
        
        for (type=0;type<5;type++){
            if (salsa[type]>high)
                high=salsa[type];
        }
        cout<<"The highest seller had: "<<high<<"."<<endl;  
 }
