//https://codeforces.com/contest/1241/problem/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        long long n;
        cin >> n;
        if(n<4){
            cout << 4-n << endl;
        }
        else if(n%2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}