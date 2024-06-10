#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long tempoMinimoParaEntrega(int N, int p, vector<int>& A) {
    sort(A.begin(), A.end());
    long long esquerda = 0, direita = 1e18;
    long long resposta = 0;
    while (esquerda <= direita) {
        long long meio = (esquerda + direita) / 2;
        long long entregues = 0;
        for (int i = 0; i < N; ++i) {
            entregues += meio / A[i];
            if (entregues >= p) break;
        }
        if (entregues >= p) {
            resposta = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return resposta;
}

int main() {
    int N, p;
    cin >> N >> p;
    vector<int> tempos(N);
    for (int i = 0; i < N; ++i) {
        cin >> tempos[i];
    }
    cout << tempoMinimoParaEntrega(N, p, tempos) << endl;
    return 0;
}
