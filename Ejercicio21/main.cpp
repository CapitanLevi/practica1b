#include <iostream>
using namespace std;
/*Programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
*/
int main() {
    char C;
    cout << "Ingrese un caracter: " << endl;
    cin >> C;
    if(C>=65 && C<=90)C+=32;
    else if(C>=97 && C<=122)C-=32;
    cout << "Letra convertida: " << C << endl;
    return 0;
}
