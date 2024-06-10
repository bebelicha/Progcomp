//https://codeforces.com/contest/489/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<int, int> > swaps;
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i+1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        if(min != i) {
            swaps.push_back({i, min});
            swap(a[i], a[min]);
        }
    }
    cout << swaps.size() << endl;
    for(auto& p : swaps) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}