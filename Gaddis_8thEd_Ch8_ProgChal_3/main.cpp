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
    
    int beg=0,end=10-1,middle=(beg+end)/2;
    //Loop until found
    while(end>=beg){
        if(lottoN[middle]==myNum){
            cout<<"The numbers "<<myNum<<" match. Congratulations!!!"<<endl;
            return middle;
        }else if(lottoN[middle]>myNum)end=middle-1;
        else beg=middle+1;
        middle=(beg+end)/2;
       }
        if(lottoN[count]!=myNum){
            cout<<"That is not a winning number."<<endl;
            return myNum;
            }

}