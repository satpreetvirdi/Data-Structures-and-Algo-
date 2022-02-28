#include <iostream>
#include <climits>
using namespace std;
// Max Sum Subarray
// Cumulative sum Approach

int main()
{

    int n;
    cout << "Enter the size of Array " << endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxSum = INT_MIN;
    int currSum = 0 ;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0 )
        {
           currSum = 0 ;
        }
        maxSum = max(maxSum, currSum);
    }
    cout<<maxSum<<endl;

    return 0;
}