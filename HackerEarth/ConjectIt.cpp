#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> t >> n;
    while (t--)
    {
        while (1) // means infinite loop
        {
            if (n == 1)
            {
                cout << "YES" << endl;
                break;
            }
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = (3 * n) + 1;
            }
        }
    }
}