#include <iostream>
#include <bitset>
#include "genetico.h"
using namespace std;

int main() {

	unsigned short a[10], mascara = 1;
	

	cout << "Digite 6 numeros iniciais: ";
	for (int i = 0; i < 6; i++) {
		
		cin >> a[i];
	}

	bitset<16> bs1(a[0]);
	cout  << "numero: " << a[0] << " - " << bs1 << endl;
	bitset<16> bs2(a[1]);
	cout << "numero: " << a[1] << " - " << bs2 << endl;
	bitset<16> bs3(a[2]);
	cout << "numero: " << a[2] << " - " << bs3 << endl;
	bitset<16> bs4(a[3]);
	cout << "numero: " << a[3] << " - " << bs4 << endl;
	bitset<16> bs5(a[4]);
	cout << "numero: " << a[4] << " - " << bs5 << endl;
	bitset<16> bs6(a[5]);
	cout << "numero: " << a[5] << " - " << bs6 << endl;
	
	cout << "\n\nResultado da Avaliacao" << endl;
	cout << "----------------------" << endl;

	//Avaliação dos 6 numeros iniciais

	if (avaliacao(a, 0)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}
	if (avaliacao(a, 1)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}
	if (avaliacao(a, 2)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}
	if (avaliacao(a, 3)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}
	if (avaliacao(a, 4)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}
	if (avaliacao(a, 5)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}

	cout << "-----------------------------" << endl;
	//Cruzamento de dois valores que são enviados pelo o usuario

	a[6] = cruzamento(a, &mascara);

	//Avaliação do cruzamento
	if (avaliacao(a, 6)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}

	//Aritimetico pega dois valores e verifica se tem bits iguais para criar um novo valor

	a[7] = aritmetico(a, &mascara);

	//Avaliação do aritmetico

	if (avaliacao(a, 7)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}

	//Vai pegar um valor e ligar um bit pré-definido se ele estiver desligado = 0 ou desligar um bit se ele estiver ligado = 1
	a[8] = mutacao_simples(a, &mascara);

	//Avaliação da mutação simples
	if (avaliacao(a, 8)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}
	
	//Vai pegar um valor e ligar dois bits que estão pré-definidos se eles estiverem desligado = 0 ou desligar os dois bits se eles estiverem ligado = 1

	a[9] = mutacao_dupla(a, &mascara);

	//Avaliação da mutação dupla
	if (avaliacao(a, 9)) {
		cout << " - " << "OK" << endl;
	}
	else
	{
		cout << " - " << "X" << endl;
	}


}
