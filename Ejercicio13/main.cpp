#include <iostream>
using namespace std;
/*Programa que pide un número N e imprime todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de 4 son:
1
2
4
*/
int main() {
    int N;
    cout << "Ingrese un número entero: " << endl;
    cin >> N;
    cout << "Los divisores de " << N << " son: " << endl;

    for(int i=1; i<=N/2; i++){ //Optimiza un poco el programa N/2 siendo el último divisor (Además de N obviamente)
        if(N%i==0)cout<< i <<endl;}
    cout<<N<<endl;
    return 0;
}
