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