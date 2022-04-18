#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int invertirFlag(int flag)
{
	flag = 1 - flag;	//si flag vale 1, al hacer la resta pasa a valer 0. Si vale 0, pasa a valer 1.
	return flag;
}

int pedirKilometros()
{
	int kilometros;
	int cant;
	do
	{
		printf("\n-Ingrese la cantidad de kilometros: ");
		fflush(stdin);
		cant = scanf("%d", &kilometros);
		if (!cant)		//Si cant vale 0, no se ingreso un numero.
		{
			printf(">>>Error. Lo que ingresaste no es un numero. Intenta nuevamente...<<<\n");
		}
		else		// Si se ingreso un numero, verifico que no sea negativo.
		{
			if (kilometros < 1)
			{
				cant= invertirFlag(cant);
				printf(">>>Error. Los kilometros no pueden ser negativos. Intenta nuevamente...<<<\n");
			}
		}

	}while (!cant);

	printf("\n *************************************");
	printf("\n *Kilometros cargados correctamente!.*");
	return kilometros;
}


float pedirPrecioVuelo()
{
	float precioVuelo;
	int cant;
	do
	{
		printf("\n-Ingrese el precio del vuelo: ");
		fflush(stdin);
		cant = scanf("%f", &precioVuelo);
		if (!cant)		//Si cant vale 0, no se ingreso un numero.
		{
			printf(">>>Error. Lo que ingresaste no es un numero. Intenta nuevamente...<<<\n");
		}
		else		// Si se ingreso un numero, verifico que no sea negativo.
		{
			if (precioVuelo < 1)
			{
				cant= invertirFlag(cant);
				printf(">>>Error. El precio no puede ser negativo. Intenta nuevamente...<<<\n");
			}
		}

	}while (!cant);

	printf("\n ********************************");
	printf("\n *Precio cargado correctamente!.*");
	return precioVuelo;
}

float calcularCostoDebito(float precio, int descuento)
{
	float costoDebito;
	costoDebito = precio - precio * descuento /100;
	return costoDebito;
}

float calcularCostoCredito(float precio, int interes)
{
	float costoCredito;
	costoCredito = precio + precio * interes /100;
	return costoCredito;
}

float calcularCostoBitcoin(float precio, float valorBitcoin)
{
	float costoBitcoin;
	costoBitcoin = precio / valorBitcoin;
	return costoBitcoin;
}

float calcularPrecioPorKm(int kilometros, float precio)
{
	float precioPorKm;
	precioPorKm = precio/kilometros;
	return precioPorKm;
}

float calcularDiferenciaPrecios(float precioLatam, float precioAerolineas)
{
	float diferenciaPrecios;
	diferenciaPrecios = precioLatam - precioAerolineas;
	return diferenciaPrecios;
}
