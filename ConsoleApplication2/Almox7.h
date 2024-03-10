#pragma once


typedef struct  {
	int id;
	char cpf[20];
	char nome[80];
} Motorista;

typedef struct {
	int id;
	char placa[20];
	char modelo[50];
	Motorista motorista;
} Caminhao;


typedef struct {
	char rua[80];
	char cidade[80];
	char uf[20];
} Endereco;


typedef struct  {
	int id;
	char nome[80];
	Caminhao frota[10];
	Endereco endereco;

} Transportadora;






void run_almox7();