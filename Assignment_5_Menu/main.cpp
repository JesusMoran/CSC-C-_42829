/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 24, 2016, 2:06 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void markCal(float, float);              //Function for Mark up calculator
void total(float, float);                //Function for Rectangle area
void highest(float, float, float, float);//Function for Winning Division
void lowest(int, int, int, int, int);    //Function for Safest Driving
void travel(float);                      //Function for Falling Distance
void energy(float, float);               //Function for Kinetic Energy
void temInC(float);                      //Function for Temperature
void outcome(int);                       //Function for Coin Toss
void preVal(float, float, float);        //Function for Present Value
void futVal(float, float, float);        //Function for Future Value

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int choice;
  
    //Do-While Loop for Menu
    do{
        //Menu Options
     cout<<"Type in your choice from the following programs: \n"<<
           "Type 1 for Mark Up. \n"<<"Type 2 for Rectangle area. \n"<<
           "Type 3 for Winning Division. \n"<<"Type 4 for Safest Driving. \n"<<
           "Type 5 for Falling Distance. \n"<<"Type 6 for Kinetic Energy. \n"<<
           "Type 7 for Celsius Temperature. \n"<<"Type 8 for Coin Toss. \n"<<
           "Type 9 for Present Value. \n"<<"Type 10 for Future Value. \n"<<
             "Enter the anything else to exit"<<endl;
      cin>>choice;
      
      switch (choice){
          
          //Mark Up Problem
          case 1:{
              //Declare Variables
                float price, markUp, total, percent, dif;
                
                cout<<"*************************************************"<<endl;
                
                //Input price of an object
                cout<<"Enter the current price for an item:"<<endl;
                cin>>price;

                //Input current mark up
                cout<<"Enter the current market mark up percentage:"<<endl;
                cin>>markUp;

                //If statement verifies inputs
                if (markUp>0&&markUp<=100&&price>0){
                    
                    //Call to Function
                    markCal(price, markUp);
     
                //Error message 
                }else{
                   cout<<"Please enter a valid number and try again."<<endl;
                }
                cout<<"*************************************************"<<endl;
              break;
            }
          
          //Rectangle Area
          case 2:{
              //Declare Variables
                float length, width, area;
                
                cout<<"*************************************************"<<endl;

                //Input for length 
                cout<<"Enter the length of the rectangle:"<<endl;
                cin>>length;

                //Input for width
                cout<<"Enter the width of the rectangle:"<<endl;
                cin>>width;

                //If statement verifies inputs
                if (length>0&&width>0){
                    
                    //Call to function for total area
                    total(length, width);
                }else{
                    cout<<"Pleas enter a valid number and try again."<<endl;
                }
                cout<<"*************************************************"<<endl;

              break;
            }
          case 3:{
               //Declare Variables
                float north, south, east, west;

                cout<<"*************************************************"<<endl;
                
                //Inputs for Division sales
                cout<<"Enter the amount of sales for the corresponding"
                        " division. \n";
                cout<<"Northeast region:"<<endl;
                cin>>north;

                cout<<"Southeast region:"<<endl;
                cin>>south;

                cout<<"Northwest region:"<<endl;
                cin>>east;

                cout<<"Southwest region:"<<endl;
                cin>>west;

                //If statement verifies inputs
                if (north>=0&&south>=0&&east>=0&&west>=0){
                    
                    //Call to function for highest seller
                    highest(north, south, east, west);

                }else{
                    cout<<"Error!!! Input a valid amount and try again."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
            }
          case 4:{
             //Declare Variables
                int north, south, east, west, central;

                cout<<"*************************************************"<<endl;
                
                //Input for Car accident per Region
                cout<<"Enter the amount of car accidents for the corresponding "
                        "region. \n";
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

                //If statement verifies inputs
                if (north>=0&&south>=0&&east>=0&&west>=0&&central>=0){
                    
                    //Call to function for lowest car accident region
                    lowest(north, south, east, west, central);

                }else{
                    cout<<"Error!!! Input a valid amount and try again."<<endl;
                }
                cout<<"*************************************************"<<endl;

              break;
            }
          case 5:{
              //Declare Variables
                float time;

                cout<<"*************************************************"<<endl;
                
                //Input for time the object fell
                cout<<"Enter the time in seconds the object fell:"<<endl;
                cin>>time;

                //If statement verifies inputs
                if(time>0){
                    
                    //Call to function for lowest accidents
                    travel(time);

                }else{
                    cout<<"Error!!! Input a valid amount and try again."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
          }
          case 6:{
              //Declare Variables
                float mass, velo;

                cout<<"*************************************************"<<endl;
                
                //Input for Mass of an object
                cout<<"Enter the total mass in kilograms of the object:"<<endl;
                cin>>mass;

                //Input for Velocity of an object
                cout<<"Enter the velocity of the object in meters per second:"
                        <<endl;
                cin>>velo;

                //If statement verifies inputs
                if (mass>0&&velo>0){
                    
                    //Call to function for Kinetic Energy
                    energy(mass, velo);

                }else{
                    cout<<"Error!!! Enter a valid number."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
          }
          case 7:{
              //Declare Variables
                float fahren;
                
                cout<<"*************************************************"<<endl;
                
                //Input for temperature in Fahrenheit
                cout<<"Enter a valid number of Fahrenheit you wish to convert:"
                        <<endl;
                cin>>fahren;

                //If statement verifies inputs
                if (fahren>=0){
                    
                    //Call to function for conversion
                    temInC(fahren);

                }else{
                    cout<<"Error!!! Enter a valid number."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
          }
          case 8:{
              //Declare Variables
                int choice, count;

                cout<<"*************************************************"<<endl;
                
                //Input for number of coin tosses
                cout<<"How many time would you like to toss the coin?"<<endl;
                cin>>choice;

                //If statement verifies inputs
                if (choice>0){
                    srand(time(NULL));
                    cout<<"Flip Results"<<endl;
                    
                    //For loop for coin toss
                    for(count=1;count<=choice;count++)
                        
                        //Call to function for the results
                        outcome(choice);

                }else{
                    cout<<"Error!!! Enter a valid number."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
          }
          case 9:{
             //Declare Variables
                float pres, futu, inRate, years;
                
                cout<<"*************************************************"<<endl;

                cout<<"Want to know how much to deposit?"<<endl;
                cout<<endl;

                //Input for future value
                cout<<"Enter the amount you wish to reach:"<<endl;
                cin>>futu;

                //Input for interest rate
                cout<<"Enter the annual interest rate:"<<endl;
                cin>>inRate;

                //Input for Years of deposits
                cout<<"Enter the number of years you plan to let money sit:"
                        <<endl;
                cin>>years;

                //If statement verifies inputs
                if(futu>0&&inRate>0&&years>0){
                    
                    //Call to function for Present Value
                    preVal(futu, inRate, years);
                    
                }else{
                    cout<<"Error!!! Enter a valid number."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
          }
          case 10:{
              //Declare Variables
                float present, fut, inRat, month;
                
                cout<<"*************************************************"<<endl;
                
                cout<<"Want to know how much money you will have?"<<endl;
                cout<<endl;

                //Input for Present Value
                cout<<"Enter the amount you currently have:"<<endl;
                cin>>present;

                //Input for Interest Rate
                cout<<"Enter the monthly interest rate:"<<endl;
                cin>>inRat;

                //Input for Months Compounded
                cout<<"Enter the number of months you plan to let money "
                        "compound:"<<endl;
                cin>>month;
                
                //If statement verifies inputs
                if(present>0&&inRat>0&&month>0){
                    
                    //Call to function for future value
                    futVal(present, inRat, month);
                    
                }else{
                    cout<<"Error!!! Enter a valid number."<<endl;
                }
                cout<<"*************************************************"<<endl;
                
              break;
          }
          default:{
             cout<<"Thanks for using the program(s)."<<endl;
          }
      }
    }while(choice>0&&choice<11);
    
    //Fin
    return 0;
}
/*001111222233334444555566667777888899990000111122223333444455556666777788889999
 *000000000000000000000000000000000000000000000000000000000000000000000000000000
 */
void markCal(float price, float markUp)
{ 
   //Declare Variables
   float percent, dif, total;
    
   //Calculation for total mark up
   percent=markUp/100;
   dif=price*percent;
   total=price+dif;
    
   //Output
   cout<<"The total price for the item is $"<<
      fixed<<setprecision(2)<<showpoint<<total<<endl;
}
/*******************************************************************************
*******************************************************************************/
 void total(float lenght,float width)
 {
     //Declare Variables
     float area;
     
     //Calculation for area
     area=lenght*width;
    
     //Output
    cout<<"The area of the rectangle is "<<area<<endl; 
 }
/******************************************************************************/
/******************************************************************************/
void highest(float north, float south, float east, float west)
{

    //Outputs
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
/******************************************************************************/
/******************************************************************************/
void lowest(int north, int south, int east, int west, int central)
{

    //Outputs
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
/*******************************************************************************
*******************************************************************************/
void travel(float time)
{
    //Declare Variables
    float grav=9.8, dis, show=1, examp;
    
    //Calculation for distance traveled
    dis=0.5*(grav*time*time);
    
    //Output
    cout<<"The object fell for "<<dis<<" meters."<<endl;
    cout<<"Here is a baseline for a falling object."<<endl;
    
    cout<<"Time   Distance"<<endl;
    
    //Loop outputs time and distance
    for(show=1;show<=10;show++){
        examp=0.5*(grav*show*show);
    cout<<show<<"        "<<examp<<endl;
    }  
}
/*******************************************************************************
*******************************************************************************/
void energy(float mass, float velo)
{
    //Declare Variables
    float kenEn;
    
    //Calculation for Kinetic Energy
    kenEn=.5*(mass*velo*velo);
     
    //Output
    cout<<"The Kinetic Energy of the object is "<<kenEn<<" Joules."<<endl;
}
/*******************************************************************************
*******************************************************************************/
void temInC(float fahren)
{   
    //Declare Variables
    float celsi, temp, max;
    {
    //Calculation for Celsius
    celsi=(5*(fahren-32))/9;
    
    //Output
    cout<<fixed<<setprecision(2)<<fahren<<
           " degrees Fahrenheit is equal to "<<celsi<<" degrees Celsius."<<endl;
    cout<<endl;
    
    cout<<"The following is the conversion from 0 to 20:"<<endl;
    cout<<"Fahrenheit     Celsius"<<endl;
    }
    //Loop outputs temperature
    for(temp=0;temp<=20;temp++){
        max=(5*(temp-32))/9;
  
    cout<<fixed<<setprecision(2)<<showpoint<<temp<<"           "<<max<<endl;
    }
}
/*******************************************************************************
*******************************************************************************/
void outcome(int choice)
{
    //Random generator
    choice=rand();
    choice=(choice%2)+1;
    
    //If statement for heads or tails
    if (choice==1)
        cout<<"Heads"<<endl;
    if (choice==2)
        cout<<"Tails"<<endl;
}
/*******************************************************************************
*******************************************************************************/
void preVal(float futu, float inRate, float years)
{
   //Declare Variables
   float pres, intPerc; 
   
   //Calculation for Present Value
   intPerc=inRate/100;
   pres=futu/(pow(1+intPerc, years));
   
   //Output
   cout<<"You would need to deposit $"<<
           fixed<<setprecision(2)<<showpoint<<pres<<endl;
}
/*******************************************************************************
*******************************************************************************/
void futVal(float present, float inRat, float month)
{
   //Declare Variables
   float fut, intPer; 
   
   //Calculation for future value
   intPer=inRat/100.0;
   fut=present*(pow(1+intPer, month));
   
   //Output
   cout<<"You would have $"<<
           fixed<<setprecision(2)<<showpoint<<fut<<endl;
}
