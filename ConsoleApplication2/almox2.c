#include <stdio.h>
#include "almox2.h"
// file:tema2/alomx2.c
void run_almox2() {
	//Dados
	struct Material estoque[3];
	struct Material fita = { "Fita","M0001",10,1,2 };
	struct Material caneta = { "Caneta","M0002",100,2,2 };
	struct Material teclado = { "Teclado","M0003",12,1,5 };
	estoque[0] = fita;
	estoque[1] = caneta;
	estoque[2] = teclado;
	//Impressão
	for (int i = 0; i < 3; i++) {
		struct Material m_atual = estoque[i];
		print_material(m_atual);
	}
}

// file:tema2/alomx2.c
void print_material(struct Material  material) {
	printf("%s%s\n", "Nome:", &material.nome);
	printf("%s%s\n", "Código:", &material.codigo);
	printf("%s%d\n", "Quantidade:", material.quantidade);
	printf("%s%d\n", "Estante:", material.estante);
	printf("%s%d\n", "Prateleira:", material.prateleira);
	printf("------\n");
}