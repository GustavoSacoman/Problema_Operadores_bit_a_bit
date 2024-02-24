

#include <iostream>
#include <bitset>
#include "genetico.h"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define WHITE "\033[37m"
using namespace std;

int main() {

	int operador[10], mascara = 1;


	cout << "Digite 6 numeros iniciais (Numeros entre 0 e 65535): ";
	for (int i = 0; i < 6; i++) {

		cin >> operador[i];
		if (operador[i] > 65535 || operador[i] < 0) {
			cout << "Valor invalido! Digite um valor entre 0 e 65535!" << endl;
			i--;
		}
	}

	//Avaliação dos 6 numeros iniciais

	cout << "\n\nResultado da Avaliacao" << endl;
	cout << "-----------------------" << endl;

	//Cruzamento de dois valores que são enviados pelo o usuario
	operador[6] = cruzamento(operador, &mascara);


	//Aritimetico pega dois valores e verifica se tem bits iguais para criar um novo valor

	operador[7] = aritmetico(operador, &mascara);


	//Vai pegar um valor e ligar um bit pré-definido se ele estiver desligado = 0 ou desligar um bit se ele estiver ligado = 1
	operador[8] = mutacao_simples(operador, &mascara);


	//Vai pegar um valor e ligar dois bits que estão pré-definidos se eles estiverem desligado = 0 ou desligar os dois bits se eles estiverem ligado = 1

	operador[9] = mutacao_dupla(operador, &mascara);

	//Avaliação de todos os casos

	for (int i = 0; i < 10; i++) {
		if (avaliacao(operador, i)) {
			cout << " - " << GREEN << "OK " << WHITE << endl;
		}
		
		else
		{
			cout << " - " << RED << "X" << WHITE << endl;
		}
		if (i == 5)
		{
			cout << "-----------------------" << endl;
		}
	}
}