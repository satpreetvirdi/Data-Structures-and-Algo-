#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2; // mid index
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

int main()
{
    int n, key;
    cout << "Enter the size of Array" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    cout << "Enter the Key" << endl;
    cin >> key;
    cout<<binarySearch(arr , n, key);
    return 0;
}