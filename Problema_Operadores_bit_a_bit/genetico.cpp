#include "genetico.h"
#include "binario.h"
using namespace std;


int cruzamento(int *aa, int* mascara)
{
	int nova = bits_altos(aa,0);
	int nova2 = bits_baixos(aa,1);

	return binario_or(&nova,&nova2);
}

int aritmetico(int* aa, int* mascara) {


	int valor_teste = aa[2];
	int valor_teste2 = aa[3];

	return binario_and(&valor_teste, &valor_teste2);
	
}

int mutacao_simples(int* aa, int* mascara) {

	int nova_simples;
	int envia_valor = aa[4];
	if (aa[4] & *mascara << 9) {
		nova_simples = desliga_bit(&envia_valor, 9);
	}
	else {
		nova_simples = ligar_bit(&envia_valor,9);
	}
	
	return nova_simples;
}

int mutacao_dupla(int* aa, int* mascara) {

	int nova_dupla;
	int envia_valor = aa[5];
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


	return nova_dupla;
}
bool avaliacao(int* valor_avaliacao,int i) {

	int peso = 0, valor =0, mascara =1;
	

	if (valor_avaliacao[i] & (mascara << 15)) {
		peso += 12;
		valor += 4;
	}
	if (valor_avaliacao[i] & (mascara << 14)) {
		peso += 3;
		valor += 4;
	}
	if (valor_avaliacao[i] & (mascara << 13)) {
		peso += 5;
		valor += 8;
	}
	if (valor_avaliacao[i] & (mascara << 12)) {
		peso += 4;
		valor += 10;
	}
	if (valor_avaliacao[i] & (mascara << 11)) {
		peso += 9;
		valor += 15;
	}
	if (valor_avaliacao[i] & (mascara << 10)) {
		peso += 1;
		valor += 3;
	}
	if (valor_avaliacao[i] & (mascara << 9)) {
		peso += 2;
		valor += 1;
	}
	if (valor_avaliacao[i] & (mascara << 8)) {
		peso += 3;
		valor += 1;
	}
	if (valor_avaliacao[i] & (mascara << 7)) {
		peso += 4;
		valor += 2;
	}
	if (valor_avaliacao[i] & (mascara << 6)) {
		peso += 1;
		valor += 10;
	}
	if (valor_avaliacao[i] & (mascara << 5)) {
		peso += 2;
		valor += 20;
	}
	if (valor_avaliacao[i] & (mascara << 4)) {
		peso += 4;
		valor += 15;
	}
	if (valor_avaliacao[i] & (mascara << 3)) {
		peso += 5;
		valor += 10;
	}
	if (valor_avaliacao[i] & (mascara << 2)) {
		peso += 2;
		valor += 3;
	}
	if (valor_avaliacao[i] & (mascara << 1)) {
		peso += 4;
		valor += 4;
	}
	if (valor_avaliacao[i] & (mascara << 0)) {
		peso += 1;
		valor += 12;
	}
	
	if (valor_avaliacao[i] < 1000) {

		std::cout << "  " << valor_avaliacao[i] << " - " << "$" << valor << " - " << peso << "Kg";
	}
	else if (valor_avaliacao[i] < 10000)
	{
		std::cout << " " << valor_avaliacao[i] << " - " << "$" << valor << " - " << peso << "Kg";
	}
	else
	{
		std::cout << valor_avaliacao[i] << " - " << "$" << valor << " - " << peso << "Kg";
	}
	
	
	if (peso > 20) {
		return false;
	}
	else
	{
		return true;
	}

}
