#include <iostream>
#include <climits>
using namespace std;
// Time complexity is O(n3)
// Maximum Subarray Sum

int main()
{
    int n, sum;
    cout << "Enter the size of Array" << endl;
    cin >> n;
    int arr[n];
    int maxSum;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum =0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << endl;
            maxSum = max(maxSum , sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}