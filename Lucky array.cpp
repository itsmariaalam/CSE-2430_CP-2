#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];
    int minVal = a[0], freq = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
            freq = 1; 
        } else if (a[i] == minVal) {
            freq++;
        }
    }

    if (freq % 2 == 1) cout << "Lucky" << endl;
    else cout << "Unlucky" << endl;

    return 0;
}
