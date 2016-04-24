/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 23, 2016, 6:10 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void lowest(int, int, int, int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int north, south, east, west, central;
    
    cout<<"Enter the amount of car accidents for the corresponding region. \n";
    cout<<"North region:"<<endl;
    cin>>north;
    
    cout<<"South region:"<<endl;
    cin>>south;
    
    cout<<"East region:"<<endl;
    cin>>east;
    
    cout<<"West region:"<<endl;
    cin>>west;
    
    cout<<"Central region:"<<endl;
    cin>>central;
    
    if (north>=0&&south>=0&&east>=0&&west>=0&&central>=0)
    lowest(north, south, east, west, central);
    
    else
        cout<<"Error!!! Input a valid amount and try again."<<endl;
    
    return 0;
}

/******************************************************************************/
/******************************************************************************/
void lowest(int north, int south, int east, int west, int central)
{

    if(north<south)
        if(north<east)
            if(north<west)
                if(north<central)
                    cout<<"The North region had the fewest accidents with only "
                            <<north<<endl;
            
    if(south<north)
        if(south<east)
            if(south<west)
                if(south<central)
                    cout<<"The South region had the fewest accidents with only "
                            <<south<<endl;
            
    if(east<north)
        if(east<south)
            if(east<west)
                if(east<central)
                    cout<<"The East region had the fewest accidents with only "
                            <<east<<endl;
    if(west<north)
        if(west<east)
            if(west<south)
                if(west<central)
                    cout<<"The West region had the fewest accidents with only "
                            <<west<<endl;
    if(central<north)
        if(central<east)
            if(central<south)
                if(central<west)
                    cout<<"The Central region had the fewest accidents with only "
                            <<central<<endl;
    
                    
}