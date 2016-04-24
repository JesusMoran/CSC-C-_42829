/* 
 * File:   main.cpp
 * Author: Jesus E. Moran Rivera
 *
 * Created on April 22, 2016, 7:20 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void markCal(float, float);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float price, markUp, total, percent, dif;
    cout<<"*************************************************"<<endl;
    
    cout<<"Enter the current price for the item:"<<endl;
    cin>>price;
    
    cout<<"Enter the current market mark up percentage:"<<endl;
    cin>>markUp;
    
    if (markUp>0&&markUp<=100&&price>0){
        markCal(price, markUp);
    }else{
       cout<<"Please enter a valid number and try again."<<endl;
    }
    cout<<"*************************************************"<<endl;
    return 0;
}

/*001111222233334444555566667777888899990000111122223333444455556666777788889999
 *000000000000000000000000000000000000000000000000000000000000000000000000000000
 */
void markCal(float price, float markUp)
{ 
   float percent, dif, total;
    
   percent=markUp/100;
   dif=price*percent;
   total=price+dif;
    
   cout<<"The total price for the item is $"<<
      fixed<<setprecision(2)<<showpoint<<total<<endl;
}
/*001111222233334444555566667777888899990000111122223333444455556666777788889999
 *000000000000000000000000000000000000000000000000000000000000000000000000000000
 */