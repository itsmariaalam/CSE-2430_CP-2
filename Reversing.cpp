#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = n-1; i >= 0; i--) cout << a[i] << " ";
    cout << endl;
    return 0;
}
