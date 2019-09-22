#include "MPersona.cpp"
#include "VPersona.cpp"

class Controlador{
	private:
		MPersona mp;
		VPersona vp;
	public:
		Controlador ();
		void ProcesarSexo();
};

Controlador::Controlador(){
}

void Controlador::ProcesarSexo(){
	char letra;
	string sexo;
	
	letra=vp.LeerLetra();
	mp.setLetra(letra);
	letra = mp.getLetra();
	sexo = mp.Sexo();
	vp.ImprimirSexo(sexo);
}
