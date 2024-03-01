#include <stdio.h>
/*
	Diferenciar variáveis Static/Auto
*/

void incrementar() {

	static int contStatic = 0;
	int contAuto = 0;
	contStatic++;
	contAuto++;
	printf("contStatic=%d,contAuto=%d\n", contStatic, contAuto);
}


