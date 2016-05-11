/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jesus E Moran Rivera
 *
 * Created on February 23, 2016, 8:27 PM
 */

#include <iostream>
using namespace std;

int main( )
 {
    int width, hight, totalL;
   
    cout << "Hello.\n";
    
    cout << "Press return after entering a number:\n";
    cout << "Enter the width of the fence:\n";
    
    cin >> width;
    
    cout << "Enter the hight of the fence:\n";
    cin >> hight;
    totalL = width * hight;
    cout << "If you have a ";
    cout << width;
    cout << " feet wide fence\n";
    cout << "and it's ";
    cout << hight;
    cout << " feet high, then \n";
    cout << "you have ";
    cout << totalL;
    cout << " total feet of fence. \n";
   
    cout << "Good-bye.\n";
    
    return 0;
}

