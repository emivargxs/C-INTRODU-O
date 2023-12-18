#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio: 

    system("cls"); //limpa a tela.

    cout << "Digite o valor da nota 1:\n";  
    cin >> n1; 

    cout << "Digite o valor da nota 2:\n";
    cin >> n2;



    res = n1 + n2;

    /* notas>=60 -> aprovado
       notas>=40 e <60 -> recuperação
       notas < 40 ->  reprovado
    
    */
    if(res >= 60){
        cout << "Aprovado\n";
    }else if (res < 40){
        cout << "Reprovado\n";
    } else{
        cout << "Recuperacao\n";
    }
  
    cout <<"\nDigitar outras notas?[s/n]:";
    cin >> opc;

    if(opc == 's' or opc =='S'){
        goto inicio;
    }

    return 0;
}
