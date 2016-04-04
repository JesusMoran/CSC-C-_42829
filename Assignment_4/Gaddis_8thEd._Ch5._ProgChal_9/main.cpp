/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on March 30, 2016, 9:48 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float floor, inFloor, rooms, roomT, hold, oRoomT, oRoom, uRooms, perc;
    
    //Input of the total floors in a hotel (inFloor)
    cout<<"Welcome. How many floors does the hotel have?"<<endl;
    cin>>inFloor;
    
    //For loop calculates the unavailable rooms in each floor from user inputs
    for(floor=1;floor<=inFloor;floor++)
    {
        cout<<"How many rooms are on floor "<<floor<<"?"<<endl;
        cin>>rooms;
        roomT+=rooms;
        cout<<"How many are occupied?"<<endl;
        cin>>oRoom;
        oRoomT+=oRoom;
        
        uRooms=roomT-oRoomT;
               
    }     
    
    //Output of rooms in the hotel
    cout<<"The Hotel has "<<roomT<<" total rooms and "<<
            uRooms<<" are available."<<endl;
    
    //Calculation of the percentage of unavailability in the hotel
    perc=(oRoomT/roomT)*100;
    
     //Output results
    cout<<"It is currently "<<perc<<"% full."<<endl;
        
    //Fin    
    return 0;
}

