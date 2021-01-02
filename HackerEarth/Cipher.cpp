#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] + k - 'a') % 26 + 'a'; // %26 ==> in case k value exceeds 26 , the
                                                // result won't get affected
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {

            s[i] = (s[i] + k - 'A') % 26;
            if (s[i] < 'A')
                s[i] = (s[i]) % 26 + 'A';
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            s[i] = (s[i] + k - '0') % 10 + '0'; // for s[i]-'0' explanation , refer
                                                // problem 37 i.e Seven-segment display
        }
        else
        {
            continue;
        }
    }
    cout << s;
}
