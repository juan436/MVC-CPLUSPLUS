#include "MArticulo.cpp"
#include "VArticulo.cpp"
using namespace std;

class Controlador{
	private:
		MArticulo ma;
		VArticulo va;
	public:
		Controlador();
		void ProcesarArticulo();
};

Controlador::Controlador(){
}

void Controlador::ProcesarArticulo(){
	string cod;
	float cos, pm, pd;
	cod = va.LeerCodigo();
	cos = va.LeerCosto();
	ma.setCodigo(cod);
	ma.setCosto(cos);
	cod = ma.getCodigo();
	cos = ma.getCosto();
	pm = ma.PrecioM();
	pd = ma.PrecioD();
	va.ImprimirArticulo(cod, pm, pd);
}
