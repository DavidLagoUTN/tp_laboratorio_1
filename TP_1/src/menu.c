#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void imprimirMensajeBienvenida()
{
	printf("****************************************************\n");
	printf("*Bienvenido/a a la aplicacion de vuelos argentinos!*.\n");
	printf("****************************************************\n");
}

void imprimirMensajeRegresarAlMenu()
{
	printf("\n *************************************");
	printf("\n *  Regresando al menu principal...  *");
	printf("\n *************************************\n");
}

void mostrarMenuOpciones(int kilometros, int flagPrecios, float precioAerolineas, float precioLatam)
{
	printf("\n ***********************************");
			printf("\n * Seleccione una opcion del menu: ");
			printf("\n ***********************************");
			printf("\n * 1-Ingresar Kilometros: (km = %d)",kilometros);
			printf("\n * 2-Ingresar precio de vuelos: ");
			if (flagPrecios)	//Si se ingresaron los precios de Latam y Aerolineas argentinas, se muestra por pantalla en el menu principal.
			{
				printf("(Aerolineas = %.2f, Latam = %.2f)",precioAerolineas,precioLatam);
			}
			printf("\n * 3-Calcular costos:");
			printf("\n *   a) Tarjeta de débito (descuento 10%%)");
			printf("\n *   b) Tarjeta de crédito (interés 25%%)");
			printf("\n *   c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)");
			printf("\n *   d) Mostrar precio por km (precio unitario)");
			printf("\n *   e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)");

			printf("\n * 4-Informar resultados");
			printf("\n * 5-Carga forzada de datos");
			printf("\n * 6-Salir");
			printf("\n ***********************************");
}

int pedirOpcionMenu()
{
	int opcion;
	int cant;
	printf("\n-Opcion nro: ");
	fflush(stdin);
	cant = scanf("%d", &opcion);

	switch (cant)
	{
	case 0:		//Verifico si se ingreso un caracter que no es un numero:
		printf(">>>>No ingresaste un numero.<<<<\n");
		opcion = 0;
		break;
	case 1:		// Verifico si se ingreso un numero que este en el rango correcto.
		if (opcion<1 || opcion>6)
		{
			printf(">>>>Opcion numerica invalida.<<<<\n");
		}
		break;
	}
	return opcion;
}

void informarResultados(float debitoLatam,float creditoLatam,float bitcoinLatam, float unitarioLatam, float debitoAerolineas, float creditoAerolineas, float bitcoinAerolineas, float unitarioAerolineas, float diferenciaPrecios)
{
	printf("Latam:\n");
	printf("a) Precio con tarjeta de débito: $ %.2f\n",debitoLatam);
	printf("b) Precio con tarjeta de crédito: $ %.2f\n",creditoLatam);
	printf("c) Precio pagando con bitcoin : %.2f BTC\n",bitcoinLatam);
	printf("d) Precio unitario: $ %.2f\n",unitarioLatam);
	printf("Aerolíneas:\n");
	printf("a) Precio con tarjeta de débito: $ %.2f\n",debitoAerolineas);
	printf("b) Precio con tarjeta de crédito: $ %.2f\n",creditoAerolineas);
	printf("c) Precio pagando con bitcoin : %.2f BTC\n",bitcoinAerolineas);
	printf("d) Precio unitario: $ %.2f\n",unitarioAerolineas);
	printf("La diferencia de precio es : $ %.2f\n",diferenciaPrecios);
}
