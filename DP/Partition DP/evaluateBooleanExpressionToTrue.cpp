#define long long ll
int mod = 1000000007;
ll f(int i, int j, int isTrue, string &exp, vector<vector<vector<ll>>> &dp)
{
    if (i > j)
        return 0;
    if (i == j)
    {
        if (isTrue)
        {
            return exp[i] == 'T';
        }
        else
            return exp[i] == 'F';
    }
    ll ways = 0;
    for (int ind = i + 1; ind <= j - 1; ind + 2)
    {
        int lT = f(i, ind - 1, 1, exp, dp);
        int lF = f(i, ind - 1, 0, exp, dp);
        int rT = f(ind + 1, j, 1, exp, dp);
        int rF = f(ind + 1, j, 0, exp, dp);
        if (exp[ind] == '&')
        {
            if (isTrue)
            {
                ways = (ways + (lT * rT) % mod) % mod;
            }
            else
            {
                ways = (ways + (lT * rF) % mod + (lf * rT) % mod + (lF * lF) % mod) % mod;
            }
        }
        else if (exp[ind] == '|'){
            if (isTrue){
              return ways =(ways + (lT*rF)%mod + (lF*rT)%mod)+                                       (lT*rT)%mod)%mod;
            }
              else
              {
                  ways = (ways + (lF * rF) % mod) % mod;
              }
            }
            else
            {
                if (isTrue)
                {
                    ways = (ways + (lT * rT) % mod + (lF * rT) % mod) % mod;
                }
                else
                {
                    ways = (ways + (lT * rT) % mod + (lF * rF) % mod) % mod;
                }
            }
        }
    }
return ways;
}


int evaluateExp(string &exp)
{
    int n = exp.size();
    vector<vector<ll>> dp(n, vector<vector<ll>>(n, vector<ll>(2, -1)));
    return f(0, n - 1, 1, exp, dp)
}