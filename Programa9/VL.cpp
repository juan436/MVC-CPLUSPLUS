#include <iostream>
#include <string>
using namespace std;

class VL{
	public:
		VL();
		int LeerTipo();
		int LeerDuracion();
		void ImprimirTotal(float total);
};

VL::VL(){
}
int VL::LeerDuracion(){
	int d;
	cout<<"Ingrese la duracion de la llamada en minutos: "; cin>>d;
	return d;
}
int VL::LeerTipo(){
	int t;
	cout<<"Ingrese el tipo de llamada a realizar: "<<endl<<"1-LOCAL"<<endl<<"2-A CELULAR"<<endl;
	cin>>t;
	return t;
}
void VL::ImprimirTotal(float total){
	cout<<"Usted debe cancelar "<<total<< " Bs."<<endl;
	system("pause");
}
