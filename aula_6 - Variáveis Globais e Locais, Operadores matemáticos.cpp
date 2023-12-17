#include <iostream>

using namespace std;


    int n1, n2; //Variaveis globais

int main(){

    //Operadores Matemáticos: + - / * %

    int n3, n4; //Variaveis locais

    int res; //guarda resultados
    int res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

   // res = (n1 + n2 + n3 + n4) - 10;

    //cout << "A soma de todas variaveis e:" << res << "\n\n";

    res = n1 + n2 *n4;

    cout << "A soma de todas as variaveis e:" << res << "\n\n";

    res1 = n1/n2;
    res2 = n1%n2; 

    cout <<"Divis:" << res1 << "\n";
    cout <<"resto:" << res2 << "\n";






    return 0;
}