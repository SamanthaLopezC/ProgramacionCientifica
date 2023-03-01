//EJERCICIO 2
//INGRESA 5 NUMEROS ENTEROS,OBTEN PROMEDIO
#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    cout << "Promedio de 5 numeros \n";
    double datos = 0, sumatoria = 0;
    int i = 1;
    //SOLICITAR NUMEROS
    for (i; i <= 5; i++)
    {
        cout << "\nIngrese el numero " << i << ": ";
        cin >> datos;
        sumatoria += datos;
    }
    // VACIAR VARIABLE -- DATOS
    datos = 0;
    //OBTENER PROMEDIOS
    datos = sumatoria / (i - 1);

    //IMPRIMIR RESULTADOS
    cout << "\n-------------------------------------\n";
    cout << "Promedio de los 5 numeros ingresados es: ";
    cout << datos;
    cout << "\n-------------------------------------\n";
    return 0;
}