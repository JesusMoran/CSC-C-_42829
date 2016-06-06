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
void swap(int &, int &);
void mrkSort(int[], int);
void smlNLst(int [],int, int);
int  binSrch(int [], int, int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=18;
    int input;
    
    //Accounts
    int account[SIZE]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231,
    3852085, 7576651, 7881200, 4581002};
    int count, pos;
    
    //User Inputs account number
    cout<<"Enter the Account number of the account being charged: ";
    cin>>input;
    
    mrkSort(account, SIZE);
    
    //Test Binary Search
    pos=binSrch(account,SIZE,input);
    if(pos<0)cout<<"Account number "<<input<<" does not match."<<endl;
    else cout<<"Account number "<<input<<" is valid."<<endl;
    
    return 0;
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlNLst(a,n,i);
    }
}

void smlNLst(int c[],int l,int pos){
    for(int i=pos+1;i<l;i++){
        if(c[pos]>c[i])
            swap(c[pos],c[i]);
    }
}

void swap(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    
}

int  binSrch(int a[], int n, int input)
{
    //Define range and midpoint
    int beg=0,end=n-1,middle=(beg+end)/2;
    //Loop until found
    while(end>=beg){
        if(a[middle]==input){ 
            return middle;
        }else if(a[middle]>input)end=middle-1;
        else beg=middle+1;
        middle=(beg+end)/2;
    }
    return -1;
}