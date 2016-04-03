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
    float avRain, inYear, years, months, tRain, tAvR, tMonth;
    
    cout<<"For how many years would you like to predict the average rain fall?"
            <<endl;
    cin>>inYear;
    
    if (inYear<0)
        cout<<"Error. Use positive numbers!!!"<<endl;
    else
        
    do{
        years++;
        cout<<"Year"<<years<<endl;
        tMonth=years*12;
        
     for (months=0;months<=12;months++)
       while(months<12) {
           months++;
        cout<<"How many inches of rainfall fell in month "<<months<<"?"<<endl;
        cin>>avRain;
        tRain+=avRain;
       }   
        
     }while(years<inYear);
     tAvR=tRain/tMonth;
     
    cout<<"The total months are "<<tMonth<<"."<<endl;
    cout<<"Total rainfall is "<<tRain<<"in."<<endl;
    cout<<"The average rainfall per month is "<<
            fixed<<setprecision(2)<<tAvR<<"in."<<endl;
            
    return 0;
}