#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, val, sum = 0, p;
    cin >> n;
    while (n--)
    {
        cin >> val;
        sum *= 10;
        sum += (val % 10); //after n loops, now sum is giving the result but why below code
        p = sum % 10;      //see note below
        if (p == 0)
            sum = 0;
    }
    if (sum % 10 == 0)
        cout << "Yes";
    else
        cout << "No";
}