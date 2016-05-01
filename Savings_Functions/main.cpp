/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 * Purpose: To illustrate the rule f 72 by way of do-while loop
 * Created on March 28, 2016, 8:04 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
float save1(float, float, int);
float save2(float, float, int);
float save3(float, float, int);
float save4(float, float, int);
float save5(float, float, int=9);
float save1(float, float, float);
int   save6(float &,float,float,int);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float pv=100.0f;//Present value
    float iRate=0.08f;//Interest rate
    float nComp=9;//number f compounding periods by rule of 72
    
    //Calculate the approximate number of years to double by rule of 72
    nComp=0.72f/iRate;
    
    //Loop each year until the future value is 2x the present value
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Number of compounding periods = "<<nComp<<endl;
   
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Future Value = $"<<save1(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save2(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save3(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save4(pv,iRate,nComp)<<endl;
    cout<<"The Future Value = $"<<save5(pv,iRate)<<endl;
    cout<<"The Future Value = $"<<save1(pv,iRate,static_cast<float>(nComp))<<endl;
    float fv;
    save6(fv,pv,iRate,nComp);
    save6(fv,pv,iRate,nComp);
    cout<<"The Future Value = $"<<fv<<endl;
    cout<<"Number of times save 6 was called = "<<save6(fv,pv,iRate,nComp)<<endl;
    
    //Fin
    return 0;
}
//Input
//p = Present value
//i = Interest rate
//n = Number of compounding periods in years
//Outputs
//fv = future value
float save1(float p, float i, int n)
{
    return p*(pow(1+i, n));
}
//Input
//p = Present value
//i = Interest rate
//n = Number of compounding periods in years
//Outputs
//fv = future value
float save2(float p, float i, int n)
{
    return p*exp(n*log(1+i));
}
//Input
//p = Present value
//i = Interest rate
//n = Number of compounding periods in years
//Outputs
//fv = future value
float save3(float p, float i, int n)
{
    //Declare variable
    float fv=p;
    //Loop on the number
    for(int years=1;years<=n;years++)
        fv*=(1+i);
}
//Input
//p = Present value
//i = Interest rate
//n = Number of compounding periods in years
//Outputs
//fv = future value
float save4(float p, float i, int n)
{
    //Declare variable
    if(n<1)return p;
    //Loop on the number
    return save4(p,i,n-1)*(1+i);
}
//Inputs
//  p->Present value $'s
//  i->Interest rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save1(float p,float i,float n){
    return p*pow(1+i,n);
}

//Inputs
//  p->Present value $'s
//  i->Interest rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save5(float p,float i,int n){
    //Declare variables
    if(n<1)return p;
    //Loop on the number 
    return save4(p,i,n-1)*(1+i);
}

//Inputs
//  p->Present value $'s
//  i->Interest rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
int save6(float &fv,float p,float i,int n){
    //Declare variables
    static int count=0;
    fv=p;
    //Loop on the number 
    for(int years=1;years<=n;years++){
        fv*=(1+i);
    }
    //Return how many times the function has been called
    return ++count;
}