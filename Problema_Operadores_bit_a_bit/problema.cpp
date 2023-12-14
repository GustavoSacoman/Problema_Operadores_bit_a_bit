#include <iostream>
#include "genetico.h"
using namespace std;

int main() {

	unsigned short a[9], mascara = 1;
	int valor[10]{ 0,0,0,0,0,0,0,0,0,0 }, peso[10]{0,0,0,0,0,0,0,0,0,0};

	cout << "Digite 6 numeros iniciais";

	cin >> a[5];

	/*for (int i = 0; i < 6; i++) {
		
	
	}
	*//*
	if (a[0] & (mascara << 15)) {
		peso[0] += 12;
		valor[0] += 4;
	}
	if (a[0] & (mascara << 14)) {
		peso[0] += 3;
		valor[0] += 4;
	}
	if (a[0] & (mascara << 13)) {
		peso[0] += 5;
		valor[0] += 8;
	}
	if (a[0] & (mascara << 12)) {
		peso[0] += 4;
		valor[0] += 10;
	}
	if (a[0] & (mascara << 11)) {
		peso[0] += 9;
		valor[0] += 15;
	}
	if (a[0] & (mascara << 10)) {
		peso[0] += 1;
		valor[0] += 3;
	}
	if (a[0] & (mascara << 9)) {
		peso[0] += 2;
		valor[0] += 1;
	}
	if (a[0] & (mascara << 8)) {
		peso[0] += 3;
		valor[0] += 1;
	}
	if (a[0] & (mascara << 7)) {
		peso[0] += 4;
		valor[0] += 2;
	}
	if (a[0] & (mascara << 6)) {
		peso[0] += 1;
		valor[0] += 10;
	}
	if (a[0] & (mascara << 5)) {
		peso[0] += 2;
		valor[0] += 20;
	}
	if (a[0] & (mascara << 4)) {
		peso[0] += 4;
		valor[0] += 15;
	}
	if (a[0] & (mascara << 3)) {
		peso[0] += 5;
		valor[0] += 10;
	}
	if (a[0] & (mascara << 2)) {
		peso[0] += 2;
		valor[0] += 3;
	}
	if (a[0] & (mascara << 1)) {
		peso[0] += 1;
		valor[0] += 3;
	}
	if (a[0] & (mascara << 0)) {
		peso[0] += 1;
		valor[0] += 3;
	}

	*/



	a[7] = mutacao_simples(a, &mascara);
	a[8] = mutacao_dupla(a, &mascara);

	cout << "Resultado da Avaliacao" << endl;
	cout << "----------------------" << endl;
	cout << a[0] << " - " << valor[0] << " - " << peso[0] << " - ";


}
