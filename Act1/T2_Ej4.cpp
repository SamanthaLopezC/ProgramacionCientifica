//EJERCICIO 1
//IMPRIME AREA Y PERIMETRO
#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    //SOLICITANDO DATOS
    cout << "IMPRESION DE AREA Y PERIMETRO DE UN RECTANGULO";
    cout << "\nIngresa base del rectangulo: ";
    int base = 0;
    cin >> base;
    cout << "Ingresa altura del rectangulo: ";
    int altura = 0;
    cin >> altura;

    //OPERACIONES
    int perimetro = 0;
    perimetro = base * 2 + altura * 2;
    int area = 0;
    area = base * altura;

    //IMPRIMIR RESULTADOS
    cout << "\n----RESULTADOS------";
    cout << "\nPERIMETRO = " << perimetro << " cm";
    cout << "\nAREA = " << area << " cm^2";
    cout << "\n--------------------\n";
    return 0;
}