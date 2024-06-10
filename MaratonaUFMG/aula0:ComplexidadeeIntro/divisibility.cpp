// https://codeforces.com/problemset/problem/1328/A
//Divisibility
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int divisivel(int a, int b){
  if(a%b == 0){
    return 0;
  }
  else{
    return b - a%b;

  }
}
int main() {
  long t;
  cin >> t;
  long long a, b;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;
    cout << divisivel(a, b) << endl;
  }
  return 0;
}
