/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on May 28, 2016, 2:39 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
int lotto(int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int myNum;
    
    cout<<"Please enter your five digit lotto number: ";
    cin>>myNum;
    
    lotto(myNum);
    
    return 0;
}
int lotto(int myNum)
{
    //Declare Variables
    const int TICKET=10;
    
    //Numbers
    int lottoN[TICKET]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 
    85647, 93121};
    int count;
    
    //Loop verifies until a match is found or count reaches 9 by linear search
       for(count=0;count<=9;count++){
        if(lottoN[count]==myNum)
               cout<<"The numbers "<<myNum<<" match. Congratulations!!!"<<endl;
            if(lottoN[count]==myNum)
                return myNum;
       }
        if(lottoN[count]!=myNum){
            cout<<"That is not a winning number, sorry."<<endl;
            return myNum;
            }
}