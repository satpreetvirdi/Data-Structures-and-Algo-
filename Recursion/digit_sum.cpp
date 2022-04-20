#include<iostream>
using namespace std;

// To find digit sum

int digitSum(int n){
    if(n==0) return 0;
    return digitSum(n/10) + (n%10);

}

int main(){
    int n;
    cin>>n;
    cout<<digitSum(n);    

}