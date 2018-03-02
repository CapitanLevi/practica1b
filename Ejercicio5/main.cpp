#include <iostream>
/*Programa que pide dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2

Basado en la división polinomial(Pag de wikipedia)
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
    rFloat = r;
    BFloat = B;
    Frac = rFloat/BFloat;
    Frac*=10;
    if(Frac>=5){
        q++;
    }
    cout << A << "/" << B << "=" << q << endl;
    return 0;
}
