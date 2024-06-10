#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int p = pow(2, N) - 1;
    vector<int> a(p + 1);
    for (int i = 1; i <= p; ++i) {
        cin >> a[i];
    }
    for (int i = p; i > 1; i -= 2) {
        a[i / 2] += max(a[i], a[i - 1]);
    }
    cout << a[1] << endl;
    return 0;
}