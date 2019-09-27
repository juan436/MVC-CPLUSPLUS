#include "ML.cpp"
#include "VL.cpp"
using namespace std;

class C{
	private:
		ML m;
		VL v;
	public:
		C();
		void ProcesarLlamada();
};
C::C(){
}
void C::ProcesarLlamada(){
	int tipo, duracion; float total;
	tipo = v.LeerTipo();
	duracion = v.LeerDuracion();
	m.setTipo(tipo);
	m.setDuracion(duracion);
	tipo = m.getTipo();
	duracion = m.getDuracion();
	total = m.CalcularTotal();
	v.ImprimirTotal(total);
}
