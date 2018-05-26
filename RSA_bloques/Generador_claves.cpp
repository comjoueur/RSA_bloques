#include "Generador.h"
int main(){
	ZZ p1=Generador_primo(512);
	ZZ p2=Generador_primo(512);
	ZZ f=(p1-1)*(p2-1);
	ZZ e=Generador_public(f);
	ZZ d=Inversa_mod(e,f);
	cout<<"Nueva Clave Publica e: "<<e<<endl;
	cout<<"Nueva Clave Privada d: "<<d<<endl;
	cout<<"n: "<<p1*p2<<endl;
}
