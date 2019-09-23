#include <string>
using namespace std;

class MFecha{
	private:
		int num_dia;
	public:
		MFecha();
		void setNumDia(int nd);
		int getNumDia();
		string DeterminarDia();
};

MFecha::MFecha(){
}

void MFecha::setNumDia(int nd){
	num_dia = nd;
}
int MFecha::getNumDia(){
	return num_dia;
}
string MFecha::DeterminarDia(){
	string mensaje;
	switch (num_dia){
		case 1: mensaje = "LUNES"; break;
		case 2: mensaje = "MARTES"; break;
		case 3: mensaje = "MIERCOLES"; break;
		case 4: mensaje = "JUEVES"; break;
		case 5: mensaje = "VIERNES"; break;
		case 6: mensaje = "SABADO"; break;
		case 7: mensaje = "DOMINGO"; break;
		default: mensaje = "ERROR. DIA NO VALIDO"; break;}
		
		return mensaje;
}
