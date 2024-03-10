#pragma once

//file:Almox6.h
typedef struct  {
	char cpf[11];
	char nome[80];
} Empregado;

typedef struct {
	char nomeDep[80];
	Empregado chefeDep;
	Empregado empregados[20];
	int qtEmpregados;
} Departamento;

void run_almox6();
void print_departamento(Departamento dep);