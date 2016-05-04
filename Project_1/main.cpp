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
#include <iomanip>
#include <fstream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void start(unsigned short);
void endGame(unsigned short, int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short lane;
    
    ifstream in;
    
    cout<<"Use the number keys to move the car and press enter after each input. \n"
           "Use 1 to 4 and press any other key to exit."<<endl<<endl;
    
    start(lane);
            
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void start(unsigned short lane)
{
    //Declare Variables
    const int SIZE=5, LENGTH=30;
    char grid[SIZE][LENGTH]; 
    unsigned short x, y, i, live=3, score=0;
    bool crash=false;
  
    //Generates initial map of 5 by 30
        for (x=0;x<SIZE;x++){
            for (y=0;y<LENGTH;y++){
                 grid[x][y]='_'; 
                 grid[x][y];
            }    
        } 
    //Places "car" on the grid if it is above -1
    lane=0;
    while(live>0){
        
        //Keeps track of lives for the player
        cout<<"Lives: "<<live<<endl;
        
        //Changes lanes for the player
        cout<<"Chose a lane:"<<endl;
        cin>>lane;
        
        //Verifies that the inputs are in the lane range
        if(lane>=1&&lane<=4){
            
            //If player hits a block they lose a live
            if(grid[lane][28]==']'){ 
               crash=true;
               live-=1;
            }
            else{
                 score+=10;
            }
            
            //Random lane selection for Obstacles
            srand(static_cast<unsigned int>(time(0)));
            i=rand()%5+1;

            //Places obstacle once a lane is picked
            grid[i][0]=']';
            
            for(x=0;x<SIZE;x++){
             grid[x][29]='_';  
            }
            //Places car in the selected lane
            grid[lane][29]='<';
            
            //Places obstacle and moves it across the grid once a new one spawns
            for (x=0;x<SIZE;x++){
                for (y=0;y<LENGTH;y++){
                   if(y<29){
                       if(grid[x][y]==']'){
                           grid[x][y+1]=grid[x][y];
                           grid[x][y]='_';
                           y++;
                        }
                    }
                }
            }
            for (x=0;x<SIZE;x++){
                for (y=0;y<LENGTH;y++){
                 cout<<grid[x][y]; 
                }
                cout<<endl;
            }
        //Else statement if input is above or below the lanes
        }else
              cout<<"Stay in the lane!!!"<<endl;
    }
    if (live<1)
        endGame(live, score);
}
/*******************************************************************************
*******************************************************************************/
void endGame(unsigned short live, int score)
{
    const short PLACE=10;
    char name[PLACE];
    
        cout<<"Game Over!!!"<<endl<<endl;
        
        cout<<"Enter your name: (max of 10 characters)\n";
        cin>>name;
        
        cout<<endl;
        
        cout<<"Name        Score"<<endl;
        cout<<name<<setw(13)<<score<<endl;   
        
        ofstream out;
        
        //Output the results to a file
        out.open("LA_Traffic_Score.dat",ios::app);
        out<<"\r\n"<<name<<setw(13)<<score<<endl;
        
        out.close();
}
/*******************************************************************************
*******************************************************************************/