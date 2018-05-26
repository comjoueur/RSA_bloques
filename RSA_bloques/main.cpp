#include "Cifrado.h"
int main(){
	string g;
	rsa RSA("predefinido");
	cout<<"¿Que operacion desea hacer?"<<endl;
	cout<<"1.Cifrar\n2.Descifrar\n3.Mostrar Clave Publica"<<endl;
	cin>>g;
	if(g=="1"){
		ofstream fout("Cifrado.txt");
		ZZ a;
		cout<<"Introduzca la clave publica"<<endl;
		cout<<"e: ";
		cin>>a;
		RSA.e=a;
		cout<<"n: ";
		cin>>a;
		RSA.n=a;
		cout<<"Introduzca el mensaje"<<endl;
		char oracion[1000];
		cin.getline(oracion,1000);
		cin.getline(oracion,1000);
		string p(oracion);
		fout<<RSA.cifrar(p)<<endl;
	}
	else if(g=="2"){
		ifstream fin("Cifrado.txt");
		string p;
		fin>>p;
		cout<<RSA.descifrar(p)<<endl;
	}
	else if(g=="3"){
		cout<<"e: "<<RSA.e<<endl;
		cout<<"n: "<<RSA.n<<endl;
	}
	else{
		cout<<"No selecciono ninguna de las alternativas"<<endl;
	}
	return 0;
}
