#include <string>
using namespace std;

class MNumero{
	private:
		int numero;
	public:
		MNumero();
		void setNumero(int n); int getNumero();
		string DeterminarMensaje();
};
MNumero::MNumero(){
}
void MNumero::setNumero(int n){
	numero = n;
}
int MNumero::getNumero(){
	return numero;
}
string MNumero::DeterminarMensaje(){
	string m;
	if(numero>0){
		m = "es un numero positivo";
	}
	else if(numero<0){
		m="es un numero negativo";
	}
	else {
		m="no es ninguno de estos, ya que es 0 y el 0 ES UN PORTAL ENTRE ESOS NUMEROS OMG";
	}
	return m;
}
