/*Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un
número B y el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B
es mayor, menor o igual que A. El programa imprimira un nuevo número B, con base en
simbolo ingresado por el usuario, y repetira el proceso hasta acertar el número
seleccionado por usuario.

Función rand():
"Una forma típica de generar números pseudo-aleatorios en un determinado rango usando rand()
 es usar el módulo con el valor del rango y sumar el valor inicial del intervalo:

1. v1 = rand() % 100;         // v1 in the range 0 to 99
2. v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
3. v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014   "
Fuente de documentación: http://www.cplusplus.com/reference/cstdlib/rand/
*/

#include <iostream>
#include <stdlib.h>     /* rand */
using namespace std;
int main() {
    int B;
    char simbolo;
    int LimInferior=0, LimSuperior=100;
    int span;
    do{
        span = LimSuperior - LimInferior;
        B=rand() % span + LimInferior;
        cout<<"Numero arrojado: " << B << endl;
        cin>>simbolo;
        if(simbolo=='>'){LimSuperior=B;}
        else if(simbolo=='<'){LimInferior=B;}
    }
    while(simbolo!='=');
    cout<<"Good job." << endl;
    return 0;
}
