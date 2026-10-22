#include <iostream>
#include <cstdlib> 

int main () {

        int n; 

        std::cout << "escolha o tamanho do vetor de numeros decimais" << std::endl ;
        std::cin >> n;

        double* v = static_cast<double*>(malloc(n * sizeof(double)));
        
        if(v == nullptr){
        
                std::cerr << "Sem memoria" << std::endl;
                
                std::cerr << "Encerrando programa..." << std::endl;
                
                return 1;
        
        }
        
        size_t bytes =  n * sizeof(double);
        
        std::cout << bytes << std::endl;

        free(v);
        
        v = nullptr;
        
        return 0;
        
        

}