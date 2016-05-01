/*
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 24, 2016, 5:47 AM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void start(int);
void liveCo(int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int lane;
    
    cout<<"Use the number keys to move the car and press enter after each input. \n"
           "Use 1 to 4 and press any other key to exit."<<endl<<endl;
    start(lane);
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void start(int lane)
{
    //Declare Variables
    char grid[5][30]; 
    int x, y, i, live=3; 
  
    //Generates initial map of 5 by 30
        for (x=0;x<5;x++) 
         {
            for (y=0;y<30;y++) 
            {
                 grid[x][y]='_'; 
                 grid[x][y];
            }    
         } 
        for (x=0;x<5;x++) 
         {
            for (y=0;y<30;y++) 
            {
                 grid[x][y]; 
            }
    }
    //Places "car" on the grid if it is above -1
    lane=0;
    while((lane!=-1)&&(live>0)){
        
        //Keeps track of lives for the player
        cout<<"Lives: "<<live<<endl;
        
        //Changes lanes for the player
        cout<<"Chose a lane:"<<endl;
        cin>>lane;
        
        //Verifies that the inputs are in the lane range
        if(lane>=1&&lane<=4){
            
            //Random lane selection for Obstacles
            srand(time(NULL));
            i=rand()%5+1;

            //Places obstacle once a lane is picked
            grid[i][0]=']';
            for(x=0;x<5;x++){
             grid[x][29]='_';  
            }
            
            //Places car in the selected lane
            grid[lane][29]='<';

            //Places obstacle and moves it across the grid once a new one spawns
            for (x=0;x<5;x++) 
             {
                for (y=0;y<30;y++) 
                {
                   if(y<29){
                       if(grid[x][y]==']'){
                           grid[x][y+1]=grid[x][y];
                           grid[x][y]='_';
                           y++;
                       }
                   }
                }
            }
            for (x=0;x<5;x++) 
             {
                for (y=0;y<30;y++) 
                {
                 cout<<grid[x][y]; 
                }
                cout<<endl;
            }
        //Else statement if input is above or below the lanes
        }else
              cout<<"Stay in the lane!!!"<<endl;
    }
}
/*******************************************************************************
*******************************************************************************/
void liveCo(int live)
{
    
}