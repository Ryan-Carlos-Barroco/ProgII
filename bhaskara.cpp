#include <iostream>
#include <cmath> 
#include <Windows.h>
#include <string> 


//calcula o valor de delta
double delta (double a, double b, double c);

double lerNumero (double numero);

int main ()
{
        SetConsoleOutputCP(65001); //permite acentos no console 

        double a,b,c; 

        //lê os coeficientes
        std::cout << "escolha o valor de a" << std::endl;
        std:: cin >> a;

        std::cout << "escolha o valor de b" << std::endl;
        std::cin >> b;        

        std::cout << "escolha o valor de c" << std::endl;
        std::cin >> c; 
        
        double resultado = delta(a,b,c);
        std::cout << "o valor de delta é: " << resultado << std::endl;

        return 0;
}

double lerNumero (std::string mensagem) {

        double numero; 

        while (true){
                
                std::cout << mensagem << std:: endl; 

                if (!(std::cout >> numero))
                {
                        
                }

                
        }
        

}

double delta(double a, double b, double c) {



        return (b * b)-(4*a*c);

}