//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbTl6Zkp6LTQ3NTRBUzBiS1hTYl8ySm5wX3VlUXxBQ3Jtc0tueHdNUERvNjVzNlg5Rm81aHRZdUY1UkVReXRUekIzMGxYRFFUXzIxbkR1SnNMT3FqR3duc216SzNYXzNCaGVaMDgyYlY1RmJTRzRETHpxcE1uZ1hGQm9zaGRSVlhrWmMzV1d5bzZjcGxDem1uM1AzMA&q=https%3A%2F%2Fcodeforces.com%2Fproblemset%2Fproblem%2F4%2FA&v=OT-ZzhfstZY
#include <iostream>
using namespace std;
int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}