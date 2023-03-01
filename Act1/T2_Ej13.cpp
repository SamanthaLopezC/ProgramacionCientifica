//EJERCICIO 10
//ADIVINA EL NUMERO
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, const char* argv[])
{
    int sn = 0;
    do
    {
        system("cls");
        srand(time(NULL));
        cout << "ADIVINA EL NUMERO\n";
        //cout << "------------------------------------ \n";
        //GENERAR NUMERO ALEATORIO
        int random = 0;
        random = rand() % 100 + 1;
        /*PRUEBA
        cout << random;
        ELIMINAR AL FINAL*/
        int usuario = 0;
        int contador = 0;
        do
        {
            cout << "\n------------------------------------ ";
            cout << "\nINTENTO NUMERO " << contador + 1;
            cout << "\nEscribe un numero entero dentro del rango del 1 al 100: ";
            cin >> usuario;
            if (random != usuario)
            {
                if (random > usuario)
                    cout << "\nEl numero a adivinar es MAYOR al ingresado";
                else
                    cout << "\nEl numero a adivinar es MENOR al ingresado";
            }
            //INCREMENTA CONTADOR
            contador++;
        } while (random != usuario);
        cout << "\n-------------RESULTADOS------------- ";
        cout << "\n CORRECTO,el Numero a adivinar era " << random;
        cout << "\n INTENTOS REALIZADOS: " << contador;
        cout << "\n------------------------------------ ";
        bool denuevo = true;
        cout << "\n ¿ Deseas jugar de nuevo ? ";
        cout << "\n Ingresa 1, si desea jugar de nuevo";
        cout << "\n Ingresa 0 si desea Finalizar\n";
        cin >> sn;
        if (sn != 1)
            denuevo = 0;
    } while (sn == 1);
    cout << "\n------------------------------------ ";
    cout << "\n JUEGO FINALIZADO";
    cout << "\n------------------------------------ ";
    return 0;
}