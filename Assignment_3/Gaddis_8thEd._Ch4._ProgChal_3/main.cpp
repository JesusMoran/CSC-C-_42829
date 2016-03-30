/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on March 27, 2016, 6:08 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int day, month, year, total;
    
    //Calculation for month time year
    total=month*day;
    
    //Input for the day, month, and year.
    cout<<"Enter a the number of a day: \n";
    cin>>day;
    cout<<"Enter a month in two digit form: \n";
    cin>>month;
    cout<<"Enter the year in two digit format:"<<endl;
    cin>>year;
    
    //Compares the calculation of the day and month to the year
    if (year=total)
        cout<<"The year you picked is magical!!!"<<endl;
     else
        cout<<"The year is not magical. =("<<endl;
    
    //Fin        
    return 0;
}

