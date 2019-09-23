#include<iostream>
#include <string>
using namespace std;

class VFecha{
	public:
		VFecha();
		int LeerNumDia();
		void ImprimirDia(string dia);
};

VFecha::VFecha(){
}
int VFecha::LeerNumDia(){
	int nd;
	
	cout<<endl<<"Ingrese algun numero para que el programa indique que dia es:"<<endl<<endl;
	cout<<"[NOTA: En este programa, el primer dia de la semana es el lunes]"<<endl<<endl;
	cin>>nd;
	return nd;
}

void VFecha::ImprimirDia(string dia){
	system("cls");
	cout<<dia<<endl;
}
