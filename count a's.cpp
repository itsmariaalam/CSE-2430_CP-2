#include <iostream>
using namespace std;
int main() {
    string s;
    int q;
    cin >> s >> q;
    int n = s.size();
    int pref[100005] = {0};
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i-1] + (s[i-1] == 'a');
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << "\n";
    }
    return 0;
}
