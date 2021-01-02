#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, l, k, n;
    cin >> n;
    long long a[n + 1];
    long double sum, val = -9999999999;
    a[0] = 0;
    for (i = 1; i < n + 1; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (i = 1; i < n + 1; i++)
    {
        sum = 0;
        k = i;
        l = 1;
        while (k + l < n)
        {
            l++;
            k += l;
        }
        sum = a[k] - a[i - 1];
        if (sum > val)
            val = sum;
    }
    cout << fixed << setprecision(0) << val << endl; //see note below
}