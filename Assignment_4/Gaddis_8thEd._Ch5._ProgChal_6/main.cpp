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
    
    cout<<"How fast is the vehicle going in miles per hour?"<<endl;
    cin>>speed;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>iTime;
    
    cout<<"Time   Distance"<<endl;
    
    for(time=1;time<=iTime;time++)
    {
        dist=time*speed;
    
    cout<<time<<setw(10)<<dist<<endl;
    }
    
    return 0;
}

