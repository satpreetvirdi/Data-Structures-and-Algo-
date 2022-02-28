#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin>>arr;
    bool found = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            found = 0;
            break;
        }
    }
    if (found == true)
        cout << "Word is palindrome" << endl;

    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}