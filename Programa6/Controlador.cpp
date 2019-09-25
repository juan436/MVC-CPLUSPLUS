#include "MEmpleado.cpp"
#include "VEmpleado.cpp"

using namespace std;

class Controlador{
	private:
		MEmpleado me;
		VEmpleado ve;
	public:
		Controlador();
		void ProcesarEmpleado();
};

Controlador::Controlador(){
}

void Controlador::ProcesarEmpleado(){
	string nombre; string tipo; float sueldoactual, aumento;
	
	nombre = ve.LeerNombre(); //Adicional, se leera el nombre del empleado para personalizar la solicitud
	tipo = ve.LeerTipo();
	sueldoactual = ve.LeerSueldoActual();
	me.setNombre (nombre);
	me.setTipo (tipo);
	me.setSueldoActual (sueldoactual);
	nombre = me.getNombre();
	tipo = me.getTipo();
	sueldoactual = me.getSueldoActual();
	aumento = me.DeterminarAumento();
	ve.ImprimirSueldo(nombre, aumento);
}
