// Fast Prime
//https://www.urionlinejudge.com.br/judge/en/problems/view/1221
// divisores de 36: 1, 2, 3, 4, 6, 9, 12, 18, 36 em pares: (1, 36), (2, 18), (3,
// 12), (4, 9), (6, 6) Vamos olhar até a raís Para cada elemento X fazemos até a
// raiz de X operações, e repetimos isso N vezes, então a complexidade é
// O(N*sqrt(X)) Double é probema
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    bool prime = true;
    if (x == 1) {
      prime = false;
    }
    for (long long j = 2; j * j <= x; j++) {
      if (x % j == 0) {
        prime = false;
        break;
      }
    }
    if (prime) {
      cout << "Prime" << endl;
    } else {
      cout << "Not Prime" << endl;
    }
  }

  return 0;
}
