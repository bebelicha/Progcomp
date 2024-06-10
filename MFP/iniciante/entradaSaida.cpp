#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << "X = " << a + b << endl;

    //Variáveis e tipos de dados
        //Inteiros
            int x = 10;
            unsigned int y = 1;//não pode ser negativo
            short int z = 2; //menor que int
            long long int w = 3; //maior que int
        //Reais
            float f = 1.5; //4 bytes
            double d = 1.5; //8 bytes
            long double ld = 1.5; //10 bytes
            long long double lld = 1.5; //16 bytes
        //Booleanos
            bool b1 = true;
            b1 = false;
        //Textuais
            char c = 'a'; //1 byte
            string s = "abc"; //não é tipo primitivo
            getline(cin, s); //lê uma linha
            int n = s.size(); //tamanho da string
            s = s + "def"; //concatenação
            s[0] = 'A'; //altera o primeiro caractere

    //Operadores ternários
        //condição ? valor_se_verdadeiro : valor_se_falso
        int x = 10, y = 20;
        int maior = x > y ? x : y; 
        int idade = 16;
        bool ternario = idade >= 18 ? true : false;
        string voto = idade >= 18 ? "Voto obrigatório" : "Voto não obrigatório";

    //switch
        int x = 2;
        switch(x){
            case 1:
                cout << "x é 1" << endl;
                break;
            case 2:
                cout << "x é 2" << endl;
                break;
            default:
                cout << "x não é 1 nem 2" << endl;
        }
    return 0;

    //while
        int x = 0;
        while(x < 10){
            cout << x << endl;
            x++;
        }
    //do while
        int x = 0;
        do{
            cout << x << endl;
            x++;
        }while(x < 10);
    //for
        for(int i = 0; i < 10; i++){
            cout << i << endl;
        }
}