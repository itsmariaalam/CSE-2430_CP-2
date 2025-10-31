#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    char A[101][101];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    int X, Y;
    cin >> X >> Y;
    X--; Y--; 
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    bool ok = true;
    for (int k = 0; k < 8; k++) {
        int nx = X + dx[k];
        int ny = Y + dy[k];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (A[nx][ny] != 'x') {
                ok = false;
                break;
            }
        }
    }

    if (ok) cout << "yes";
    else cout << "no";

    return 0;
}
