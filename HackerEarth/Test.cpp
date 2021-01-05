//
// Created by tanay on 05/01/21.
//

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
string cad;
int n;
int dp[2][14][1024][1230];

ll rec(int pos, int sum, int mask, bool isrep, bool tight, ll num, bool ist) {
    if (pos == n) {
        ll rt = sqrt(sum);
        if (rt * rt == sum && isrep && ist) {
            return 1;
        }
        return 0;
    }
    if (!tight && dp[isrep][pos][mask][sum] != -1) return dp[isrep][pos][mask][sum];
    int d, nmask;
    bool ntight, nisrep;
    ll cnt = 0;
    for (d = 0; d < 10; ++d) {
        ntight = false;
        if (tight && cad[pos] - '0' == d) ntight = true;
        if (tight && cad[pos] - '0' < d) break;
        if (ist || d) nisrep = mask & (1 << d);
        else nisrep = 0;
        if (ist || d) nmask = mask | (1 << d);
        else nmask = mask;
        cnt += rec(pos + 1, sum + d * d, nmask, nisrep | isrep, ntight, num * 10 + d, ist | d);
    }
    dp[isrep][pos][mask][sum] = cnt;
    return cnt;
}

void sets(ll num) {
    ostringstream ss;
    ss << num;
    cad = ss.str();
    n = cad.size();
    memset(dp, -1, sizeof dp);
}

int main() {
    ll a, b;
    double st, en;
    int t;
    scanf("%d", &t);
    ll a1, a2;
    a1 = a2 = 0;
    while (t--) {
        a1 = 0;
        scanf("%lld %lld", &a, &b);
        if (a) {
            sets(a - 1);
            a1 = rec(0, 0, 0, 0, 1, 0, 0);
        }
        sets(b);
        a2 = rec(0, 0, 0, 0, 1, 0, 0);
        printf("%lld\n", a2 - a1);
    }

}