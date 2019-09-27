#include <string>
using namespace std;

class MCuenta{
	private:
		float saldo, monto;
		int tipo;
	public:
		MCuenta();
		void setSaldoV(float s); void setTipo (int t); void setMonto (float m);
		float getSaldoV(); int getTipo(); float getMonto();
		string DeterminarTipo(); string DeterminarMensaje();
		float DeterminarSaldoN();
};

MCuenta::MCuenta(){
}
void MCuenta::setSaldoV(float s){
	saldo = s;
}
void MCuenta::setTipo(int t){
	tipo = t;
}
void MCuenta::setMonto(float m){
	monto = m;
}
float MCuenta::getSaldoV(){
	return saldo;
}
int MCuenta::getTipo(){
	return tipo;
}
float MCuenta::getMonto(){
	return monto;
}
string MCuenta::DeterminarTipo(){
	string ti;
	if (tipo == 1){
		ti = "DEPOSITO";
	}
	if (tipo == 2){
		ti = "RETIRO";
	}
	if (tipo!=1 && tipo !=2){
		ti = "NonValid";
	}
	return ti;
}
float MCuenta::DeterminarSaldoN(){
	float sn;
	if (tipo == 1){
		sn = saldo + monto;
	}
	if (tipo == 2){
		if (saldo >=monto){
			sn = saldo - monto;
		}
		else {
			sn = saldo;
		}
	}
	if (tipo!=1 && tipo !=2){
		sn = saldo;
	}
	return sn;
}
string MCuenta::DeterminarMensaje(){
	string m;
	if (tipo == 1){
		m = "DEPOSITO EXITOSO!";
	}
	if (tipo == 2){
		if (saldo >= monto){
			m = "RETIRO EXITOSO";
		}
		else {
			m = "EL MONTO ES MAYOR QUE SU SALDO ANTERIOR. OPERACION FALLIDA";
		}
	}
	if (tipo !=1 && tipo!=2){
		m = "TIPO DE OPERACION INEXISTENTE";
	}
	return m;
}
