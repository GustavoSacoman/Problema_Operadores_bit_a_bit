#include "genetico.h"
#include "binario.h"
using namespace std;


void cruzamento(unsigned short *aa, unsigned short* mascara)
{

	
	unsigned short nova = aa[0] & 65280 | aa[1] & 255;
	int valor_cruzamento = 0, peso_cruzamento = 0;


	if (nova & (*mascara << 15)) {
		peso_cruzamento += 12;
		valor_cruzamento += 4;
	}
	if (nova & (*mascara << 14)) {
		peso_cruzamento += 3;
		valor_cruzamento += 4;
	}
	if (nova & (*mascara << 13)) {
		peso_cruzamento += 5;
		valor_cruzamento += 8;
	}
	if (nova & (*mascara << 12)) {
		peso_cruzamento += 4;
		valor_cruzamento += 10;
	}
	if (nova & (*mascara << 11)) {
		peso_cruzamento += 9;
		valor_cruzamento += 15;
	}
	if (nova & (*mascara << 10)) {
		peso_cruzamento += 1;
		valor_cruzamento += 3;
	}
	if (nova & (*mascara << 9)) {
		peso_cruzamento += 2;
		valor_cruzamento += 1;
	}
	if (nova & (*mascara << 8)) {
		peso_cruzamento += 3;
		valor_cruzamento += 1;
	}
	if (nova & (*mascara << 7)) {
		peso_cruzamento += 4;
		valor_cruzamento += 2;
	}
	if (nova & (*mascara << 6)) {
		peso_cruzamento += 1;
		valor_cruzamento += 10;
	}
	if (nova & (*mascara << 5)) {
		peso_cruzamento += 2;
		valor_cruzamento += 20;
	}
	if (nova & (*mascara << 4)) {
		peso_cruzamento += 4;
		valor_cruzamento += 15;
	}
	if (nova & (*mascara << 3)) {
		peso_cruzamento += 5;
		valor_cruzamento += 10;
	}
	if (nova & (*mascara << 2)) {
		peso_cruzamento += 2;
		valor_cruzamento += 3;
	}
	if (nova & (*mascara << 1)) {
		peso_cruzamento += 1;
		valor_cruzamento += 3;
	}
	if (nova & (*mascara << 0)) {
		peso_cruzamento += 1;
		valor_cruzamento += 3;
	}
	
}

void aritmetico(unsigned short* aa, unsigned short* mascara) {
	int nova_aritmetica = aa[2] & aa[3];

	cout << "\n\n\nTeste nova aritmetico: " << nova_aritmetica;
	int valor_cruzamento = 0, peso_cruzamento = 0;

	if (nova_aritmetica & (*mascara << 15)) {
		peso_cruzamento += 12;
		valor_cruzamento += 4;
	}
	if (nova_aritmetica & (*mascara << 14)) {
		peso_cruzamento += 3;
		valor_cruzamento += 4;
	}
	if (nova_aritmetica & (*mascara << 13)) {
		peso_cruzamento += 5;
		valor_cruzamento += 8;
	}
	if (nova_aritmetica & (*mascara << 12)) {
		peso_cruzamento += 4;
		valor_cruzamento += 10;
	}
	if (nova_aritmetica & (*mascara << 11)) {
		peso_cruzamento += 9;
		valor_cruzamento += 15;
	}
	if (nova_aritmetica & (*mascara << 10)) {
		peso_cruzamento += 1;
		valor_cruzamento += 3;
	}
	if (nova_aritmetica & (*mascara << 9)) {
		peso_cruzamento += 2;
		valor_cruzamento += 1;
	}
	if (nova_aritmetica & (*mascara << 8)) {
		peso_cruzamento += 3;
		valor_cruzamento += 1;
	}
	if (nova_aritmetica & (*mascara << 7)) {
		peso_cruzamento += 4;
		valor_cruzamento += 2;
	}
	if (nova_aritmetica & (*mascara << 6)) {
		peso_cruzamento += 1;
		valor_cruzamento += 10;
	}
	if (nova_aritmetica & (*mascara << 5)) {
		peso_cruzamento += 2;
		valor_cruzamento += 20;
	}
	if (nova_aritmetica & (*mascara << 4)) {
		peso_cruzamento += 4;
		valor_cruzamento += 15;
	}
	if (nova_aritmetica & (*mascara << 3)) {
		peso_cruzamento += 5;
		valor_cruzamento += 10;
	}
	if (nova_aritmetica & (*mascara << 2)) {
		peso_cruzamento += 2;
		valor_cruzamento += 3;
	}
	if (nova_aritmetica & (*mascara << 1)) {
		peso_cruzamento += 1;
		valor_cruzamento += 3;
	}
	if (nova_aritmetica & (*mascara << 0)) {
		peso_cruzamento += 1;
		valor_cruzamento += 3;
	}

}

int mutacao_simples(unsigned short* aa, unsigned short* mascara) {

	int nova_simples;
	unsigned short envia_valor = aa[4];
	if (aa[4] & *mascara << 9) {
		nova_simples = desliga_bit(&envia_valor, 9);
	}
	else {
		nova_simples = ligar_bit(&envia_valor,9);
	}
	

	cout << "\n\nMascara: " << *mascara;
	cout << "\n\n\nTeste mutacao simples: " << nova_simples;
	return nova_simples;
}

int mutacao_dupla(unsigned short* aa, unsigned short* mascara) {

	int nova_dupla;
	unsigned short envia_valor = aa[5];
	if (aa[5] & *mascara << 4) {
		envia_valor = desliga_bit(&envia_valor, 3);
	}
	else {
		envia_valor = ligar_bit(&envia_valor, 3);
	}
	if (aa[5] & *mascara << 13) {
		nova_dupla = desliga_bit(&envia_valor, 12);
	}
	else {
		nova_dupla = ligar_bit(&envia_valor, 12);
	}

	cout << "\n\nMascara: " << *mascara;
	cout << "\n\n\nTeste mutacao dupla: " << nova_dupla;

	return nova_dupla;
}

