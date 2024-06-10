
#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,m;
    cin>>m>>n;
    int a = (m*m) - (n*n);
    int b = 2*(m*n);
    int c = (m*m) + (n*n);
    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}