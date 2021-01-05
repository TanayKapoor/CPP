//
// Created by tanay on 05/01/21.
//
#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;

        cin >> n;

        string s;

        cin >> s;

        int count = 0;

        for (int i = 0; i < n; i++) {

            if ((48 <= int(s[i]) && int(s[i]) <= 57)) {

                if (48 <= int(s[i + 1]) && int(s[i + 1]) <= 57) {

                    continue;

                } else {

                    count++;

                }

            }

        }

        cout << count << "\n";

    }

    return 0;

}