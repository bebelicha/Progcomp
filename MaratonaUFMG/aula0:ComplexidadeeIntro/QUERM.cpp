//https://br.spoj.com/problems/QUERM/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long n, teste = 1;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == i + 1) {
                cout << "Teste " << teste << endl;
                cout << v[i] << endl << endl;
                break;
            }
        }
        teste++;
    }
    return 0;
}
