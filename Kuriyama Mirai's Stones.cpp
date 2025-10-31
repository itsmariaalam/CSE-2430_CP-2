#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long v[100005], orig[100005], pref1[100005], pref2[100005];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        orig[i] = v[i];
    }

    pref1[0] = 0;
    for (int i = 1; i <= n; i++) pref1[i] = pref1[i-1] + orig[i];

    sort(v+1, v+n+1);
    pref2[0] = 0;
    for (int i = 1; i <= n; i++) pref2[i] = pref2[i-1] + v[i];

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int type, l, r; cin >> type >> l >> r;
        if (type == 1) cout << pref1[r]-pref1[l-1] << "\n";
        else cout << pref2[r]-pref2[l-1] << "\n";
    }
}
