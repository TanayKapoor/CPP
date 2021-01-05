//
// Created by tanay on 05/01/21.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ans = "NO";
        string s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        //for horizontal
        for (int i = 0; i < 2; i++) {
            if ((s1[i] == 'x' && s1[i + 1] == 'x' && s1[i + 2] == '.') ||
                (s2[i] == 'x' && s2[i + 1] == 'x' && s2[i + 2] == '.') ||
                (s3[i] == 'x' && s3[i + 1] == 'x' && s3[i + 2] == '.') ||
                (s4[i] == 'x' && s4[i + 1] == 'x' && s4[i + 2] == '.') ||
                (s1[i] == 'x' && s1[i + 1] == '.' && s1[i + 2] == 'x') ||
                (s2[i] == 'x' && s2[i + 1] == '.' && s2[i + 2] == 'x') ||
                (s3[i] == 'x' && s3[i + 1] == '.' && s3[i + 2] == 'x') ||
                (s4[i] == 'x' && s4[i + 1] == '.' && s4[i + 2] == 'x') ||
                (s1[i] == '.' && s1[i + 1] == 'x' && s1[i + 2] == 'x') ||
                (s2[i] == '.' && s2[i + 1] == 'x' && s2[i + 2] == 'x') ||
                (s3[i] == '.' && s3[i + 1] == 'x' && s3[i + 2] == 'x') ||
                (s4[i] == '.' && s4[i + 1] == 'x' && s4[i + 2] == 'x')) {
                ans = "YES";
                break;
            }
        }
        //for vertical
        for (int i = 0; i < 4; i++) {
            if ((s1[i] == 'x' && s2[i] == 'x' && s3[i] == '.') || (s2[i] == 'x' && s3[i] == 'x' && s4[i] == '.') ||
                (s1[i] == 'x' && s2[i] == '.' && s3[i] == 'x') || (s2[i] == 'x' && s3[i] == '.' && s4[i] == 'x') ||
                (s1[i] == '.' && s2[i] == 'x' && s3[i] == 'x') || (s2[i] == '.' && s3[i] == 'x' && s4[i] == 'x')) {
                ans = "YES";
                break;
            }
        }
        //for diagonal
        for (int i = 0; i < 2; i++) {
            if ((s1[i] == 'x' && s2[i + 1] == 'x' && s3[i + 2] == '.') ||
                (s2[i] == 'x' && s3[i + 1] == 'x' && s4[i + 2] == '.') ||
                (s1[3 - i] == 'x' && s2[2 - i] == 'x' && s3[1 - i] == '.') ||
                (s2[3 - i] == 'x' && s3[2 - i] == 'x' && s4[1 - i] == '.') ||
                (s1[i] == 'x' && s2[i + 1] == '.' && s3[i + 2] == 'x') ||
                (s2[i] == 'x' && s3[i + 1] == '.' && s4[i + 2] == 'x') ||
                (s1[3 - i] == 'x' && s2[2 - i] == '.' && s3[1 - i] == 'x') ||
                (s2[3 - i] == 'x' && s3[2 - i] == '.' && s4[1 - i] == 'x') ||
                (s1[i] == '.' && s2[i + 1] == 'x' && s3[i + 2] == 'x') ||
                (s2[i] == '.' && s3[i + 1] == 'x' && s4[i + 2] == 'x') ||
                (s1[3 - i] == '.' && s2[2 - i] == 'x' && s3[1 - i] == 'x') ||
                (s2[3 - i] == '.' && s3[2 - i] == 'x' && s4[1 - i] == 'x')) {
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
