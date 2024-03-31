#include "analise_mat.h"
#include <stdbool.h>

void maior_num(int numeros[],int n) {
	int M = numeros[0];
	for (int i = 0; i < n; i++)
	{
		if (numeros[i] >= M) {
			M = numeros[i];
		}
	}
}

bool HasDuplicidade(int numeros[], int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i!=j && numeros[i] == numeros[j]) {
				return true;
			}
		}
		
	}
	return false;
}

int fatorial_loop(int n) {
	int fatorial = 1;
	for (int i = 2; i <= n; i++) {
		fatorial = fatorial * i;
	}
	return fatorial;

}

int fatorial(int n)
{
	if (n == 0) {
		return 1;
	}
	else
	{
		return n * fatorial(n - 1);
	}
}

bool isLeapYear(int year) {
	if (year % 400 == 0) {
		return true;
	}
	else if (year % 100 == 0) {
		return false;
	}
	else if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}