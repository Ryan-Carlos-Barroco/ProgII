#include <iostream>

int main(){

    double vetor[8];
    double soma = 0;
    
    for (int i = 0; i < 8; i++){
    
        std::cout << "Escolha o " << i+1 << " valor" << std::endl;
        std::cin >> vetor[i];
      
        
        soma += vetor[i];
       
    }
    
    double media = soma / 8;
    
    std::cout << "a media dos 8 valores eh igual a: " << media << std::endl;
    
    for (int i = 0; i < 8; i++)
    {
    
        if(vetor[i] > media)
        {
           std::cout << "o valor " << vetor[i] << " eh maior que a media" << std::endl;
        }
    
    }

    return 0;


}