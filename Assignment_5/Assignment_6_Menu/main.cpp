/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 24, 2016, 2:06 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void input();
void output(int [], const int);

void peaks(int []);
void averg (int [], int);

void sales();
void hiLo(const char [], int [], int, const int);

void fillAry(int [],const int, int);
void prntAry(int [],const int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int choice;
  
    //Do-While Loop for Menu
    do{
        //Menu Options
     cout<<"Type in your choice from the following programs: \n"<<
           "Type 1 for Number sort. \n"<<"Type 2 for Rainfall. \n"<<
           "Type 3 for Chips n Salsa. \n"<<"Type 4 for Larger Number. \n"<<
             "Enter the anything else to exit"<<endl;
      cin>>choice;
      
      switch (choice){
          
          case 1:{
               input();
                cout<<"*************************************************"<<endl;
                
              break;
            }
          
          case 2:{
                  //Declare Variables
                const int MONTHS=12;
                const char rain[MONTHS][14]={"January: ", "February: ", "March: ", "April: ",
                "May: ", "June: ", "July: ", "August: ", "September: ", "October: ", 
                "November: ", "December: "};
                int amount[MONTHS];
                int num;

                cout<<"Enter the rainfall (in inches) for every month:"<<endl;

                for(num=0;num<12;num++){
                    cout<<rain[num];
                    cin>>amount[num];
                }
                peaks(amount);
                averg(amount, num);
    
              cout<<"*************************************************"<<endl;
              
              break;
            }
          case 3:{
                cout<<"Enter the amount of salsa sold for each kind."<<endl;

                sales();
    
                cout<<"*************************************************"<<endl;
                
              break;
            }
          case 4:{
                //Declare Variables
                const int SIZE=100;
                int array[SIZE];
                int big;
                int n=10;

                cout<<"Pick a number between 1 and 100."<<endl;
                cin>>big;
                 //Fill the array
                fillAry(array,SIZE, big);

                //Print the array
                cout<<"Numbers higher than "<<big<<" are: "<<endl;
                prntAry(array,SIZE,n);
    
                cout<<"*************************************************"<<endl;

              break;
          }
          default:{
             cout<<"Thanks for using the program(s)."<<endl;
          }
      }
    }while(choice>0&&choice<5);
    
    //Fin
    return 0;
}
/*******************************************************************************
*******************************************************************************/
void input()
{
   //Declare Variables
    const int NUM_VAL=10;
    int value[NUM_VAL];
    int num=0;
    
    do{
        cout<<"Enter value number "<<num+1<<": "<<endl;
        cin>>value[num++];

    }while(num<10); 
    
    output(value, NUM_VAL);
}
/*******************************************************************************
*******************************************************************************/
void output(int value[], const int NUM_VAL)
{
    int count;
    int small=value[0];
    int big=0;
    
        for (count=0;count<10;count++)
            if (value[count]<small)
                small=value[count];
        
        cout<<"The smallest number is: "<<small<<endl;
        
        for (count=0;count<10;count++)
            if (value[count]>big)
                big=value[count];
        
        cout<<"The largest number is: "<<big<<endl;
}
/*******************************************************************************
*******************************************************************************/
void peaks(int amount[])
{
    int start;
    int low=amount[0];
    int high=0;
    
        for (start=0;start<=12;start++){
            if (amount[start]<low)
                low=amount[start];
        }
        cout<<"The lowest month(s) had: "<<low<<" in."<<endl;
        
        for (start=0;start<12;start++){
            if (amount[start]>high)
                high=amount[start];
        }
        cout<<"The highest month(s) had: "<<high<<" in."<<endl;
        
}
/*******************************************************************************
*******************************************************************************/
void averg (int amount[], int num)
{
  int sum, total;
  
  for(num=0;num<12;num++){
    sum+=amount[num];
  }
  total=sum/12;
  
  cout<<"The average rainfall is "<<total<<" inches."<<endl;
  
}
/*******************************************************************************
*******************************************************************************/
void sales()
{
    const int SIZE=7;
    const char chips[SIZE][7]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int salsa[SIZE];
    int flav, type;

    for(flav=0;flav<=4;flav++){
    cout<<chips[flav]<<": ";
    cin>>salsa[flav];
    }
    
    int low=salsa[0];
    int high=0;
    
        for (type=0;type<5;type++){
            if (salsa[type]<low)
                low=salsa[type];
        }    
        cout<<"The lowest seller had: "<<low<<"."<<endl;
        
        for (type=0;type<5;type++){
            if (salsa[type]>high)
                high=salsa[type];
        }
        cout<<"The highest seller had: "<<high<<"."<<endl;  
 }
/*******************************************************************************
*******************************************************************************/
void prntAry(int b[], int n, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<100;i++){
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

void fillAry(int a[],int n, int big){
    int cont;
    
    for(int i=0;i<n;i++){
         big+=1;
        for(cont=0;cont>1;cont++)        
            big+=1;
        a[i]=big;//2 digit random number
    }
}