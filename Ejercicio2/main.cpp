#include <iostream>

using namespace std;

/* Ejercicio 2 de practica 1.
 * El usuario ingresa un entero y el programa devuelve si es par o impar.
 * Ejemplo:
 * Escriba un numero: 5
 * 5 es impar.
*/

int main()
{
    int numero;
    cout << "Escriba un numero: ";
    cin >> numero;
    cout << "El numero que escribio es: " << numero << endl;
    if(numero%2==0){
        cout << numero << " es par" << endl;
    }
    else{
        cout << numero << " es impar" << endl;
    }
    return 0;
}
