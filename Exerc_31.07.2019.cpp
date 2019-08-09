#include <iostream>
#include <conio.h>
#define T 3
using namespace std;
int vetA[T], vetB[T], vetC[T], vetD[T], vetE[T], med;

int a[T], b[T], c[T];

void leituraA(){
	for(int i=0; i<T; i++){
		cout << "Elemento " << i+1 << " vet A: ";
		cin >> a[i];
	}
}

void leituraB(){
	cout << "\n";
	for(int i=0; i<T; i++){
		cout << "Elemento " << i+1 << " vet B: ";
		cin >> b[i];
	}
}

float maior(){
	float ma=b[0];
	for(int i=1; i<T; i++){
		if(b[i]>ma){
			ma=b[i];
		}
	}
	return ma;
}

float menor(){
	float me=b[0];
	for(int i=1; i<T; i++){
		if(b[i]<me){
			me=b[i];
		}
	}
	return me;
}

int media(){
	int s=0, med=0;
	for(int i=0; i<T; i++){
		s=s+a[i];
	}
	med=s/T;
	return med;
}

void diferenca(){
	int dif, d[T], e[T], x=1, y;
	for(int i=0; i<T; i++){
		if((a[i]>med) && (a[i]-med>0)){
			dif=a[i]-med;
			if(dif<x){
				x=dif;
			}
		d[0]=med+x;
		e[0]=med-x;
		}
		else{
			dif=a[i]-med*(-1);
			if(dif<x){
				x=dif;
			}
		d[0]=med+x;
		e[0]=med-x;		
		}		
	}
	/*for(int i=0; i<T; i++){
		if(a[i]>med+d[i]){
			cout << "\n" << d[i];
		}
	}
	for(int i=0; i<T; i++){
		if(a[i]<med-e[i]){
			cout << "\n" << e[i];
		}
	}*/
	cout << d[0] << " e " << e[0];
}
/*int diferenca(){
	int dif=0;
	for(int i=0; i<T; i++){
		if(a[i]-med>0){
			dif=a[i]-med;
		}
		else{
			dif=a[i]-med*(-1);
		}
		if(a[i]==dif){
			cout << a[i];
		}
	}
}*/

void troca(){
	for(int i=0; i<T; i++){
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
		cout << "\nElementos " << i+1 << " vetor A: " << a[i];
	}
	cout << "\n";
	for(int i=0; i<T; i++){
		cout << "\nElemento " << i+1 << " vetor B: " << b[i];
	}
}

main(){
	leituraA();
	leituraB();
	cout << "\nO maior elemento vet B: " << maior();
	cout << "\nO menor elemento vet B: " << menor();
	cout << "\n";
	cout << "\nA media do vetor A: " << media();
	cout << "\n";
	cout << "Os elementos mais proximos da media sao os elemento: ";
	diferenca();
	cout << "\n";
	troca();
		
	getch();
}
