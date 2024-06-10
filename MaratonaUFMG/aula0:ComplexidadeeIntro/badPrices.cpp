//http://codeforces.com/contest/1213/problem/B
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        long long c = 0;
        long long min = a[n - 1];
        for(int j = n - 2; j >= 0; j--){
            if(a[j] > min){
                c++;
            } else {
                min = a[j];
            }
        }
        
        cout << c << endl;
        
    }
    return 0;
}