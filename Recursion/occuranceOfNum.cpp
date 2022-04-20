#include<iostream>
using namespace std;

// To find first and last index of the number in an array
int firstOccurence(int arr[] , int size , int i, int key){
    if(i == size ){
        return -1;
    }

    if(arr[i] == key ){
        return i;
    }
    return firstOccurence(arr, size, i+1, key);


}

int main(){

    
    int arr[]= {1,2,3,5,6,7};
    cout<<firstOccurence(arr, 6 , 0 , 6);

    return 0;
}