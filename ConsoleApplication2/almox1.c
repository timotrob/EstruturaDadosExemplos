#include <stdio.h>
#include "almox1.h"
//file:tema2/alomx1.c
void run_almox1() {
	//Dados
	char nomes[3][10] = {"Fita","Caneta","Teclado"};
	char codigo[3][10] = { "M0001","M0002","M0003"};
	int quantidade[3] = { 10,100,12 };
	int estante[3] = { 1,2,1};
	int prateleira[3] = { 2,2,5};
	//Impressão
	for (int i = 0; i < 3; i++) {

		printf("%s%s\n", "Nome:", &nomes[i]);
		printf("%s%s\n", "Código:", &codigo[i]);
		printf("%s%d\n", "Quantidade:", quantidade[i]);
		printf("%s%d\n", "Estante:", estante[i]);
		printf("%s%d\n", "Prateleira:", prateleira[i]);
		printf("------\n");
	}
}