#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[101][101];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    int primary = 0, secondary = 0;
    for (int i = 0; i < N; i++) {
        primary += A[i][i];          
        secondary += A[i][N-1-i];     
    }

    cout << abs(primary - secondary) << endl;

    return 0;
}
