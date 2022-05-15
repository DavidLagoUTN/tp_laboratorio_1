#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "ArrayPassenger.h"

int main() {
	setbuf(stdout,NULL);
	char salir = 'n';
	do {
		switch (menuVuelos()) {
		case 1:
			printf("\n1. Alta pasajero\n\n");
			break;
		case 2:
			printf("\n2. Modificar pasajero\n\n");
			break;
		case 3:
			printf("\n3. Baja pasajero\n\n");
			break;
		case 4:
			printf("\n4. Informar\n\n");
			break;
		case 0:
			printf("\n0. Salir\n\n");
			salir = 's';
			break;
		default:
			printf("\n>>>Opcion invalida<<<\n\n");
		}
	} while (salir != 's');

	printf("Adios!.");
return 0;
}
