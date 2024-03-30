#include <math.h>
#include <stdio.h>
#include "geom.h"
const double PI = 3.14159265359;

double vol_piramide(double area_base, double altura)
{
	return area_base*altura/3.0;
}

double vol_cone(double raio, double altura)
{
	return PI*pow(raio, 2.0)*altura/3.0;
}

double vol_esfera(double raio)
{
	return (4.0/3.0)*PI*pow(raio,3);
}

double vol_paralelepipedo(double comprimento, double largura, double altura)
{
	return comprimento*largura*altura;
}

double vol_cubo(double lado)
{
	return vol_paralelepipedo(lado,lado,lado);
}

void print_title(char* title) {
	printf("--------\n");
	printf("%s\n",title);
	printf("--------\n");
}

void run_geom()
{
	
	//Piramide
	print_title("Piramide");
	printf("Cal. Vol. Piramide\n a_base=20 e h=10\n");
	printf("Vol_p=%0.2f\n", vol_piramide(20, 10));
	printf("--------\n");
	//Cone
	print_title("Cone");
	printf("Cal. Vol. Cone\n r=10 e h=10\n");
	printf("Vol_cone=%0.2f\n", vol_cone(10.0, 10.0));
	//Esfera
	print_title("Esfera");
	printf("Cal. Vol. Esfera\n r=10\n");
	printf("Vol_esfera=%0.2f\n", vol_esfera(10.0));
	//Paralelepipedo
	print_title("Paralelepipedo");
	printf("Cal. Para.\n C=10,L=5, h=2\n");
	printf("Vol_para=%0.2f\n", vol_paralelepipedo(10.0,5.0,2.0));
	//Cubo
	print_title("Cubo");
	printf("Cal. Cubo.\n L=5\\n");
	printf("Vol_para=%0.2f\n", vol_cubo(5.0));
}
