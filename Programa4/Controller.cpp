#include "MPersona.cpp"
#include "VPersona.cpp"

using namespace std;

class Controller{
	private:
		MPersona mp;
		VPersona vp;
	public:
		Controller();
		void ProcesarPersona();
};

Controller::Controller(){
}

void Controller::ProcesarPersona(){
	int edad;
	string mayorOno;
	edad = vp.LeerEdad();
	mp.setEdad(edad);
	edad = mp.getEdad();
	mayorOno = mp.DeterminarRango();
	vp.ImprimirResultado(mayorOno);
	
}
