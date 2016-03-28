/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 * Created on March 14, 2016, 9:43 AM
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
    bool x=true, y=true, xAndy=x&&y, xOry=x||y, xXory=x^y, a=2, b=3;
    
    //Output logic gate header
    cout<<"X / Y / !X / !Y / X&&Y / X||Y / X^Y / X^Y^Y / X^Y^X / !(X&&Y) / !X||!Y / !(X||Y) / !X&&!Y \n";
    
    //First row
    cout<<(x?'t':'f')<<"   "<<(y?'t':'f')<<"    "<<(!x?'t':'f')<<"    "<<(!y?'t':'f')
            <<"     "<<(x&&y?'t':'f')<<"      "<<(x||y?'t':'f')<<"     "<<(x^y?'t':'f')
            <<"      "<<(x^y^y?'t':'f')<<"       "<<(x^y^x?'t':'f')<<"         "
            <<(!(x&&y)?'t':'f')<<"       "<<(!x||!y?'t':'f')<<"         "
            <<(!(x||y)?'t':'f')<<"         "<<(!x&&!y?'t':'f')<<"\n";
    
    //Second row
    x=true, y=false;
    cout<<(x?'t':'f')<<"   "<<(y?'t':'f')<<"    "<<(!x?'t':'f')<<"    "<<(!y?'t':'f')
            <<"     "<<(x&&y?'t':'f')<<"      "<<(x||y?'t':'f')<<"     "<<(x^y?'t':'f')
            <<"      "<<(x^y^y?'t':'f')<<"       "<<(x^y^x?'t':'f')<<"         "
            <<(!(x&&y)?'t':'f')<<"       "<<(!x||!y?'t':'f')<<"         "
            <<(!(x||y)?'t':'f')<<"         "<<(!x&&!y?'t':'f')<<"\n";
    
    //Third row
    x=false, y=true;
    cout<<(x?'t':'f')<<"   "<<(y?'t':'f')<<"    "<<(!x?'t':'f')<<"    "<<(!y?'t':'f')
            <<"     "<<(x&&y?'t':'f')<<"      "<<(x||y?'t':'f')<<"     "<<(x^y?'t':'f')
            <<"      "<<(x^y^y?'t':'f')<<"       "<<(x^y^x?'t':'f')<<"         "
            <<(!(x&&y)?'t':'f')<<"       "<<(!x||!y?'t':'f')<<"         "
            <<(!(x||y)?'t':'f')<<"         "<<(!x&&!y?'t':'f')<<"\n";
    
    //Forth row
    x=false, y=false;
    cout<<(x?'t':'f')<<"   "<<(y?'t':'f')<<"    "<<(!x?'t':'f')<<"    "<<(!y?'t':'f')
            <<"     "<<(x&&y?'t':'f')<<"      "<<(x||y?'t':'f')<<"     "<<(x^y?'t':'f')
            <<"      "<<(x^y^y?'t':'f')<<"       "<<(x^y^x?'t':'f')<<"         "
            <<(!(x&&y)?'t':'f')<<"       "<<(!x||!y?'t':'f')<<"         "
            <<(!(x||y)?'t':'f')<<"         "<<(!x&&!y?'t':'f')<<endl;
    
    cout<<"Swap Chart"<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<"a^b="<<a<<endl;
    cout<<"a^b="<<b<<endl;
    //Fin
    return 0;
}