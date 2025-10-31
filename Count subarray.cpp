#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T; 
    for(int t = 0; t < T; t++) {
        int N;
        cin >> N;
        int A[100];          
        for(int i = 0; i < N; i++) cin >> A[i];
        for(int i = 0; i < N; i++) {
            int currentMax = A[i];    
            for(int j = i; j < N; j++) {
                if(A[j] > currentMax) currentMax = A[j]; 
                cout << currentMax << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
