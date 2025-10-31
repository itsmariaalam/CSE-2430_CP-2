#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string name[1000];
    int A[1000], M[1000], S[1000], E[1000], total[1000];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> A[i] >> M[i] >> S[i] >> E[i];
        total[i] = A[i] + M[i] + S[i] + E[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (total[i] < total[j] || (total[i] == total[j] && name[i] > name[j])) {
                // swap all data
                swap(total[i], total[j]);
                swap(name[i], name[j]);
                swap(A[i], A[j]);
                swap(M[i], M[j]);
                swap(S[i], S[j]);
                swap(E[i], E[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << total[i] << " " 
             << A[i] << " " << M[i] << " " << S[i] << " " << E[i] << endl;
    }
    return 0;
}
