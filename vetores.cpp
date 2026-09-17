#include <iostream>
#include <cmath>
using namespace std;

//define o tamanho tamanho em uma variavel constante
const int max_tamanho = 80;

int main (){

    double soma[max_tamanho], n;
    int i, tamanho;

    while (true)
    { 
        //lê a entrada do usuário
        cout << "Digite o tamanho do vetor" << endl;
        cin >> tamanho;
        
        //valida a entrada do usuário
        if (tamanho >= 80)
        {
          cout << "numero digitado excede valor limite\nescreva novamente!" << endl;
        }
        else
        {
            break;
        }
    }
    
    
    cout << "Digite o primeiro numero" << endl;
    cin >> n; 

     //define que o numero da posição [0] escolhida pelo usuário
     soma[0] = n;

    //estrutura for que faz a soma
    for (i = 1; i <tamanho; i++)
    { 
       soma[i] =  soma[i - 1] + pow(soma[i - 1], 2);  
    }
    //limpa o buffer
    cout << endl;

    //estrutura for para mostrar para o usuário a progressão da soma 
    for (i = 0; i < tamanho; i++)
    {
        cout << soma[i] << "\n";

        //estrura if para evitar a repetição de "inf" no terminal
        if (soma[i] == INFINITY)
        {
            cout << "este valor não é mais computável" << endl;
            break;
        }
        
    }
    
    cout << endl;

    return 0;
}