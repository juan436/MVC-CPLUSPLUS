#include<string>
#include <iostream>
using namespace std;

class VEmpleado {
	public:
	VEmpleado ();
	string LeerNombre();
	string LeerTipo();
	float LeerSueldoActual();
	void ImprimirSueldo(string nombre, float aumento);	
};

VEmpleado::VEmpleado(){
}

string VEmpleado::LeerNombre(){
	string n;
	cout<<"Ingrese su nombre: ";
	cin>>n;
	return n;
}
string VEmpleado::LeerTipo(){
	string t;
	cout<<endl<<"Ingrese si usted es [O]brero o [A]dministrativo"<<endl;
	cin>>t;
	return t;
}
float VEmpleado::LeerSueldoActual(){
	float s;
	cout<<"Ingrese su sueldo actual: ";
	cin>>s;
	return s; 
}
void VEmpleado::ImprimirSueldo(string nombre, float aumento){
	cout<<"Su nombre es "<<nombre<<" y luego del aumento usted ganara "<<aumento<< ".Bs"<<endl;
	system("pause");
}
