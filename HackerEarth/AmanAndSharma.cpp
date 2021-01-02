#include <bits/stdc++.h>
using namespace std;
int main()
{
    long x, r, t, count = 0, i;
    cin >> t;
    while (t--)
    {
        cin >> r >> x;
        if ((100 * x) >= (2 * 22 * r / 7))
        {
            count++;
        }
    }
    cout << count << endl;
}