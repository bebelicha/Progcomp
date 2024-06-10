#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++) {
        string time;
        int t, ponto;
        char maisi;
        cin >> time >> t >> maisi >> ponto;
        if (t == 1) {
            p1 += ponto;
        } else if (t == 2) {
            p2 += ponto;
        }
    }
    cout << p1 << " x " << p2 << endl;
    return 0;
}