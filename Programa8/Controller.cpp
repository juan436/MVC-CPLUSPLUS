#include "MNumero.cpp"
#include "VNumero.cpp"
using namespace std;

class Controller {
	private:
		MNumero mn;
		VNumero vn;
	public:
		Controller();
		void ProcesarNumero();
};

Controller::Controller(){
}
void Controller::ProcesarNumero(){
	int numero; string mensaje;
	numero=vn.LeerNumero();
	mn.setNumero(numero);
	numero=mn.getNumero();
	mensaje = mn.DeterminarMensaje();
	vn.ImprimirResultado(numero, mensaje);
}
