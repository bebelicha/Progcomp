//https://judge.beecrowd.com/pt/problems/view/1045
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<float> lados(3);
    float a, b, c;
    cin >> lados[0] >> lados[1] >> lados[2];
    sort(lados.begin(), lados.end(), greater<float>());
    a = lados[0];
    b = lados[1];
    c = lados[2];
    if(a >= b+c){
        cout << "NAO FORMA TRIANGULO" << endl;
        
    }
    else{
        if(a*a == b*b + c*c){
        cout << "TRIANGULO RETANGULO" << endl;
        }
        if(a*a > b*b + c*c){
        cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if(a*a < b*b + c*c){
        cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if(a == b && b == c){
        cout << "TRIANGULO EQUILATERO" << endl;
        }
        if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
        cout << "TRIANGULO ISOSCELES" << endl;
        }
    } 

    return 0;
}