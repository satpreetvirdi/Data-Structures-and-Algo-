#include<iostream>
using namespace std;

void swap(int arr[],int i ,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp ;
    
};

int partition(int arr[],int l, int h){
    int pivot = arr[l];
    int i = l;
    int j = h;
   while(i<j){
    if(arr[i]<= pivot) i++ ;
    if(arr[j]>= pivot) j--;
    if(i<j) {
        swap(arr,i,j);
    }
  }
   swap(arr,j,l);
    return j;
};

int main(){
    int arr[] ={34 ,22, 76 ,1 ,5};
    cout<<partition(arr,0,4);
}