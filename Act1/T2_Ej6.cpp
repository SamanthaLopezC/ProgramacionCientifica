//EJERCICIO 6
//DISTANCIA ENTRE DOS COORDENADAS
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char* argv[])
{
    cout << "DISTANCIA ENTRE DOS COORDENADAS \n";
    //SOLICITAR DATOS
    cout << "Ingrese la coordenada en X del punto A: ";
    double x1 = 0;
    cin >> x1;
    cout << "\nIngrese la coordenada en Y del punto A: ";
    double y1 = 0;
    cin >> y1;
    cout << "\nIngrese la coordenada en X del punto B: ";
    double x2 = 0;
    cin >> x2;
    cout << "\nIngrese la coordenada en Y del punto B: ";
    double y2 = 0;
    cin >> y2;

    //OPERACIONES
    double distancia = 0;
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "\n-------------------------------------\n";
    cout << "Distancia entre el punto A y B es de: ";
    cout << distancia;
    cout << "\n-------------------------------------\n";

    return 0;
}