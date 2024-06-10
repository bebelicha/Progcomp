#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> valores;
    int aux;
    for(int i = 0; i < 5; i++){
        cin >> aux;
        valores.push_back(aux);
    }
    for(int i = 0; i < 5; i++){
        cout << valores[i] << " " <<"Tamanho: " << valores.size() << endl;

    }
    return 0;

}
//https://cplusplus.com/reference/vector/vector/
//ele é implementado como um array dinâmico, que é uma coleção de elementos armazenados em locais contíguos na memória (locais de memória que estão lado a lado). Sua complexidade de tempo para inserção, remoção e busca é O(1) e para acessar um elemento é O(n).

/*Acesso direto aos elementos: 
Ao contrário de list, você pode acessar elementos em um vector usando o operador de índice. 
Isso permite um acesso rápido e eficiente aos elementos.
*/
/*
    Redimensionamento dinâmico: 
    vector pode redimensionar-se automaticamente quando elementos são adicionados ou removidos. 
    Isso é diferente de array, que tem um tamanho fixo.
*/
/* 
    Inserção e remoção eficientes no final: 
    vector permite a inserção e remoção de elementos no final em tempo constante. 
    No entanto, a inserção ou remoção no meio ou no início é cara em termos de tempo, ao contrário de list.
*/
*/ 
    Uso de memória: 
    vector aloca memória adicional para acomodar elementos futuros, 
    o que pode levar a um uso de memória ineficiente se o número de elementos for muito menor do que a capacidade do vector.
*/