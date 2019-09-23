#include<string>
using namespace std;

class MPersona{
	private:
		int edad;
	public:
		MPersona();
		void setEdad(int e);
		int getEdad();
		string DeterminarRango();
};

MPersona::MPersona(){
}
void MPersona::setEdad(int e){
	edad = e;
}
int MPersona::getEdad(){
	return edad;
}
string MPersona::DeterminarRango(){
	string rang;
	if (edad>17 && edad<120) rang = "Usted es mayor de edad";
	if (edad<18 && edad >=0) rang = "Usted es menor de edad";
	if (edad<0 || edad>=120) rang = "La edad ingresada no es valida";
	return rang;
}
