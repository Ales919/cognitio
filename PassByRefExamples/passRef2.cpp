/*
Write a function called accelerate() that takes as input the speed of a vehicle, and an amount. The function adds the amount to the speed to accelerate the vehicle. The speed parameter should be passed by reference, and amount by value. Here is our solution. */

#include <iostream>
using namespace std;


void accelerate(float &speed, float amount){
    speed +=amount;
    amount++;
    
}

int main(){
    float v= 100 , over = 20 ;
    cout<< endl<< "speed: "<< v<< "  amount: "<<over<< endl;
    accelerate(v, over);
    cout<< endl<< "NEW-->  " << "speed: "<< v << "  amount: "<< over << endl;
    
    
}