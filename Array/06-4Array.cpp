#include <iostream>
#include <climits>
using namespace std;
// Max Sum Subarray
// Cumulative sum Approach

int main()
{

    int n;
    cout << "Enter the size of Array " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i];
    }
    int maxSum = 0;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    return 0;
}