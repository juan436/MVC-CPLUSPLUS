#include "MCuenta.cpp"
#include "VCuenta.cpp"
#include <string>
using namespace std;

class Controlador{
	private:
		MCuenta mc;
		VCuenta vc;
	public:
		Controlador();
		void ProcesarCuenta();
};

Controlador::Controlador(){
}
void Controlador::ProcesarCuenta(){
	float saldov, saldon, monto; int tipo; string type, mensaje;
	
	saldov = vc.LeerSaldoV();
	tipo = vc.LeerTipo();
	monto = vc.LeerMonto();
	mc.setSaldoV(saldov);
	mc.setTipo(tipo);
	mc.setMonto(monto);
	saldov = mc.getSaldoV();
	tipo = mc.getTipo();
	monto = mc.getMonto();
	type = mc.DeterminarTipo();
	saldon= mc.DeterminarSaldoN();
	mensaje = mc.DeterminarMensaje();
	vc.ImprimirResultados(saldov, type, monto, saldon, mensaje);
}
