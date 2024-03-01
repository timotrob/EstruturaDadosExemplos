#include "Almox4.h"

void run_almox4() {

	struct  Deposito
	{
		int Id;
		char nome[20];


	} dep1, dep2;

	//Primeiro Depósito
	dep1.Id = 1;
	strcpy_s(dep1.nome, 20, "Deposito 1");
	//Segundo depósito
	dep2.Id = 2;
	strcpy_s(dep1.nome, 20, "Deposito 1");
	
}