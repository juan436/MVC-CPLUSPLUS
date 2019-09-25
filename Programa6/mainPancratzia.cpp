#include "Controlador.cpp"
#include <iostream>
using namespace std;

int main(){
	Controlador pancratzia;
	
	cout<<"\tBienvenido al programa de Pancratzia"<<endl;
	cout<<"En este programa calcularemos tu aumento dependiendo de tu puesto de trabajo"<<endl;
	pancratzia.ProcesarEmpleado();
	
	return 0;
}
