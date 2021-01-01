#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    if (n % 5 != 0)
        cout << ((n - (n % 5)) / 5) + 1 << endl;
    else
        cout << n / 5 << endl;
}