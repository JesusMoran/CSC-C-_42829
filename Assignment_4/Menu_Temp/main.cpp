/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
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
           "Type 1 for . \n"<<"Type 2 for . \n"<<
           "Type 3 for . \n"<<"Type 4 for . \n"<<
           "Type 5 for . \n"<<"Type 6 for . \n"<<
           "Type 7 for . \n"<<"Type 8 for . \n"<<
           "Type 9 for . \n"<<"Type 10 for . \n"<<
             "Enter the anything else to exit"<<endl;
      cin>>choice;
      
      switch (choice){
          case 1:{
              
              break;
            }
          case 2:{
              
              break;
            }
          case 3:{
              
              break;
            }
          case 4:{
             
              break;
            }
          case 5:{
              
              break;
          }
          case 6:{
              
              break;
          }
          case 7:{
              
              break;
          }
          case 8:{
              
              break;
          }
          case 9:{
             
              break;
          }
          case 10:{
              
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