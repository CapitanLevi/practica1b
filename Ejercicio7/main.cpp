#include <iostream>
using namespace std;
/*Programa que pide un numero N y devuelve la suma
de todos los números desde 1 hasta N
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
*/
int main() {
	int N, Suma=0;
	cout << "Ingrese un número entero: " << endl;
	cin >> N;
	if(N<1){cout << "Números menores a 1 no permitidos " << endl;}
	else{
		for(int i=1; i<=N; i++)Suma+=i; //Ciclo básico. Se suma el contador a un acumulador.
		cout << "La sumatoria desde 0 hasta " << N << " es: " << Suma << endl;}
	return 0;
}
