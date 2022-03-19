#include <iostream>
using namespace std;

// Check if a given number is power of 2 or not 
// Catch : 
// if n = 6 = (0110)
// then n-1 =5 = (0101) , Flipping the rightmost 1 of n and all right side bits gives us n-1

int powerof2(int n){
    return (n && !(n & (n-1)));

}



int main (){
    
    cout<<powerof2(32);
    return 0;
}