#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"

int menuVuelos()
{
    int opcion;

    printf("     *** ABM Vuelos ***\n\n");
    printf("1. Alta pasajero\n");
    printf("2. Modificar pasajero\n");
    printf("3. Baja pasajero\n");
    printf("4. Informar\n");
    printf("0. Salir\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;

}
