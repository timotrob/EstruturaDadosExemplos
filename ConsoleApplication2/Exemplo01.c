#include <stdio.h>

void incrementar() {

	static int contStatic = 0;
	int contAuto = 0;
	contStatic++;
	contAuto++;
	printf("contStatic=%d,contAuto=%d\n", contStatic, contAuto);
}


