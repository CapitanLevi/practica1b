/*
Hallar MCM entre 1 y N ingresado.
Por pura fuerza bruta.
*/

#include <iostream>
using namespace std;

int main() {
    int N, ActualMCM;
    unsigned long int Producto=1;
	bool NoEsMCM=false;
	cout<<"Ingrese número N: " << endl;
	cin>>N;
	for(int i=1; i<=N; i++)Producto*=i;

	for(int MCM=Producto; MCM>=N; MCM--){
		for(int i=1; i<=N; i++){
			if(MCM%i!=0){
				NoEsMCM=true;
				break;
			}
		}
		if(NoEsMCM==false)ActualMCM=MCM;
		NoEsMCM=false;
		//cout<<"MCM en actual iteración: "<<MCM<<endl;
	}
		
	cout<<"MCM: "<<ActualMCM<<endl;
	cout<<"Producto: "<<Producto<<endl;
    for(int i=1;i <= N; i++){
        cout<<i<<",";
    }
    return 0;
	}
