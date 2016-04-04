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
    float seaLvl=1.5, years, total;
    
    //Purpose of the program
    cout<<"This program shows the total rise of the sea levels each year."<<endl;
    cout<<"Year       Total"<<endl;
    
    //For loop that calculates the total rise of the sea level
    for(years=1; years<=25; years++)
        {
            total= seaLvl*years;
            
            //Outputs of the rise each year
            cout<<years<<setw(15)<<total<<"mm"<<endl;
        }
    
    //Fin
    return 0;
}

