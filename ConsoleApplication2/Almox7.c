#include "Almox7.h"

void run_almox7()
{
	//Transportadora
	Transportadora empresa = { 1,"BR TRANS" };
	strcpy_s(empresa.endereco.rua, 80, "Rua 1");
	strcpy_s(empresa.endereco.cidade, 80, "Cidade 1");
	strcpy_s(empresa.endereco.uf, 10, "PE");
	//Motoristas
	Motorista m1 = {1, "CPF1","Pessoa 1" };
	Motorista m2 = {2, "CPF2","Pessoa 2" };
	//Frota
	Caminhao caminhao1 = { 1,"Modelo1","Placa1" };
	caminhao1.motorista = m1;
	Caminhao caminhao2 = { 2,"Modelo2","Placa2" };
	caminhao2.motorista = m2;
	empresa.frota[0] = caminhao1;
	empresa.frota[1] = caminhao2;
}
