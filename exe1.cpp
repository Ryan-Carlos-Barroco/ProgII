#include <iostream>

int main(){

    int vetor[5];
    
    for(int i = 0; i < 5; i++){
    
        std::cout << "Escolha o numero do indice: " << i << std::endl;
        std::cin >> vetor[i];
        
    }
    
    int n;
    
    while (true){
    
        std::cout << "escolha o indice de 0 a 4 que quer avaliar (ou digite 100 para sair): ";
        std::cin >> n;
        
        
        if (n == 100){

            std::cout << "voce saiu do programa" << std::endl;
            break;
        
        }
        else if (n > 4){
        
                    std::cout << "VALOR INVALIDO!\nEscreva novamente!" << std::endl;
        
        }

        if(vetor[n] >= 0)
        {
            std::cout << "o valor " << vetor[n] << " eh um numero positivo" << std::endl;

        }
        
        else if(vetor[n] < 0)
        {
            std::cout << "o valor " << vetor[n] << " eh um numero negativo" << std::endl;
        }        
        else
        {
            std::cout << "O velor do indice " << n << " eh nulo" << std::endl; 
        }
        
        
    }
    
    return 0;

}