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
    int speed, time, iTime, dist;
    
    //Input of the speed of the vehicle (speed) and time it has traveled (iTime)
    cout<<"How fast is the vehicle going in miles per hour?"<<endl;
    cin>>speed;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>iTime;
    
    cout<<"Time   Distance"<<endl;
    
    //For loop that calculates the distance traveled every hour
    for(time=1;time<=iTime;time++)
    {
        dist=time*speed;
    
    //Output of results
    cout<<time<<setw(10)<<dist<<endl;
    }
    
    //Fin
    return 0;
}

