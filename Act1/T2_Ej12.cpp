//EJERCICIO 12
//NUMERO PRIMO O NO
#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    cout << "NUMERO INGRESADO ES PRIMO O NO\n";
    cout << "------------------------------------ ";
    cout << "\nIngrese un numero: ";
    int num = 0;
    cin >> num;

    //VARIABLE CON 2 OPCIONES - 1 o 0
    bool primo = true;
    int residuo = 0;

    //COMPARACION VER SI ES DIVISIBLE ENTRE OTRO NUMERO DENTRO DEL RANGO DE 1 A NUM
    for (int i = 2; i < num; i++)
    {
        residuo = num % i;
        if (residuo == 0)
        {
            //NUMERO NO ES PRIMO, CAMBIAR VARIABLE BOOLEANA A 0 
            primo = false;
        }
    }

    //RESULTADO
    cout << "-------------RESULTADO------------- \n";
    if (primo == true)
        cout << "El numero " << num << " es primo";
    else
        cout << "El numero " << num << " NO es primo";
    cout << "\n------------------------------------ \n";
    return 0;
}