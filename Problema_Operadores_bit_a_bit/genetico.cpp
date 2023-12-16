#include "genetico.h"
#include "binario.h"
using namespace std;


void cruzamento(unsigned short *aa, unsigned short* mascara)
{
	unsigned short nova = aa[0] & 65280 | aa[1] & 255;
	int valor_cruzamento = 0, peso_cruzamento = 0;
	
}

void aritmetico(unsigned short* aa, unsigned short* mascara) {

	int nova_aritmetica = aa[2] & aa[3];

	cout << "\n\n\nTeste nova aritmetico: " << nova_aritmetica;
	int valor_cruzamento = 0, peso_cruzamento = 0;

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
int avaliacao(unsigned short* valor_avaliacao,int i) {

	int peso = 0, valor =0, mascara =1;


	if (*valor_avaliacao & (mascara << 15)) {
		peso += 12;
		valor += 4;
	}
	if (*valor_avaliacao & (mascara << 14)) {
		peso += 3;
		valor += 4;
	}
	if (*valor_avaliacao & (mascara << 13)) {
		peso += 5;
		valor += 8;
	}
	if (*valor_avaliacao & (mascara << 12)) {
		peso += 4;
		valor += 10;
	}
	if (*valor_avaliacao & (mascara << 11)) {
		peso += 9;
		valor += 15;
	}
	if (*valor_avaliacao & (mascara << 10)) {
		peso += 1;
		valor += 3;
	}
	if (*valor_avaliacao & (mascara << 9)) {
		peso += 2;
		valor += 1;
	}
	if (*valor_avaliacao & (mascara << 8)) {
		peso += 3;
		valor += 1;
	}
	if (*valor_avaliacao & (mascara << 7)) {
		peso += 4;
		valor += 2;
	}
	if (*valor_avaliacao & (mascara << 6)) {
		peso += 1;
		valor += 10;
	}
	if (*valor_avaliacao & (mascara << 5)) {
		peso += 2;
		valor += 20;
	}
	if (*valor_avaliacao & (mascara << 4)) {
		peso += 4;
		valor += 15;
	}
	if (*valor_avaliacao & (mascara << 3)) {
		peso += 5;
		valor += 10;
	}
	if (*valor_avaliacao & (mascara << 2)) {
		peso += 2;
		valor += 3;
	}
	if (*valor_avaliacao & (mascara << 1)) {
		peso += 1;
		valor += 3;
	}
	if (*valor_avaliacao & (mascara << 0)) {
		peso += 1;
		valor += 3;
	}

	


}
