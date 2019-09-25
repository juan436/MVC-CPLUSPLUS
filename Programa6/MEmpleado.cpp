#include <string>
using namespace std;

class MEmpleado {
	private:
		string nombre; string cargo; float s_actual;
	public:
	MEmpleado();
	void setNombre(string name); void setTipo(string t); void setSueldoActual (float s);
	string getNombre(); string getTipo(); float getSueldoActual();
	float DeterminarAumento(); 
};

MEmpleado::MEmpleado(){
}
void MEmpleado::setNombre(string name){
	nombre = name;
}
void MEmpleado::setTipo(string t){
	cargo = t;
}
void MEmpleado::setSueldoActual(float s){
	s_actual = s;
}
string MEmpleado::getNombre(){
	return nombre;
}
string MEmpleado::getTipo(){
	return cargo;
}
float MEmpleado::getSueldoActual(){
	return s_actual;
}
float MEmpleado::DeterminarAumento(){
	float aumento;
	if (cargo == "O" || cargo == "o") aumento = s_actual*1.1;
	if (cargo == "A" || cargo == "a") aumento = s_actual*1.05;
	return aumento;
}
