#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    bool found[26] = {false};
    for (int i = 0; i < n; i++) {
        char ch;
        if (s[i] >= 'A' && s[i] <= 'Z')
            ch = s[i] + 32;
        else
            ch = s[i];
        if (ch >= 'a' && ch <= 'z')
            found[ch - 'a'] = true;
    }
    for (int i = 0; i < 26; i++) {
        if (!found[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}


