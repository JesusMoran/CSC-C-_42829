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
    int pNum, total, num;
    
    //Input for positive number (pNum)
    cout<<"Please enter valid positive number from 1 to 50: "<<endl;
    cin>>pNum;
    
    //If statement to catch invalid inputs
    if (pNum<0||pNum>50)
        cout<<"Error. Please restart and enter a valid positive number!"<<endl;
    else
        //Loop that adds the previous results
        for (num=1; num<=pNum; num++ )
        {
         total+=num;  
        }
    //Output f total calculations
    cout<<"The sum of all integers from 1 to "<<pNum<<" is: "<<total<<endl;
    
    //Fin
    return 0;
}

