#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, Q, D;
    cin >> N >> Q >> D;
    vector<vector<int>> dist(N, vector<int>(N, 1e9));
    vector<pair<int, int>> coords(N);
    for (int i = 0; i < N; ++i) {
        cin >> coords[i].first >> coords[i].second;
        dist[i][i] = 0;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int dx = coords[i].first - coords[j].first;
            int dy = coords[i].second - coords[j].second;
            if (dx * dx + dy * dy <= D * D) {
                dist[i][j] = dist[j][i] = 1;
            }
        }
    }
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for (int i = 0; i < Q; ++i) {
        int S, T;
        cin >> S >> T;
        --S; --T;
        if (dist[S][T] != 1e9) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}