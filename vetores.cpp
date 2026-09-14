#include <iostream>
#include <cmath>
using namespace std;

const int max_tamanho = 80;
int main (){
    
    double soma[max_tamanho], n;
    int i, tamanho;

     cout << "Digite o tamanho do vetor" << endl;
     cin >> tamanho;
     
     cout << "Digite o primeiro numero" << endl;
     cin >> n;

     soma[0] = n;

    for (i = 1; i <tamanho; i++)
    { 
       soma[i] =  soma[i - 1] + pow(soma[i - 1], 2);  
      
    }

    cout << endl;

    for (i = 0; i < tamanho; i++)
    {
        cout << soma[i] << "\n";
    }
    
    cout << endl;

    return 0;
}