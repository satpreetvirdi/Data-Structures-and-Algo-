#include <iostream>
using namespace std;

void decreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    decreasingOrder(n - 1);
};
void increasingOrder(int n)
{
    if(n==0){
        return;
    }
    increasingOrder(n - 1);
    cout << n << endl;
}

int main()
{
    decreasingOrder(5);
    increasingOrder(5);

    return 0;
}