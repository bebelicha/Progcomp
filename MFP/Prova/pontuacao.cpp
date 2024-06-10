#include <iostream>
using namespace std;
int main() {
 
    int N;
    cin >> N;
    int cont = 0;

    if (N >= 8) {
        cont++;
        N -= 8;
    }

    if (N >= 4) {
        cont++;
        N -= 4;
    }

    if (N >= 2) {
        cont++;
        N -= 2;
    }

    if (N >= 1) {
        cont++;
        N -= 1;
    }

    cout << cont << endl;
    return 0;
}