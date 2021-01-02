#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum;
    string s;
    cin >> s;
    sum = (s[0] - '0') * 1 + (s[1] - '0') * 2 + (s[2] - '0') * 3 + (s[3] - '0') * 4 + (s[4] - '0') * 5 + (s[5] - '0') * 6 + (s[6] - '0') * 7 + (s[7] - '0') * 8 + (s[8] - '0') * 9 + (s[9] - '0') * 10;
    if (sum % 11 == 0)
    {
        cout << "Legal ISBN" << endl;
    }
    else
    {
        cout << "Illegal ISBN" << endl;
    }
}