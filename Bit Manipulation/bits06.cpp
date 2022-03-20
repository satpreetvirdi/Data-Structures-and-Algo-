#include <iostream>
using namespace std;

/*
Ques - Write a program to find 2 unique numbers in array where all number
except two, are present twice
*/
int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;

    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newXor = 0;

    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newXor = newXor ^ arr[i];
        }
    }
    cout << newXor << endl;

    cout << (tempxor ^ newXor) << endl;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 6, 7};
    unique(arr, 8);

    return 0;
}
