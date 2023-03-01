//EJERCICIO 11
//FACTORIAL DE N
#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    cout << "INGRESAR NUMERO E IMPRIMIR N! (factorial) \n";
    cout << "------------------------------------ \n";
    cout << "Ingrese el numero: ";
    int n;
    cin >> n;

    cout << "------------------------------------ \n";
    cout << "Secuencia del factorial de " << n << "\n";
    unsigned int factorial = 1;
    //SOLO SE PUEDE OBTENER HASTA EL FACTORIAL DE 33
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        cout << factorial << " ";
    }
    cout << "\n------------------------------------ ";
    cout << "\nEl factorial de " << n << " es: " << factorial;
    cout << "\n------------------------------------ ";
    return 0;
}