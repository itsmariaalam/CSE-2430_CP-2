#include <iostream>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    long long a[100005], pref[100005];
    for (int i = 1; i <= n; i++) cin >> a[i];
    pref[0] = 0;
    for (int i = 1; i <= n; i++) pref[i] = pref[i-1] + a[i];
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << "\n";
    }
    return 0;
}
