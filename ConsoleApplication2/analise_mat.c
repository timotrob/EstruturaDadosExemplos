#include "analise_mat.h"
void maior_num(int numeros[],int n) {
	int M = numeros[0];
	for (int i = 0; i < n; i++)
	{
		if (numeros[i] >= M) {
			M = numeros[i];
		}
	}
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
