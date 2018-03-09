#include <iostream>
using namespace std;
/*Programa que pide constantemente números hasta que se ingrese el número cero e imprime en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3
*/
int main() {
    int N=1, NumMayor=0;
    while(N!=0){
        cout << "Ingrese un número entero: ";
        cin >> N;
        if(N>NumMayor)NumMayor=N; // Sobreescribir el valor cada que el número sea mayor
    }
    cout << "El numero mayor fue: " << NumMayor << endl;
    return 0;
}
