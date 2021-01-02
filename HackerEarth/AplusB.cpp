#include <bits/stdc++.h>

using namespace std;

void sum(string a, string b)
{

    int n = a.size();

    int m = b.size();

    int size = max(m, n) + 1, carry = 0; //added 1 because there can be carry at last digit also

    int ans[size] = {0};

    for (int i = 0; i < size; i++)

    {

        if (n - 1 - i < 0 && m - 1 - i >= 0)

        {

            ans[size - 1 - i] = (b[m - 1 - i] - '0' + carry) % 10;

            carry = (b[m - 1 - i] - '0' + carry) / 10;
        }

        else if (m - 1 - i < 0 && n - 1 - i >= 0)

        {

            ans[size - 1 - i] = (a[n - 1 - i] - '0' + carry) % 10;

            carry = (a[n - 1 - i] - '0' + carry) / 10;
        }

        else if ((n - 1 - i < 0) && (m - 1 - i < 0))

        {

            ans[size - 1 - i] = (carry) % 10;

            carry = carry / 10;
        }

        else

        {

            ans[size - 1 - i] = ((a[n - 1 - i] - '0') + (b[m - 1 - i] - '0') + carry) % 10;

            carry = ((a[n - 1 - i] - '0') + (b[m - 1 - i] - '0') + carry) / 10;
        }
    }

    // printing answer

    for (int i = 0; i < size; i++)

    {

        if (!(i == 0 && ans[i] == 0))

            cout << ans[i];
    }

    cout << endl;

    return;
}

int main()
{

    int p = 12; // no. of times input is taken

    while (p--)
    {

        string a, b;

        cin >> a >> b;

        sum(a, b);
    }

    return 0;
}