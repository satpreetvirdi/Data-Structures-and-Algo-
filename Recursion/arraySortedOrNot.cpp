#include<iostream>
using namespace std;

// To Check Whether array is sorted or not 
bool isSorted(int arr[] , int size){
    if(size==1){
        return true;
    }
    bool remainingArray = isSorted(arr + 1 , size-1);
    return(arr[0] < arr[1] && remainingArray);
    
}


int main(){
    int arr[] = {1,2,4,56,5};
    cout<<isSorted(arr,5)<<endl;


    return 0;
}