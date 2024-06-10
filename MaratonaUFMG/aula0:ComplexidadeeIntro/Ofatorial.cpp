//https://br.spoj.com/problems/FATORIAL/
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}
int main() {
    int i = 1;
    while(!cin.eof()){
        long long n;
        cin >> n;
        if(cin.eof()) break; 
        cout << "Instancia " << i++ << endl;
        string s = to_string(fat(n));
        int c = 0;
        for(int j = s.size() - 1; j >= 0; j--){
            if(s[j] != '0'){
                c = s[j] - '0';
                break;
            }
        }
        cout << c << endl << endl; 
    }
    return 0;
}
