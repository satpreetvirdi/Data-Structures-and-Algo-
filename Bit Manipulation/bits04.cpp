#include<iostream>
using namespace std;
// Ques:- Write a program to generate all possible subset of a set

void subset(int arr[], int n){
    for(int i=0;i<(1<<n); i++){
        for(int j=0 ; j<n ; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;        
    }

}


int main (){
    int arr[4]= {1,2,3,4};
    subset(arr, 4);

    return 0;
}