/*
En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero N: " << endl;
    cin>>N;
    int PrimerNumero=0;
    int SegundoNumero=1;
    int Suma=0, Siguiente;
    for(int i;i<=N;i++){
        Siguiente=PrimerNumero+SegundoNumero;
        PrimerNumero=SegundoNumero;
        SegundoNumero=Suma;
        if(Siguiente%2==0){
            Suma+=Siguiente;
        }
    }
    cout << "El resultado de la suma es: " << Suma << endl;
    return 0;
}

