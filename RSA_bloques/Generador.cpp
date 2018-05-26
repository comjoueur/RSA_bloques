#include "Generador.h"
ZZ Generador_primo(const long long t){
	ZZ a;
	do{
		a=RandomBits_ZZ(t);
	}
	while(!Primalidad(a));
	return a;
}
ZZ Generador_public(const ZZ n){
	ZZ a;
	do{
		a=RandomBnd(n-2)+2;
	}
	while(mcd(a,n)!=1);
	return a;
}
