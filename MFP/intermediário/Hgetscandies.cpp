//https://codeforces.com/gym/101375/problem/H
//Busca binária 
//Problema iterativo: número de perguntas que você pode fazer
#include <iostream>
using namespace std;
int main() {
    int com=1, fim=1000000000;
    while(true){
        int meio = (com+fim)/2;
        cout << "Q " << meio << endl;
        char ans;
        cin >> ans;
        if(ans == '<'){
            fim = meio-1;
        }
        if(ans == '>'){
            com = meio+1;
        }
        if(ans == '=')  return 0;
   }
}