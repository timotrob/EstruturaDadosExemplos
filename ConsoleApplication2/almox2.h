#pragma once
//file:alomox2.h
struct Material
{
	char nome[10];
	char codigo[10];
	int quantidade;
	int estante;
	int prateleira;
};
void run_almox2();
void print_material(struct Material  material);