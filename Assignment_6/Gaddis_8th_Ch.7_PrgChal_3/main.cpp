/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 11, 2016, 10:28 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void sales();
void hiLo(const char [], int [], int, const int);
//Execution Begins Here

int main(const char [], int argc, char** argv) {
    //Declare Variables
    
    cout<<"Enter the amount of salsa sold for each kind."<<endl;
    
    sales();
    
    return 0;
}
void sales()
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
