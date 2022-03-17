#include<iostream>
using namespace std;
 
//  Get Bit

int getBit(int n,int pos){

    return (n&(1<<pos))!=0;
}

// Set Bit

int setBit(int n, int pos){
    return (n | (1<<pos));
}


// Clear Bit
int clearBit(int n, int pos){

    return (n & (~(1<<pos)));
};

int main (){

    cout<<clearBit(5,2);
    return 0;
}