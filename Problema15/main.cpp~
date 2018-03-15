#include <iostream>
#include <string.h>
using namespace std;
/*Programa que pide un número N e imprime
en pantalla la cantidad de dígitos de N.
Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.
*/
int main() {
    char N[100]; //Asumiento que el usuario no tiene tanto espíritu para teclear 100 caracteres.
    int longitud=-1;
    cout << "Ingrese un numero entero: " << endl;
    cin >> N;
    //Forma 1: usando función strlen() de la librería <string>
    longitud=strlen(N);

    //Forma 2: un ciclo que recorra la cadena contando caracteres hasta que se encuentre el salto de línea.
    /*
    int i=-1; //Porque comienza a contar antes de preguntar por la condición de while
    do{
        longitud++;
        i++;

    }
    while(N[i]>=49 && N[i]<= 57);
    */
    //Nota: intenté la forma 2 de varias  maneras pero no me dio.
    cout << N << " tiene " << longitud << " digitos." << endl;
    return 0;
}
