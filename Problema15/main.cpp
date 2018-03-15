/*
Empezando con el número 1 y moviéndose
hacia la derecha y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13
En el caso de esta espiral de 5x5, la suma de los números que conforman las 2 diagonales es 101.
Escriba un programa que reciba un número impar n
y calcule la suma de los números en esas diagonales
de una espiral de nxn.
*/

#include <iostream>
using namespace std;
int main(){
	int N, Num=1, Sum=1;
	cout<<"Ingrese un número impar: ";
	cin>>N;
	while(N%2==0){
		cout<<"Ingrese un número impar: ";
		cin>>N;
	}
	for(int i=2; i<N; i+=2){
		for(int Conteo4=0;Conteo4<4; Conteo4++){
			Num+=i;
			Sum+=Num;
		}
	}
	cout<<"La suma de los números de las diagonales es: "<<Sum<<endl;
}
