/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 23, 2016, 6:10 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void highest(float, float, float, float);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float north, south, east, west;
    
    cout<<"Enter the amount of sales for the corresponding division. \n";
    cout<<"Northeast region:"<<endl;
    cin>>north;
    
    cout<<"Southeast region:"<<endl;
    cin>>south;
    
    cout<<"Northwest region:"<<endl;
    cin>>east;
    
    cout<<"Southwest region:"<<endl;
    cin>>west;
    
    if (north>=0&&south>=0&&east>=0&&west>=0)
    highest(north, south, east, west);
    
    else
        cout<<"Error!!! Input a valid amount and try again."<<endl;
    
    return 0;
}

/******************************************************************************/
/******************************************************************************/
void highest(float north, float south, float east, float west)
{

    if(north>south)
        if(north>east)
            if(north>west)
                cout<<"The Northeast region had the fewest accidents with only $"
                        <<fixed<<setprecision(2)<<showpoint<<north<<endl;
            
    if(south>north)
        if(south>east)
            if(south>west)
                cout<<"The Southeast region had the fewest accidents with only $"
                        <<fixed<<setprecision(2)<<showpoint<<south<<endl;
            
    if(east>north)
        if(east>south)
            if(east>west)
                cout<<"The Northeast region had the fewest accidents with only $"
                       <<fixed<<setprecision(2)<<showpoint<<east<<endl;
    if(west>north)
        if(west>east)
            if(west>south)
                cout<<"The Southwest region had the highest earnings with $"
                        <<fixed<<setprecision(2)<<showpoint<<west<<endl;
                    
}