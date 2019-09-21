#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
class VArticulo{
	public:
		VArticulo();
		string LeerCodigo();
		float LeerCosto();
		void ImprimirArticulo(string c, float pm, float pd);
};

VArticulo::VArticulo(){
}
string VArticulo::LeerCodigo(){
	string c;
	cout<<"Ingrese Codigo: ";
	cin>>c;
	return c;
}
float VArticulo::LeerCosto(){
	float c;
	cout<<"Costo: ";
	cin>>c;
	return c;
}
void VArticulo::ImprimirArticulo(string c, float pm, float pd){
	system ("cls");
	cout<<"Codigo: "<<c<<endl;
	cout<<"Precio Al Mayor: "<<setiosflags(ios::fixed)<<setprecision(2)<<pm<<endl;
	cout<<"Precio Al Detal: "<<setiosflags(ios::fixed)<<setprecision(2)<<pd<<endl;
	system("pause");
}
