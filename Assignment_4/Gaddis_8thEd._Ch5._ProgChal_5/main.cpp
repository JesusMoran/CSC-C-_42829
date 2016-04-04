/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 30, 2016, 9:48 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float year, per=0.04, fee=2500;
    
    //Purpose of the program
    cout<<"This program shows the total fees for a country club every year." 
            <<endl;
    cout<<"Year       Total"<<endl;
    
    //For loop to calculate the total fee each year
    for(year=1; year<=6; year++)
    {
        fee=fee+(fee*per);
        
        //Output of total fee      
        cout<<fixed<<setprecision(0)<<year<<
                setw(8)<<fixed<<setprecision(2)<<"$"<<fee<<endl;
    }
    
    //Fin
    return 0;
}