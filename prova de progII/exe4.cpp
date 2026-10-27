#include <iostream>


bool ehBissexto(int ano) {

    if(ano%4 == 0)
    {
        return 1;
    }   
    else if (ano%4 == 0 && ano%100 == 0 && ano%400 != 0)
    {
        return 0;
    }
    else
    {
        return 0;
    }  
  
}

int main()
{
    int ano;

    std::cout << "escolha um ano: " << std::endl;
    std::cin >> ano;
    
    bool resultado = ehBissexto(ano);
    
    if (resultado == true)
    {
        std::cout << "eh bissexto" << std::endl;
    }
    else
    {
        std::cout << "nao eh bissexto" << std::endl;
    }
    
    

}



