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
			printf("1. Alta pasajero\n");
			break;
		case 2:
			printf("2. Modificar pasajero\n");
			break;
		case 3:
			printf("3. Baja pasajero\n");
			break;
		case 4:
			printf("4. Informar\n");
			break;
		case 0:
			printf("0. Salir\n");
			salir = 's';
			break;
		default:
			printf(">>>Opcion invalida<<<\n");
		}
	} while (salir != 's');

	printf("Adios!.");
return 0;
}
