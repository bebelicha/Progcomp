//https://codeforces.com/contest/1315/problem/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    long long t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        long long m = max(max(a-x-1, x)*b, max(b-y-1, y)*a);
        cout << m << endl;
        
    }
    return 0;
}