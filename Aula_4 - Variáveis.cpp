#include <iostream>

using namespace std;

int main(){

    //TIPO NOME;
    //TIPO NOME = VALOR;
    
    int vidas = 0; //10,25
    char letra = 'B';// caracter 'B', 'A'
   // char letras[20] =  //vetor de 20 letras
    double decimal = 5.2; //2,5; 5,8
    float decimal2 = 7.99999; //identico ao double, converte o numero, precisão menor
    bool vivo = true; //Verdadeir0(1) ou Falso(0) (true or false)
    string nome = "Emile"; //Recebe um texto maior "Emile"

    //Imprimir variaveis

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    //Atribuir valores do teclado

    cout <<"Digite o numero de vidas:"; //tipo printf //escrevi
    cin >> vidas; //scanf //armazena o valor na variavel vida
    
    cout << "Digite uma letra:";
    cin >> letra;

    cout << "dinheiro:";
    cin >> decimal;

    cout << "Digite seu nome:";
    cin >> nome;


    return 0;
}