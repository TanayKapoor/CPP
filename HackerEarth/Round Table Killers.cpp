//
// Created by tanay on 05/01/21.
//

#include<iostream>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    int a[n], i;
    for (i = 0; i <= n - 1; i++)
        a[i] = 1;

    int t = n;

    int c;
    while (t > x % k) {
        c = x % k;
        t = t - c;

        for (i = 1; i <= c + 1; i++) {
            x++;

            if (x > n)
                x = x - n;

            if (a[x] == 0) {
                i--;
                continue;
            }

            if (i != c + 1)
                a[x] = 0;
        }
    }

    cout << x;

    return 0;
}
