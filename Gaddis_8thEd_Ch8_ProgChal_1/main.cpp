/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 25, 2016, 9:55 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
int calc(int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int input;
    
    //User Inputs account number
    cout<<"Enter the Account number of the account being charged: ";
    cin>>input;
    
    //Function to Calculate verify the account
    calc(input);
    
    //Fin
    return 0;
}
int calc(int input)
{
    //Declare Variables
    const int SIZE=18;
    
    //Accounts
    int account[SIZE]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231,
    3852085, 7576651, 7881200, 4581002};
    int count;
    
    //Loop verifies until a match is found or count reaches 17 by linear search
       for(count=0;count<=17;count++){
        if(account[count]==input)
               cout<<"The account number "<<input<<" is valid."<<endl; 
            if(account[count]==input)
                return input;
       }
        if(account[count]!=input){
            cout<<"That is not a valid account."<<endl;
            return input;
            }
}