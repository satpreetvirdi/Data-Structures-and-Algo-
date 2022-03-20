#include<iostream>
using namespace std;

/* Ques 1 - Write a program to find a unique number  in an array where
all numbers except one ,are present twice
*/
int uniqueNum(int arr[] ,int n){
    int xorSum=0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum^arr[i];
    }
    return xorSum;

}


int main(){
   int arr[] = {9,8,7,6,8,6,9};
    cout<<uniqueNum(arr , 7)<<endl;

    return 0;
}