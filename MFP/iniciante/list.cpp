#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> lista = {1, 2, 3, 4, 5};
    lista.push_back(6);
    
    for(auto i = lista.begin(); i != lista.end(); i++){
        if (*i == 3){
            lista.insert(i, 10);
        }
        
    }
    for (auto i = lista.begin(); i != lista.end(); i++) //auto é uma forma de não precisar definir o tipo da variável
    {   cout << *i << " " << endl;
        cout << "Tamanho da lista: " << lista.size() << endl;
    }
    //https://cplusplus.com/reference/list/list/
    //É implementado como uma lista duplamente encadeada, que é uma coleção de elementos onde cada elemento tem um ponteiro para o próximo e o anterior. Sua complexidade de tempo para inserção, remoção e busca é O(1) e para acessar um elemento é O(n).
    //Armazena os seus elementos em qualqueres lugares da memória.
    /*  Inserção e remoção eficientes em qualquer lugar: 
    Você pode inserir ou remover elementos de qualquer lugar na lista em tempo constante.
    Isso é diferente de vector ou array, onde a inserção ou remoção no meio ou no início é cara em termos de tempo.*/
    /*  Uso eficiente de memória:
    A lista duplamente encadeada é usada para implementar a lista. Portanto, cada elemento na lista contém um ponteiro para o próximo e o anterior.
    List não aloca memória adicional para elementos futuros, como vector faz. Isso significa que ele pode ser mais eficiente em termos de uso de memória se o número de elementos for incerto ou variável.
    */
   /*  Desvantagens:
    Acesso aleatório ineficiente:
    O acesso aleatório é ineficiente em listas. Para acessar um elemento, você precisa percorrer a lista a partir do início ou do final.
    */
    return 0;
}