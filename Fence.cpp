#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    long long sum = 0;
    for(int i = 0; i < k; i++) sum += h[i]; 
    long long minSum = sum;
    int minIndex = 0;
    for(int i = k; i < n; i++) {
        sum = sum - h[i - k] + h[i]; 
        if(sum < minSum) {
            minSum = sum;
            minIndex = i - k + 1;
        }
    }
    cout << minIndex + 1 << endl; 
    return 0;
}
