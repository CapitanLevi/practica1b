#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Escriba un numero: ";
    cin >> numero;
    cout << "El numero que escribio es: " << numero << endl;
    if(numero%2==0){
        cout << numero << " es par" << endl;
    }
    else{
        cout << numero << " es impar" << endl;
    }
    return 0;
}
