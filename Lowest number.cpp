#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];

    int minVal = a[0], pos = 1; 
    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
            pos = i + 1; 
        }
    }

    cout << minVal << " " << pos << endl;
    return 0;
}
