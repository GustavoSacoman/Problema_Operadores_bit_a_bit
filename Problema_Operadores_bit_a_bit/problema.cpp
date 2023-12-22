

#include <iostream>
#include <bitset>
#include "genetico.h"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define WHITE "\033[37m"
using namespace std;

int main() {

	int a[10], mascara = 1;
	
	
	cout << "Digite 6 numeros iniciais (Numeros entre 0 e 65535): ";
	for (int i = 0; i < 6; i++) {
		
		cin >> a[i];
		if (a[i] > 65535 || a[i] < 0) {
			cout << "Valor invalido! Digite um valor entre 0 e 65535!" << endl;
			i--;
		}
	}

	//Avaliação dos 6 numeros iniciais

	cout << "\n\nResultado da Avaliacao" << endl;
	cout << "-----------------------" << endl;

	if (avaliacao(a, 0)) {
		cout << " - " << GREEN << "OK " << WHITE <<  endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}
	if (avaliacao(a, 1)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}
	if (avaliacao(a, 2)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}
	if (avaliacao(a, 3)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}
	if (avaliacao(a, 4)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}
	if (avaliacao(a, 5)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}

	cout << "-----------------------" << endl;
	//Cruzamento de dois valores que são enviados pelo o usuario

	a[6] = cruzamento(a, &mascara);

	//Avaliação do cruzamento
	if (avaliacao(a, 6)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}

	//Aritimetico pega dois valores e verifica se tem bits iguais para criar um novo valor

	a[7] = aritmetico(a, &mascara);

	//Avaliação do aritmetico

	if (avaliacao(a, 7)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}

	//Vai pegar um valor e ligar um bit pré-definido se ele estiver desligado = 0 ou desligar um bit se ele estiver ligado = 1
	a[8] = mutacao_simples(a, &mascara);

	//Avaliação da mutação simples
	if (avaliacao(a, 8)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}
	
	//Vai pegar um valor e ligar dois bits que estão pré-definidos se eles estiverem desligado = 0 ou desligar os dois bits se eles estiverem ligado = 1

	a[9] = mutacao_dupla(a, &mascara);

	//Avaliação da mutação dupla
	if (avaliacao(a, 9)) {
		cout << " - " << GREEN << "OK " << WHITE << endl;
	}
	else
	{
		cout << " - " << RED << "X" << WHITE << endl;
	}


}
