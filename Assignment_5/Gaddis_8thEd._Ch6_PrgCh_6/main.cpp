/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 23, 2016, 9:34 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void energy(float, float);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float mass, velo;
    
    cout<<"Enter the total mass in kilograms of the object:"<<endl;
    cin>>mass;
    
    cout<<"Enter the velocity of the object in meters per second:"<<endl;
    cin>>velo;
    
    if (mass>0&&velo>0)
     energy(mass, velo);
    
    else
        cout<<"Error!!! Enter a valid number."<<endl;
    
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void energy(float mass, float velo)
{
    float kenEn;
    
    kenEn=.5*(mass*velo*velo);
            
    cout<<"The Kinetic Energy of the object is "<<kenEn<<" Joules."<<endl;
}
