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
void markCal(float, float);
void total(float, float);
void highest(float, float, float, float);
void lowest(int, int, int, int, int);
void travel(float);
void energy(float, float);
void temInC(float);
void outcome(int);
void preVal(float, float, float);
void futVal(float, float, float);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int choice;
  
    do{
     cout<<"Type in your choice from the following programs: \n"<<
           "Type 1 for Mark Up. \n"<<"Type 2 for Rectangle area. \n"<<
           "Type 3 for Winning Division. \n"<<"Type 4 for Safest Driving. \n"<<
           "Type 5 for Falling Distance. \n"<<"Type 6 for Kinetic Energy. \n"<<
           "Type 7 for Celsius Temperature. \n"<<"Type 8 for Coin Toss. \n"<<
           "Type 9 for Present Value. \n"<<"Type 10 for Future Value. \n"<<
             "Enter the anything else to exit"<<endl;
      cin>>choice;
      
      switch (choice){
          case 1:{
              //Declare Variables
                float price, markUp, total, percent, dif;
                cout<<"*************************************************"<<endl;
                cout<<"Enter the current price for an item:"<<endl;
                cin>>price;

                cout<<"Enter the current market mark up percentage:"<<endl;
                cin>>markUp;

                if (markUp>0&&markUp<=100&&price>0){
                    markCal(price, markUp);
     
                }else{
                   cout<<"Please enter a valid number and try again."<<endl;
                }
                cout<<"*************************************************"<<endl;
              break;
            }
          case 2:{
              //Declare Variables
                float lenght, width, area;
                
                cout<<"*************************************************"<<endl;

                cout<<"Enter the length of the rectangle:"<<endl;
                cin>>lenght;

                cout<<"Enter the width of the rectangle:"<<endl;
                cin>>width;

                if (lenght>0&&width>0){
                    total(lenght, width);
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

                if (north>=0&&south>=0&&east>=0&&west>=0){
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

                if (north>=0&&south>=0&&east>=0&&west>=0&&central>=0){
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
                
                cout<<"Enter the time in seconds the object fell:"<<endl;
                cin>>time;

                if(time>0){
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
                
                cout<<"Enter the total mass in kilograms of the object:"<<endl;
                cin>>mass;

                cout<<"Enter the velocity of the object in meters per second:"
                        <<endl;
                cin>>velo;

                if (mass>0&&velo>0){
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

                cout<<"Enter a valid number of Fahrenheit you wish to convert:"
                        <<endl;
                cin>>fahren;

                if (fahren>=0){
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
                
                cout<<"How many time would you like to toss the coin?"<<endl;
                cin>>choice;

                if (choice>0){
                    srand(time(NULL));
                    cout<<"Flip Results"<<endl;
                    for(count=1;count<=choice;count++)
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

                cout<<"Enter the amount you wish to reach:"<<endl;
                cin>>futu;

                cout<<"Enter the annual interest rate:"<<endl;
                cin>>inRate;

                cout<<"Enter the number of years you plan to let money sit:"
                        <<endl;
                cin>>years;

                if(futu>0&&inRate>0&&years>0){
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

                cout<<"Enter the amount you currently have:"<<endl;
                cin>>present;

                cout<<"Enter the monthly interest rate:"<<endl;
                cin>>inRat;

                cout<<"Enter the number of months you plan to let money "
                        "compound:"<<endl;
                cin>>month;

                if(present>0&&inRat>0&&month>0){
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
   float percent, dif, total;
    
   percent=markUp/100;
   dif=price*percent;
   total=price+dif;
    
   cout<<"The total price for the item is $"<<
      fixed<<setprecision(2)<<showpoint<<total<<endl;
}
/*******************************************************************************
*******************************************************************************/
 void total(float lenght,float width)
 {
     float area;
     
     area=lenght*width;
    
    cout<<"The area of the rectangle is "<<area<<endl; 
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
/*******************************************************************************
*******************************************************************************/
void energy(float mass, float velo)
{
    float kenEn;
    
    kenEn=.5*(mass*velo*velo);
            
    cout<<"The Kinetic Energy of the object is "<<kenEn<<" Joules."<<endl;
}
/*******************************************************************************
*******************************************************************************/
void temInC(float fahren)
{   
    float celsi, temp, max;
    {
    celsi=(5*(fahren-32))/9;
    
    cout<<fixed<<setprecision(2)<<fahren<<
           " degrees Fahrenheit is equal to "<<celsi<<" degrees Celsius."<<endl;
    
    cout<<endl;
    cout<<"The following is the conversion from 0 to 20:"<<endl;
    cout<<"Fahrenheit     Celsius"<<endl;
    }
    for(temp=0;temp<=20;temp++){
        max=(5*(temp-32))/9;
  
    cout<<fixed<<setprecision(2)<<showpoint<<temp<<"           "<<max<<endl;
    }
}
/*******************************************************************************
*******************************************************************************/
void outcome(int choice)
{
    choice=rand();
    choice=(choice%2)+1;
    
    if (choice==1)
        cout<<"Heads"<<endl;
    if (choice==2)
        cout<<"Tails"<<endl;
}
/*******************************************************************************
*******************************************************************************/
void preVal(float futu, float inRate, float years)
{
   float pres, intPerc; 
   
   intPerc=inRate/100;
   pres=futu/(pow(1+intPerc, years));
   
   cout<<"You would need to deposit $"<<
           fixed<<setprecision(2)<<showpoint<<pres<<endl;
}
/*******************************************************************************
*******************************************************************************/
void futVal(float present, float inRat, float month)
{
   float fut, intPer; 
   
   intPer=inRat/100.0;
   fut=present*(pow(1+intPer, month));
   
   cout<<"You would have $"<<
           fixed<<setprecision(2)<<showpoint<<fut<<endl;
}
