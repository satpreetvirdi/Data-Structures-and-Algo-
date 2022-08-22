class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 0)
            return false;
        if (n == 1)
            return true;
        while (n != 4 && n % 4 == 0)
        {
            n = n >> 2;
        }

        if (n == 4)
            return true;
        else
            return false;
    }
};