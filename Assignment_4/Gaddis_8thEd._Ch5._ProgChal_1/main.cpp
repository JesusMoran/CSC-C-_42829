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
    
    cout<<"Please enter valid positive number from 1 to 50: "<<endl;
    cin>>pNum;
    
    if (pNum<0||pNum>50)
        cout<<"Error. Please restart and enter a valid positive number!"<<endl;
    else
        for (num=1; num<=pNum; num++ )
        {
         total+=num;  
        }
    cout<<"The sum of all integers from 1 to "<<pNum<<" is: "<<total<<endl;
    return 0;
}

