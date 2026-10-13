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

        int tipo; 

        if (resultado > 0)
        {
                tipo = 1;
        }
        else if (resultado == 0)
        {
                tipo = 0;
        }
        else
        {
                tipo = -1;
        }

        switch (tipo)
        {
                case 1:
                {
                        std::cout << "PRIMEIRO CASO -- O VALOR DE X1 E X2 SÃO DIFERENTES" << std::endl;

                        double x1 = (-b + sqrt(resultado)) / (2*a);

                        double x2 = (-b - sqrt(resultado)) / (2*a);

                        std::cout << "O valor de x1 é: " << x1 << std::endl << "O valor de x2 é: " << x2 << std::endl;

                        break;
                }
                case 0:
                {
                        std::cout << "SEGUNDO CASO -- O VALOR DE X1 E X2 SÃO IGUAIS" << std::endl;

                        double x = (-b + sqrt(resultado)) / (2*a);

                        std::cout << "O valor de x1 e x2 é: " << x <<std::endl; 

                        break;
                }
                case -1:
                {
                        std::cout << "TERCEIRO CASO -- NÃO EXISTE RAIZ REAL" << std::endl;

                       break;
                }
        }

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

