#include <string>
#include <iostream>
using namespace std;
class VPersona{
	public:
		VPersona();
		char LeerLetra();
		void ImprimirSexo(string sexo);
};

VPersona::VPersona(){
}

char VPersona::LeerLetra(){
	char l;
	cout<<"Diga si usted es [M]asculino o [F]emenino: "<<endl;
	cin>>l;
	return l;
}

void VPersona::ImprimirSexo(string sexo){
	system("cls");
	cout<<sexo;
	system("pause");
}
