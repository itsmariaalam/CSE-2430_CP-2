#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    bool valid = true;
    if (S[A] != '-') valid = false;
    for (int i = 0; i < S.size(); i++) {
        if (i == A) continue; 
        if (S[i] < '0' || S[i] > '9') valid = false;
    }
    if (valid) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
