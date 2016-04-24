/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 23, 2016, 8:53 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void travel(float);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float time;
   
    cout<<"Enter the time in seconds the object fell:"<<endl;
    cin>>time;
    
    if(time>0)
    travel(time);
    
    else
        cout<<"Error!!! Input a valid amount and try again."<<endl;
    
    return 0;
}

/*******************************************************************************
*******************************************************************************/
void travel(float time)
{
    float grav=9.8, dis, show=1, examp;
    
    dis=0.5*(grav*time*time);
    
    cout<<"The object fell for "<<dis<<" meters."<<endl;
    cout<<"Here is a baseline for a falling object."<<endl;
    
    cout<<"Time   Distance"<<endl;
    
    for(show=1;show<=10;show++){
        examp=0.5*(grav*show*show);
    cout<<show<<"        "<<examp<<endl;
    }  
}