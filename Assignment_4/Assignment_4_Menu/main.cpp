/* 
 * File:   main.cpp
 * Author: Your Name <Jesus E. Moran Rivera>
 *
 * Created on April 3, 2016, 5:00 PM
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
    int choice;
  
    do{
     cout<<"Type in your choice from the following programs: \n"<<
           "Type 1 for Sum of Numbers. \n"<<"Type 2 for ASCII Code. \n"<<
           "Type 3 for Ocean Levels. \n"<<"Type 4 for Calories Burned. \n"<<
           "Type 5 for Membership Fee. \n"<<"Type 6 for Distance Traveled. \n"<<
           "Type 7 for Pennies Pay. \n"<<"Type 8 for Hotel Occupancy. \n"<<
           "Type 9 for Average Rainfall. \n"<<"Type 10 for Population. \n"<<
             "Enter the anything else to exit"<<endl;
      cin>>choice;
      
      switch (choice){
          case 1:{
              //Declare Variables
                int pNum, total, num;

                //Input for positive number (pNum)
                cout<<"Please enter valid positive number from 1 to 50: "<<endl;
                cin>>pNum;

                //If statement to catch invalid inputs
                if (pNum<0||pNum>50)
                    cout<<"Error. Please restart and enter"
                            " a valid positive number!"<<endl;
                else
                    //Loop that adds the previous results
                    for (num=1; num<=pNum; num++ )
                    {
                     total+=num;  
                    }
                //Output f total calculations
                cout<<"The sum of all integers from 1 to "<<
                        pNum<<" is: "<<total<<endl;
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
            }
          case 2:{
              //Declare Variables
                char ascii;
                int num;

                //Purpose of the program
                cout<<"The following displays the ASCII"
                        " character for codes 0 to 127."<<endl;

                //For loop that outputs numbers from 1 to 127
               for
                (num=0;num<=127;num++)
               {
                   //If statement that limits each row to 16 characters
                   if (num%16 ==0)
                       cout<<endl;
                   ascii++;
                //Output of the characters
                cout<<ascii<<"  ";
               }
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
            }
          case 3:{
              //Declare Variables
                float seaLvl=1.5, years, total;

                //Purpose of the program
                cout<<"This program shows the total rise of the sea "
                        "levels each year."<<endl;
                cout<<"Year       Total"<<endl;

                //For loop that calculates the total rise of the sea level
                for(years=1; years<=25; years++)
                    {
                        total= seaLvl*years;

                        //Outputs of the rise each year
                        cout<<years<<setw(15)<<total<<"mm"<<endl;
                    }
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
            }
          case 4:{
              //Declare Variables
                float min, minT, cal=3.6, total;

                //Purpose of the program
                cout<<"This program shows the amount of calories "
                        "burned every five minutes."<<endl;
                cout<<"Minutes     Total"<<endl;

              //For loop to calculates calories burned in five minute increments
                for(min=1; min<=6; min++)
                    {
                        minT=min*5;
                        total=cal*minT;

                        //Output of calories every 5 min
                        cout<<minT<<setw(15)<<total<<endl;
                    }
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
            }
          case 5:{
              //Declare Variables
                float year, per=0.04, fee=2500;

                //Purpose of the program
                cout<<"This program shows the total fees for"
                        " a country club every year."<<endl;
                cout<<"Year       Total"<<endl;

                //For loop to calculate the total fee each year
                for(year=1; year<=6; year++)
                    {
                        fee=fee+(fee*per);

                        //Output of total fee      
                        cout<<fixed<<setprecision(0)<<year<<
                                setw(8)<<fixed<<setprecision(2)<<"$"<<fee<<endl;
                    }
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
          }
          case 6:{
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
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
          }
          case 7:{
              //Declare Variables
                float penny=0.01,choice, days, total;

                    //Input of total days the user would work (choice)
                    cout<<"How many days would you work for "
                            "a compounding penny per day?"<<endl;
                    cin>>choice;

                    cout<<"Day(s)         Total"<<endl;

                    //For loop calculates the total pay in compounding pennies
                    for(days=1;days<=choice;days++)
                        {
                            //Output of results
                            cout<<fixed<<setprecision(0)<<days<<setw(15)<<
                                fixed<<setprecision(2)<<"$"<<penny<<endl;
                            penny*=2;
                        }
                    cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
          }
          case 8:{
              //Declare Variables
                float floor, inFloor, rooms, roomT, hold, oRoomT, oRoom, uRooms, perc;

                //Input of the total floors in a hotel (inFloor)
                cout<<"Welcome. How many floors does the hotel have?"<<endl;
                cin>>inFloor;

                //For loop calculates the unavailable rooms in each floor from user inputs
                for(floor=1;floor<=inFloor;floor++)
                    {
                        cout<<"How many rooms are on floor "<<
                                fixed<<setprecision(0)<<floor<<"?"<<endl;
                        cin>>rooms;
                        roomT+=rooms;
                        cout<<"How many are occupied?"<<endl;
                        cin>>oRoom;
                        oRoomT+=oRoom;

                        uRooms=roomT-oRoomT;

                    }     
                
                //Output of rooms in the hotel
                cout<<fixed<<setprecision(0)<<"The Hotel has "<<roomT<<
                        " total rooms and "<<uRooms<<" are available."<<endl;

                //Calculation of the percentage of unavailability in the hotel
                perc=(oRoomT/roomT)*100;

                 //Output results
                cout<<"It is currently "<<perc<<"% full."<<endl;
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
          }
          case 9:{
              //Declare Variables
                float avRain, inYear, years, months, tRain, tAvR, tMonth;

                //Input for years that will be predicted (inYear)
                cout<<"For how many years would you like "
                        "to predict the average rain fall?" <<endl;
                cin>>inYear;

                //If statement for years less then 1
                if (inYear<1)
                    cout<<"Error. Use positive numbers!!!"<<endl;
                else
                   //Do loop that outputs years 
                    do{
                        years++;
                        cout<<"Year"<<years<<endl;
                        tMonth=years*12;

                        //For loop shows the months in each year
                        for (months=0;months<=12;months++)
                            //While loop shows each month in order
                            while(months<12) {
                                months++;

                             //Input for the average rainfall each month   
                             cout<<"How many inches of rainfall fell in month "
                                        <<months<<"?"<<endl;
                             cin>>avRain;
                             tRain+=avRain;
                            }   
                     //Total Average rain for the year
                     }while(years<inYear);
                     tAvR=tRain/tMonth;

                //Output of results
                cout<<"The total months are "<<tMonth<<"."<<endl;
                cout<<"Total rainfall is "<<tRain<<"in."<<endl;
                cout<<"The average rainfall per month is "<<
            fixed<<setprecision(2)<<tAvR<<"in."<<endl;
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
          }
          case 10:{
              //Declare Variables
                float sNum,sNumT, avrPI, inDays, tIncr, total, days;

                //Purpose of the program
                cout<<"This program shows the increase of a"
                        " population of organisms per day."<<endl;
                cout<<"=================================="
                        "===================================="<<endl;

                //Inputs for starting number(sNum)
                cout<<"Please enter the starting number of organisms"
                        " (Must be more than two):"<<endl;
                cin>>sNum;

                //Input for average daily population increase (avrPI)
                cout<<"Enter the average daily population increase as a percentage"
                        " for this organisms (Use positive numbers):"<<endl;
                cin>>avrPI;

                //Input of days observed (inDays)
                cout<<"Enter the number of days it will be observed"
                        " (Must be more than one):"<<endl;
                cin>>inDays;

                //If statement for invalid inputs
                if (sNum<2)
                    cout<<"Error. Enter a population number higher than 2!!!"
                            <<endl;
                else if (avrPI<0)
                    cout<<"Error. Enter a valid percentage!!!"<<endl;
                else if (inDays<2)
                    cout<<"Error. Enter a more than 1 day!!!"<<endl;

                else{
                    cout<<"Days     Total"<<endl;

                    //Loop for calculations of daily increase
                    for(days=2;days<=inDays;days++)
                        { 
                            sNum+=tIncr;
                            tIncr=(avrPI/100)*sNum;
                            total=tIncr+sNum;

                            //Output of day and total number of organisms
                            cout<<days<<setw(12)<<total<<endl;
                        }
                }
                cout<<"*********************************************"
                        "*******************************************"<<endl;
              break;
          }
          default:{
             cout<<"Thanks for using the program(s)."<<endl;
          }
      }
    }while(choice>0&&choice<11);
    
    return 0;
}

