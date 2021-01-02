#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        string s;
        cin >> l >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] <= 69 && s[i] >= 65)
                s[i] = 'C';
            else if (s[i] <= 72 && s[i] >= 70)
                s[i] = 'G';
            else if (s[i] <= 76 && s[i] >= 73)
                s[i] = 'I';
            else if (s[i] <= 81 && s[i] >= 77)
                s[i] = 'O';
            else if (s[i] <= 86 && s[i] >= 82)
                s[i] = 'S';
            else if (s[i] <= 93 && s[i] >= 87)
                s[i] = 'Y';
            else if (s[i] <= 99 && s[i] >= 94)
                s[i] = 'a';
            else if (s[i] <= 102 && s[i] >= 100)
                s[i] = 'e';
            else if (s[i] <= 105 && s[i] >= 103)
                s[i] = 'g';
            else if (s[i] <= 108 && s[i] >= 106)
                s[i] = 'k';
            else if (s[i] <= 111 && s[i] >= 109)
                s[i] = 'm';
            else if (s[i] <= 127 && s[i] >= 112)
                s[i] = 'q';
            else
                s[i] = 'C';
        }
        cout << s << endl;
    }
}