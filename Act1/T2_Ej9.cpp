//EJERCICIO 9
//INGRESA 10 NUMEROS ENTEROS E IMPRIME EL MENOR DE ESTOS 
#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    cout << "NUMERO MENOR DE 10 INGRESADOS  \n";
    cout << "------------------------------------ \n";
    cout << "1.- Ingrese el numero: ";
    int menor = 0;
    cin >> menor;
    int num = 0;
    for (int i = 1; i <= 9; i++)
    {
        cout << i + 1 << ".- Ingrese el numero: ";
        cin >> num;
        if (menor > num)
        {
            menor = num;
        }
    }
    cout << "------------------------------------ \n";
    cout << "Menor numero de los diez ingresados es: " << menor;
    cout << "\n------------------------------------ ";
    return 0;
}