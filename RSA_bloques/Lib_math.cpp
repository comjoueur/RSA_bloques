#include "Lib_math.h"
ZZ mod(const ZZ a,const ZZ b){
	ZZ r=a-(a/b)*b;
	if(r<0){
		r+=b;
	}
	return r;
}
ZZ mcd(const ZZ a,const ZZ b){
	ZZ x=a,y=b,tmp;
	if(x<y){
		tmp=x;
		x=y;
		y=tmp;
	}
	if(y==0){
		return x;
	}
	else {
		while(y>0){
			tmp=mod(x,y);
			x=y;
			y=tmp;
		}
		return x;
	}
}
pair<ZZ,ZZ> Euclides_ext(const ZZ a,const ZZ b){
	ZZ gcd=mcd(a,b);
	ZZ x=a/gcd,y=b/gcd,s1=ZZ(1),s2=ZZ(0),t1=ZZ(0),t2=ZZ(1);
	ZZ q,tmp;
	pair<ZZ,ZZ>par;
	while(y>0){
		q=x/y;
		tmp=x-q*y;
		x=y;y=tmp;
		tmp=s1-q*s2;
		s1=s2;s2=tmp;
		tmp=t1-q*t2;
		t1=t2;t2=tmp;
	}
	par.first=s1;par.second=t1;
	return par;
}
ZZ Inversa_mod(const ZZ a,const ZZ b){
	ZZ x=a,y=b,r;
	pair<ZZ,ZZ>par=Euclides_ext(x,y);
	r=mod(par.first,b);
	return r;
}
ZZ Potencia_mod(const ZZ a,const ZZ b,const ZZ c){
	ZZ r=a,p=b,m=c;
	ZZ s=ZZ(1);
	r=mod(r,m);
	while(p>0){
		if(mod(p,ZZ(2))==1){
			s=mod(s*r,m);
		}
		p=p/2;
		r=mod(r*r,m);
	}
	return s;
}
bool Primalidad(const ZZ n){
	if(n<2){
		return 0;
	}
	if(n<4){
		return 1;
	}
	if(mod(n,ZZ(6))!=1 && mod(n,ZZ(6))!=5){
		return 0;
	}
	ZZ m=n-1,k=ZZ(0),a,b;
	while(mod(m,ZZ(2))==0){
		m/=2;
		k+=1;
	}
	bool rsp;
	for(int j=0;j<500;j++){
		a=RandomBnd(n-3)+2;
		rsp=0;
		b=Potencia_mod(a,m,n);
		if(b==1 || b==n-1){
			rsp=1;
		}
		if(!rsp){
			for(int i=0;i<k-1 && !rsp;i++){
				b=mod(b*b,n);
				if(b==1){
					return 0;
				}
				if(b==n-1){
					rsp=1;
				}
			}
		}
		if(rsp==0)return 0;
	}
	return 1;
}
