#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int i, distx, disty, dist, area;
    int x[4], y[4];
    for (int i = 0; i < 4; i++) {
        cin >> x[i] >> y[i];
    }
    distx = *max_element(x, x+4) - *min_element(x, x+4);
    disty = *max_element(y, y+4) - *min_element(y, y+4);
    dist = max(distx, disty);
    area = dist * dist;
    cout << area << endl;
    return 0;
}