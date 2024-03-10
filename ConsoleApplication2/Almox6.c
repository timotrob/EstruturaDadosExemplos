#include "Almox6.h"
#include <stdio.h>
//file:Almox6.c
void run_almox6()
{
	//Empregados
	Empregado emp1 = { "CPF1","Pessoa 1"};
	Empregado emp2 = { "CPF2","Pessoa 2" };
	Empregado emp3 = { "CPF3","Pessoa 3" };
	Empregado chefe = {"CPF4","Pessoa 4"};
	Empregado empregados[10];
	Departamento almox = {"Almox"};
	almox.chefeDep = chefe;
	almox.empregados[0] = emp1;
	almox.empregados[1] = emp2;
	almox.empregados[2] = emp3;
	almox.qtEmpregados = 3;
	print_departamento(almox);

}

void print_departamento(Departamento dep)
{
	printf("Dep:%s\n", &dep.nomeDep);
	printf("Chefe:%s CPF:%s\n", &dep.chefeDep.nome, &dep.chefeDep.cpf);
	for (int i = 0; i < dep.qtEmpregados; i++) {
		printf("Empregado:%s CPF:%s\n", &dep.empregados[i].nome, &dep.empregados[i].cpf);
	}
}

