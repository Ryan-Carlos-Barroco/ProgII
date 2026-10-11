#include <iostream>
#include <cmath> 
#ifdef _WIN32
        #define NOMINMAX
        #include <Windows.h>
#endif
#include <string> 
#include <limits>


//calcula o valor de delta
double delta (double a, double b, double c);

//valida entrada dos coeficientes 
double lerNumero (std::string mensagem);

int main ()
{
        //permite acentos apenas no console windows
        #ifdef _WIN32
                SetConsoleOutputCP(65001); 
        #endif

        //lê os coeficientes

        double a;

        while (true){

                a = lerNumero("Escolha o valor do coeficiente a");

                if (a == 0){

                        std::cout << "O valor de a não pode ser 0" << std::endl;

                        continue;
                }
                
                break;
        }
        
        double b = lerNumero("Escolha o valor do coeficiente b");

        double c = lerNumero("Escolha o valor do coeficiente c");
        
        double resultado = delta(a,b,c);
        std::cout << "o valor de delta é: " << resultado << std::endl;

        return 0;
}

double lerNumero (std::string mensagem) {

        double numero; 

        while (true){
                
                std::cout << mensagem << std:: endl; 

                if (!(std::cin >> numero))
                {
                        
                        std::cout << "Entrada Inválida, digite outro número." << std::endl; 

                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        continue;

                }

                return numero;
                
        }
        

}

double delta(double a, double b, double c) {

        return (b * b)-(4*a*c);

}