#include <iostream>
#include <climits>
using namespace std;
// Circular Subarray Sum

int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // max Circular Subarray Sum = Total Array Sum - Sum of non contributing element 
    int circularSum;
    int linearSum ;
    linearSum = kadane(arr , n);
    int totalSum = 0 ;
    for (int i = 0; i < n; i++)
    {
        totalSum+=arr[i];
        arr[i] = - arr[i];

    }
    circularSum = totalSum + kadane(arr , n );
    
    cout<<max(circularSum , linearSum)<<endl;
    
    
    return 0;
}