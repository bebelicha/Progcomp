//https://br.spoj.com/problems/MINHOCA/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > matriz(n, vector<int>(m));
    vector<int> linha(n, 0);
    vector<int> coluna(m, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            linha[i] += matriz[i][j];
            coluna[j] += matriz[i][j];
        }
    }
    int max_linha = *max_element(linha.begin(), linha.end());
    int max_coluna = *max_element(coluna.begin(), coluna.end());
    if(max_linha > max_coluna){
        cout << max_linha << endl;
    }
    else{
        cout << max_coluna << endl;
    }
    return 0;
}