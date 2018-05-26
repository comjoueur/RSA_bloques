#include<bits/stdc++.h>
#include<NTL/ZZ.h>
using namespace std;
using namespace NTL;
ZZ mod(const ZZ,const ZZ);
//calcula el modulo de dos numeros grandes
ZZ mcd(const ZZ,const ZZ);
//calcula el maximo comun divisor de dos numeros grandes
pair<ZZ,ZZ> Euclides_ext(const ZZ,const ZZ);
//regresa los coeficientes de dos numeros en el euclides extendido
ZZ Inversa_mod(const ZZ,const ZZ);
//regresa la inversa modular de un numero con respecto de otro
ZZ Potencia_mod(const ZZ,const ZZ,const ZZ);
//calcula la potencia modular de un numero elevado a un exponente modulo otro numero
bool Primalidad(const ZZ);
//asevera si un numero es primo o no
