#include <iostream>
using namespace std;

const int n = 2;

int main(){
    
    double matriz[n][n];
    int i,j;
    
    for ( i = 0 ; i < 2 ; i++)
    {
        for ( j = 0; j < 2 ; j++)
        {
            cout << "adicione o elemento da linha" << "[" << i+1 << "]"  << " e coluna" << "[" << j+1 << "]";
            cin >> matriz[i][j];

        }   
    }



     for ( i = 0 ; i < 2 ; i++)
    {
        for ( j = 0; j < 2 ; j++)
        {
           cout <<  matriz[i][j];

        }  

        cout << endl;

    }
    
    
    
    
    
    


    return 0;

}