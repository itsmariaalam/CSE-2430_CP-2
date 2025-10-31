#include <iostream>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int a[105];
        for (int i = 0; i < N; i++) cin >> a[i];

        int minSum = INT_MAX;
        for (int i = 0; i < N-1; i++) {
            for (int j = i+1; j < N; j++) {
                int sum = a[i] + a[j] + (j - i);
                if (sum < minSum) minSum = sum;
            }
        }

        cout << minSum << endl;
    }
    return 0;
}
