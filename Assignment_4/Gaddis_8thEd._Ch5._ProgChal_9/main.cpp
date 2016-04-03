/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
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
    
    cout<<"Welcome. How many floors does the hotel have?"<<endl;
    cin>>inFloor;
    
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
    
    
    cout<<"The Hotel has "<<roomT<<" total rooms and "<<
            uRooms<<" are available."<<endl;
    
    perc=(oRoomT/roomT)*100;
    cout<<"It is currently "<<perc<<"% full."<<endl;
        
        
    return 0;
}

