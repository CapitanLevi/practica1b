#include <iostream>
/*Programa que pide dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2

Basado en la división polinomial. Fuente: https://es.wikipedia.org/wiki/Divisi%C3%B3n_polinomial
donde r(x) es el residuo (calculado con el módulo) y q(x) es el cociente (calculado con la división entera sin redondeo)
*/
using namespace std;

int main()
{
    int A, B, q, r;
    float Frac, rFloat, BFloat;
    cout << "Ingrese primer numero: " << endl;
    cin >> A;
    cout << "Ingrese segundo numero: " << endl;
    cin >> B;
    q = A/B;
    r = A%B;
    rFloat = r; // Copia de punto flotante del residuo
    BFloat = B; // Copia de punto flotante del divisor
    Frac = rFloat/BFloat; // Cálculo de la parte fraccionaria o decimal del número.
    Frac*=10; // Se multiplica por 10 para tener en cuenta el primer fraccionario.
    if(Frac>=5){
        q++;
    }
    cout << A << "/" << B << "=" << q << endl;
    return 0;
}
