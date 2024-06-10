// https://br.spoj.com/problems/PRIMO/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  bool primo = true;
  for (long long j = 2; j * j <= n; j++) // j*j <= n é o mesmo que j <= sqrt(n)
  {
    if (n % j == 0) {
      primo = false;
      break;
    }
  }
  if (primo) {
    cout << "sim" << endl;
  } else {
    cout << "nao" << endl;
  }
  return 0;
}
