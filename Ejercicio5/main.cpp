#include <iostream>

using namespace std;

int main()
{
    float A, B, division1;
    float division2;
    int modulo1;
    cout << "Ingrese primer numero: " << endl;
    cin >> A;
    cout << "Ingrese segundo numero: " << endl;
    cin >> B;
    division1 = A/B;
    modulo1 = A/B;
    division2 = (modulo1/B)*10;
    if(division2>=5){
        division1++;
    }
    cout << "La division1 es: " << division1 << endl;
    //cout << "La division2 es: " << division2 << endl;
    return 0;
}
