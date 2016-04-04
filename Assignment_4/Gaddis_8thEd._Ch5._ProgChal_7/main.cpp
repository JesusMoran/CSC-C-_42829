/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
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
float penny=0.01,choice, days, total;

    //Input of total days the user would work (choice)
    cout<<"How many days would you work for "
            "a compounding penny per day?"<<endl;
    cin>>choice;
    
    cout<<"Day(s)         Total"<<endl;
    
    //For loop calculates the total pay in compounding pennies
    for(days=1;days<=choice;days++)
    {
        //Output of results
        cout<<fixed<<setprecision(0)<<days<<setw(15)<<
            fixed<<setprecision(2)<<"$"<<penny<<endl;
        penny*=2;
    }
    
    //Fin
    return 0;
}

