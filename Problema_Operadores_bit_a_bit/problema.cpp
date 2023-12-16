#include <iostream>
#include "genetico.h"
using namespace std;

int main() {

	unsigned short a[9], mascara = 1;
	

	cout << "Digite 6 numeros iniciais: ";
	for (int i = 0; i < 9; i++) {
		

		cin >> a[i];
	}
	
	cout << "Resultado da Avaliacao" << endl;
	cout << "----------------------" << endl;

	mutacao_simples(a, &mascara);

	avaliacao(a,1);
	a[8] = mutacao_dupla(a, &mascara);

	
	


}
