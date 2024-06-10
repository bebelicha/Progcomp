#include<bits/stdc++.h>
using namespace std;

int n;

/*
    A função então compara ans1 e ans2. Se eles forem iguais, a função imprime uma string contendo um ponto de exclamação seguido do valor de i, e então termina o programa com o código de saída 0.

    Se ans1 e ans2 não forem iguais, a função retorna true se ans1 for menor que ans2, e false caso contrário.


*/
//Falo uma posição, olho aquela posição e oposta e vejo em que ordem estão
bool ask(int i){
    int ans1, ans2;
    cout<<"? "<<i<<endl;
    cin>>ans1;
    cout<<"? "<<i+n/2<<endl;
    if(ans1==ans2){
        cout<<"! "<<i<<endl;
        exit(0);
    }
    return ans1<ans2; //se a primeira posição for menor que a segunda, retorna true
}

int main(){
    cin>>n;
    n=n/2;
    if(n%2==1){
        cout<<"! -1"<<endl; //se é ímpar já sabemos que não é possível
        return 0;
    }
    int base=ask(1);
    int com=2, fim=n;
    while(true){
        int meio = (com+fim)/2;
        int curr=ask(meio);
        if(curr!=base){
            com=meio-1;
        }
        else{
            fim=meio+1;
        }
    return 0;
    }
}