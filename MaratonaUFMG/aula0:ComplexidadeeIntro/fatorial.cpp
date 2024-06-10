// https://br.spoj.com/problems/FATORIAL/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        int result = 1;
        for(int i = 2; i <= n; i++){
            result *= i;
        }
        return result;
    }
}
int main(){
    int n;
    cin >> n;
    cout << fat(n);

    return 0;
}
