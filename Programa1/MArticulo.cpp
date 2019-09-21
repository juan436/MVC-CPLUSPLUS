#include <string>
using namespace std;

class MArticulo{
	private:
		string codigo;
		float costo;
	public:
		MArticulo();
		void setCodigo(string cod);
		void setCosto(float cb);
		string getCodigo();
		float getCosto();
		float PrecioM();
		float PrecioD();
};

MArticulo::MArticulo(){
}

void MArticulo::setCodigo(string cod){
codigo=cod;}
void MArticulo::setCosto(float cb){
costo = cb;}
string MArticulo::getCodigo(){
	return codigo;
}
float MArticulo::getCosto(){
	return costo;
}
float MArticulo::PrecioM(){
	return costo*1.15;
}
float MArticulo::PrecioD(){
	return costo*1.30;
}

