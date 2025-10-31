#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count[128] = {0}; 
    for (char c : s) 
        count[c]++;
    for (char c = 'A'; c <= 'Z'; c++)
        if (count[c] > 0)
            cout << c << " " << count[c] << endl;
    for (char c = 'a'; c <= 'z'; c++)
        if (count[c] > 0)
            cout << c << " " << count[c] << endl;
    return 0;
}
