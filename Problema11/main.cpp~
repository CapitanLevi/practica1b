/*Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
*/

#include <iostream>

using namespace std;

int Factores(int N){
    int factor=2;
    while(factor<=N/2){
        if(N%factor==0){
            cout<<factor<<"*";
            N/=factor;
            continue;
        }
        if(factor==2)factor++;
        else factor+=2;
    }
    cout<<N<<endl;
}

int main(){
    for(int i=2)
    // Descomponer el número N.
    int N, factor=2;
    cout << "Ingrese un numero entero: ";
    cin >> N;
    while(factor<=N/2){
        if(N%factor==0){
            cout<<factor<<"*";
            N/=factor;
            continue;
        }
        if(factor==2)factor++;
        else factor+=2;
    }
    cout<<N<<endl;

    /*
    int num;
    cout << "Ingrese numero de elementos: ";
    cin >> num;

    int vec[num];

    for(int i=0;i<num;i++){
        cout << "Ingrese valor para la posicion " << i << ": ";
        cin >> vec[i];
    }

    cout << '\n';

    for(int i=0;i<num;i++){
        cout << "Posicion " << i << ": " << vec[i] << endl;
    }*/


}

