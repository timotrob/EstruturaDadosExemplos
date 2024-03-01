#include "almox5.h";

struct  PontoGps
{
	float latitude;
	float longitude;
};

typedef struct PontoGps Ponto;

typedef struct {
	float latitude;
	float longitude;
} PontoGeral;


void run_almox5() {

	struct PontoGps ponto1 = { -35.4,-45.2 };
	Ponto ponto2 = { -35.7,-25.2 };
	PontoGeral ponto3 = { -35.7,-25.2 };
}