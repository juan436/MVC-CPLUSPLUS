#include<string>
#include <iostream>
using namespace std;

class VPersona{
	public:
		VPersona();
		int LeerEdad();
		void ImprimirResultado(string DeterminarRango);
};

VPersona::VPersona(){
}

int VPersona::LeerEdad(){
	int e;
	cout<<"Ingrese edad: ";
	cin>>e;
	return e;
}

void VPersona::ImprimirResultado(string DeterminarRango){
	system("cls");
	cout<<DeterminarRango<<endl;
}
