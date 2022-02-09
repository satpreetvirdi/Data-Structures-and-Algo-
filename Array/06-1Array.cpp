#include<iostream>
using namespace std;

int main (){
    int mx = -9999999;
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = std::max(mx ,arr[i]);
        cout<< mx <<endl;
    }
    
    
    return 0;
}