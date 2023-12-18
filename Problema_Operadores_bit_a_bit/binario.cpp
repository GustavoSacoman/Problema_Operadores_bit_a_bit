int ligar_bit(unsigned short* valor_teste, int numero_bit) {

	int resultado_ligar, mascara = 1;
	resultado_ligar = *valor_teste | (mascara << numero_bit);

	return resultado_ligar;

}
int desliga_bit(unsigned short* valor_teste, int numero_bit) {

	int mascara = 1, desliga_resultado;

	desliga_resultado = *valor_teste & ~(mascara << numero_bit);

	return desliga_resultado;
}

bool testa_bit(unsigned short* valor_teste, int numero_bit) {
	
	int mascara = 1;
	if (*valor_teste & (mascara << numero_bit)) {
		return true;
	}
	else
	{
		return false;
	}
}

int binario_and(unsigned short* valor_teste_1, unsigned short* valor_teste_2) {

	return *valor_teste_1 & *valor_teste_2;

}
int binario_or(unsigned short* valor_teste_1, unsigned short* valor_teste_2) {
	return *valor_teste_1 | *valor_teste_2;
}
int bits_baixos(unsigned short* valor_teste,int i) {

	return valor_teste[i] & 255;
}
int bits_altos(unsigned short* valor_teste,int i) {
	return valor_teste[i] & 65280;
}