/*
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 6, 2016, 8:16 AM
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
    for (unsigned short num=1000;num<=3000;num++);
    
    //Determine hoe many 1000's for Roman Numeral conversion
    unsigned char n1000s=(num-num%1000)/1000;
    
    //Output results for 1000's
    switch(n1000s){
        case 3:cout<<'M';
        case 2:cout<<'M';
        case 1:cout<<'M';
    }
    
    //Determine hoe many 100's for Roman Numeral conversion
    num-=(n1000s*1000);//Remove 4th digit
    unsigned char n100s=(num-num%100)/100;
    
    //Output results for 1000's
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<'D';break;
        case 4:cout<<"CD";break;
        case 3:cout<<'C';
        case 2:cout<<'C';
        case 1:cout<<'C';
    }
    
    //Determine hoe many 10's for Roman Numeral conversion
    num-=(n100s*100);//Remove 4th digit
    unsigned char n10s=(num-num%10)/10;
    
    //Output results for 10's
    switch(n10s){
        case 9:cout<<"CX";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<'L';break;
        case 4:cout<<"XL";break;
        case 3:cout<<'X';
        case 2:cout<<'X';
        case 1:cout<<'X';
    }
    
    //Determine hoe many 10's for Roman Numeral conversion
    num-=(n10s*10);//Remove 4th digit
    unsigned char n1s=(num-num%1)/1;
    
    //Output results for 10's
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<'V';break;
        case 4:cout<<"IV";break;
        case 3:cout<<'I';
        case 2:cout<<'I';
        case 1:cout<<'I';
    }
    cout<<endl;
    return 0;
}

