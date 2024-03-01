#include <stdio.h>
#include "almox3.h";
#include <string.h>
#include <stdlib.h>
//file:almox3.c
void run_almox3() {

	//Dados
	struct Material estoque[3];
	struct Material fita = { "Fita","M0001",10,1,2 };
	struct Material* fitaPtr = &fita;
	
	//ajustando membros
	strcpy_s(fita.nome, 10, "Fita2");
	fita.quantidade = 20;
	//usando ponteiro
	fitaPtr->estante = 2;
	strcpy_s(fitaPtr->codigo, 10, "M0004");
	(*fitaPtr).prateleira = 10;
	//IMprimindo
	print_material(fita);
	
}

