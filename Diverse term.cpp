#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    int index[100];
    int taken[101] = {0};
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (taken[a[i]] == 0) {  
            taken[a[i]] = 1;
            index[cnt] = i + 1;
            cnt++;
        }
    }
    if (cnt >= k) {
        cout << "YES\n";
        for (int i = 0; i < k; i++)
            cout << index[i] << " ";
    } else {
        cout << "NO";
    }
    return 0;
}
