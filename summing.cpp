#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0, x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << endl; 
    return 0;
}
