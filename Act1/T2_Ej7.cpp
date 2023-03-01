//EJERCICIO 7
//INGRESA NUMEROS ENTREROS ENTRE 8 AL 23 USANDO FOR
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char* argv[])
{
    cout << "INGRESAR NUMEROS ENTEROS USANDO FOR  \n";
    cout << "------------------------------------ \n";

    int num = 0;
    for (int i = 8; i <= 23; i++)
    {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;
        if (i != num)
        {
            cout << "\n Numero INCORRECTO,INTENTA DE NUEVO ";
            i--;
            cout << "\n \n";
        }
    }
    cout << "\n-----FINALIZADO--------------\n";
    return 0;
}