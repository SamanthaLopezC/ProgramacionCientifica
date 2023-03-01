//EJERCICIO 8
//INGRESA NUMEROS ENTREROS ENTRE 8 AL 23 USANDO WHILE
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char* argv[])
{
    cout << "INGRESAR NUMEROS ENTEROS USANDO WHILE  \n";
    cout << "------------------------------------ \n";
    int n = 8, num = 0;
    do
    {
        cout << "Ingrese el numero " << n << ": ";
        cin >> num;
        if (n != num)
        {
            cout << "\n Numero INCORRECTO,INTENTA DE NUEVO ";
            n--;
            cout << "\n \n";
        }
        n++;
    } while (n <= 23);

    cout << "\n-----FINALIZADO--------------\n";
    return 0;
}