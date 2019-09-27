#include <string>
#include <iostream>
using namespace std;

class VCuenta{
	public:
		VCuenta();
		float LeerSaldoV();
		int LeerTipo();
		float LeerMonto();
		void ImprimirResultados(float saldov, string type, float monto, float saldon, string mensaje);
};

VCuenta::VCuenta(){
}
float VCuenta::LeerSaldoV(){
	float s;
	cout<<"Ingrese su saldo actual: "; cin>>s; cout<<endl;
	return s;
}
int VCuenta::LeerTipo(){
	int t;
	cout<<"Indique si usted desea hacer "<<endl<<"1-DEPOSITO"<<endl<<"2-RETIRO"<<endl;
	cin>>t;
	return t;
}
float VCuenta::LeerMonto(){
	float m;
	cout<<"Ingrese el monto de la operacion: "; cin>>m; cout<<endl;
	return m;
}
void VCuenta::ImprimirResultados(float saldov, string type, float monto, float saldon, string mensaje){
	system ("cls");
	cout<<"Su saldo anterior era de "<<saldov<< " .Bs"<<endl;
	cout<<"Usted realizo un "<<type<<" por un monto de "<<monto<< " .Bs";
	cout<<endl<<"Ahora su saldo es de "<<saldon<< " .Bs"<<endl;
	cout<<mensaje<<endl;
	system("pause");
}
