/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 11, 2016, 10:28 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void peaks(int []);
void averg (int [], int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    const int MONTHS=12;
    const char rain[MONTHS][14]={"January: ", "February: ", "March: ", "April: ",
    "May: ", "June: ", "July: ", "August: ", "September: ", "October: ", 
    "November: ", "December: "};
    int amount[MONTHS];
    int num;

    cout<<"Enter the rainfall (in inches) for every month:"<<endl;
    
    for(num=0;num<12;num++){
        cout<<rain[num];
        cin>>amount[num];
    }
    peaks(amount);
    averg(amount, num);
    
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void peaks(int amount[])
{
    int start;
    int low=amount[0];
    int high=0;
    
        for (start=0;start<=12;start++){
            if (amount[start]<low)
                low=amount[start];
        }
        cout<<"The lowest month(s) had: "<<low<<" in."<<endl;
        
        for (start=0;start<12;start++){
            if (amount[start]>high)
                high=amount[start];
        }
        cout<<"The highest month(s) had: "<<high<<" in."<<endl;
        
}
/*******************************************************************************
*******************************************************************************/
void averg (int amount[], int num)
{
  int sum, total;
  
  for(num=0;num<12;num++){
    sum+=amount[num];
  }
  total=sum/12;
  
  cout<<"The average rainfall is "<<total<<" inches."<<endl;
  
}