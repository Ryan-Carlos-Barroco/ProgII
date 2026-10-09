#include <iostream>
#include <cmath> 
#include <Windows.h>


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

double lerNumero (double numero) {

        while (true){

                std::cin >> numero;

                if (a == 0)
                {
                        std::cout << "O valor de não pode ser 0"
                        continue;
                }
                

        }
        

}

double delta(double a, double b, double c) {



        return (b * b)-(4*a*c);

}