#include <string>
using namespace std;

class MPersona{
	private:
		char letra;
	public:
		MPersona();
		void setLetra(char let);
		char getLetra();
		string Sexo();		
};

MPersona::MPersona(){
}
void MPersona::setLetra(char let){
	letra = let;
}
char MPersona::getLetra(){
	return letra;
}

string MPersona::Sexo(){
	string sex;
	if (letra=='M' || letra == 'm') sex = "Usted es un hombre";
	if (letra=='F' || letra == 'f') sex = "Usted es una mujer";
	if (letra!='F' && letra != 'f'&& letra !='M' && letra && 'm') sex = "Usted ha ingresado una letra no valida";
	return sex;
}
