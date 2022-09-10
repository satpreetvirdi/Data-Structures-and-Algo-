#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    long n, k;

    while (t--)
    {
        vector<long> div;
        vector<long> ans;
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    div.push_back(i);
            }
            for (auto it : div)
            {
                n = n * it;
                ans.push_back(n);
            }
        }
        long res = 0;
        for (auto it : ans)
        {
            res += it;
        }
        cout<<(res%mod);
    }
    return 0;
}
