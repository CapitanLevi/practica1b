/*Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir posiblemente año bisiesto.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.
*/

#include <iostream>

using namespace std;

int main()
{
    int Mes, Dia;
    bool MesValido, DiaValido;
    cout << "Ingrese un mes del año (el número): " << endl;
    cin >> Mes;
    cout << "Ingrese un día del mes (el número) si lo desea: " << endl;
    cin >> Dia;
    //Verificacion del mes
    if(Mes>=1 && Mes<=12)MesValido=true;
    else{MesValido=false;}
    //Verificacion del dia
    if(Dia>=1 && Dia<=30)DiaValido=true;
    else if(Dia==31 && (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11))DiaValido=false;
    else{DiaValido=false;}
    if(Dia==29 && Mes==2){
        cout << "29/2 es valida en bisiesto" << endl;
        return 0;
    }
    //Si no ingresa dia
    /*
    if(Dia == '0'){
        if(MesValido==true)cout << Mes << " es un mes valido" << endl;
        else{cout << Mes << " es un mes invalido" << endl;}
    }
    */
    //Verificacion de la fecha
    if(MesValido==false || DiaValido==false)cout << Dia << "/" << Mes << " es una fecha invalida" << endl;
    else{cout << Dia << "/" << Mes << " es una fecha valida" << endl;}
}
