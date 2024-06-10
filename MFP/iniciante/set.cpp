#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> valor{1, 2, 3, 4, 5};
    for (auto i : valor) 
    {
        if(i == 3){
            valor.insert(0);
            valor.insert(10);
        }
        
    
    }
    for (auto i : valor) //: é um operador de intervalo que permite iterar sobre todos os elementos de um contêiner
    {
        cout << i << " ";
    
    }
    return 0;
}
//https://cplusplus.com/reference/set/set/
//Ele é implementado como uma árvore binária de busca balanceada (Red-Black Tree) e, portanto, a inserção, remoção e busca têm complexidade logarítmica e o acesso a um elemento tem complexidade linear.
//Elementos únicos: set não permite duplicatas. Cada valor que você insere deve ser único. Isso é diferente de vector ou list, que permitem duplicatas.
//Ordenado: set mantém seus elementos em ordem. Isso é útil quando você precisa de dados que são automaticamente ordenados.
//Não suporta acesso direto aos elementos: Ao contrário de vector e array, você não pode acessar elementos em um set usando o operador de índice. Você precisa iterar pelo set para acessar elementos individuais.
//Não fornece funções para acessar o primeiro e o último elemento dirtetamente