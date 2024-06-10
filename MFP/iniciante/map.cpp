#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, string> alunos = {{1, "João"}, {2, "Maria"}, {3, "José"}};
    alunos[4] = "Pedro";
    for(auto i : alunos){
        cout << "Chave: " << i.first << " Valor:  " << i.second << endl;
    }
    return 0;
}
// https://cplusplus.com/reference/map/map/
// Ele é implementado como uma árvore binária de busca balanceada (Red-Black Tree) e, portanto, a inserção, remoção e busca têm complexidade logarítmica e o acesso a um elemento tem complexidade linear.
// Elementos únicos: map não permite chaves duplicadas. Cada chave que você insere deve ser única. Isso é diferente de vector ou list, que permitem chaves duplicadas.
// Ordenado: map mantém suas chaves em ordem. Isso é útil quando você precisa de dados que são automaticamente ordenados.
// Acesso direto aos elementos: Ao contrário de set, você pode acessar elementos em um map usando a chave. 
// Não fornece funções para acessar o primeiro e o último elemento diretamente
// O map é uma coleção de pares chave-valor, onde cada chave é única e mapeia para um valor associado. Isso é útil quando você precisa associar um valor a uma chave específica.
// No map, as chaves são únicas, enquanto no set, todos os elementos são únicos.
