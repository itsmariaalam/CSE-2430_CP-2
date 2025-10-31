#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    unordered_set<long long> s;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 0; i < Q; i++) {
        long long x;
        cin >> x;
        if (s.count(x)) cout << "found" << endl;
        else cout << "not found" << endl;
    }
    return 0;
}
