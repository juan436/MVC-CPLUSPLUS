#include <iostream>
#include <string>
using namespace std;

class VNumero{
	public:
		VNumero();
		int LeerNumero();
		void ImprimirResultado(int numero, string mensaje);
};

VNumero::VNumero(){
}
VNumero::LeerNumero(){
	int n;
	cout<<"Ingrese un numero entero: "; cin>>n; cout<<endl;
	return n;
}
void VNumero::ImprimirResultado(int numero, string mensaje){
	system("cls");
	cout<<"El "<<numero<<" "<<mensaje<<endl;
	system("pause");
}
