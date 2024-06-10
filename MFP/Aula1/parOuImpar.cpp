//https://neps.academy/br/course/programacao-basica-(codcad)/lesson/par-ou-impar
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if((a+b)%2 == 0)
        cout << "BINO" << endl;
    else
        cout << "CINO" << endl;
    return 0;
}