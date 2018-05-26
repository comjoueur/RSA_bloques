#include "Generador.h"
#include <fstream>
#include "Bloques.h"
class rsa{
	string diccionario="ABCDEFGHIJKLMNOPQRSTUVWXYZ.,-_()abcdefghijklmnopqrstuvwxyz 0123456789";
	ZZ d;
	long long t;
	public:
	ZZ e,n;
	rsa();
	rsa(string);
	rsa(ZZ,ZZ);
	string cifrar (string);
	string descifrar(string);
};
