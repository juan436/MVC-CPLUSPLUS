#include "MFecha.cpp"
#include "VFecha.cpp"
using namespace std;

class Controlador{
	private:
		MFecha mf;
		VFecha vf;
	public:
		Controlador();
		void ProcesarDia();
};

Controlador::Controlador(){
}
void Controlador::ProcesarDia(){
	int num_dia;
	string dia;
	
	num_dia = vf.LeerNumDia();
	mf.setNumDia(num_dia);
	num_dia=mf.getNumDia();
	dia = mf.DeterminarDia();
	vf.ImprimirDia(dia);
}
