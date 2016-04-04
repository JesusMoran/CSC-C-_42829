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
    float avRain, inYear, years, months, tRain, tAvR, tMonth;
    
    //Input for years that will be predicted (inYear)
    cout<<"For how many years would you like to predict the average rain fall?"
            <<endl;
    cin>>inYear;
    
    //If statement for years less then 1
    if (inYear<1)
        cout<<"Error. Use positive numbers!!!"<<endl;
    else
       //Do loop that outputs years 
        do{
            years++;
            cout<<"Year"<<years<<endl;
            tMonth=years*12;
            
            //For loop shows the months in each year
            for (months=0;months<=12;months++)
                //While loop shows each month in order
                while(months<12) {
                    months++;
                 
                 //Input for the average rainfall each month   
                 cout<<"How many inches of rainfall fell in month "<<
                         months<<"?"<<endl;
                 cin>>avRain;
                 tRain+=avRain;
                }   
         //Total Average rain for the year
         }while(years<inYear);
         tAvR=tRain/tMonth;
     
    //Output of results
    cout<<"The total months are "<<tMonth<<"."<<endl;
    cout<<"Total rainfall is "<<tRain<<"in."<<endl;
    cout<<"The average rainfall per month is "<<
            fixed<<setprecision(2)<<tAvR<<"in."<<endl;
     
    //Fin
    return 0;
}