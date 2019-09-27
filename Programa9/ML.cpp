#include <string>
using namespace std;

class ML{
	private:
		int tipo, duracion;
	public:
		ML();
		void setTipo(int t); void setDuracion(int d);
		int getTipo(); int getDuracion();
		float CalcularTotal();
};
ML::ML(){
}
void ML::setTipo(int t){
	tipo = t;
}
void ML::setDuracion(int d){
	duracion = d;
}
int ML::getTipo(){
	return tipo;
}
int ML::getDuracion(){
	return duracion;
}
float ML::CalcularTotal(){
	float t;
	if(tipo == 1){
		t = duracion*80;
	}
	else if (tipo == 2){
		t = duracion*300;
	}
	else {
		t = 0;
	}
	return t;
}
