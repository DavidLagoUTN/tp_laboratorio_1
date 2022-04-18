#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "calculos.h"

#define DESCUENTO_DEBITO 10
#define INTERES_CREDITO 25
#define BTC 4665547.89

#define KM_CARGA_FORZADA 7090
#define AEROLINEAS_CARGA_FORZADA 162965
#define LATAM_CARGA_FORZADA 159339

/// @brief Funcion principal del progra
///
/// @return
int main(void) {
	setbuf(stdout, NULL);

	int kilometros = 0;
	float precioAerolineas;
	float precioLatam;

	int flagKilometros = 0;
	int flagPrecios = 0;
	int flagCostos = 0;

	int opcion;

	float debitoAerolineas;
	float creditoAerolineas;
	float bitcoinAerolineas;
	float unitarioAerolineas;
	float debitoLatam;
	float creditoLatam;
	float bitcoinLatam;
	float unitarioLatam;
	float diferenciaPrecios;

	imprimirMensajeBienvenida();
	do
	{
		mostrarMenuOpciones(kilometros,flagPrecios,precioAerolineas,precioLatam);
		opcion = pedirOpcionMenu();
		switch(opcion)
		{
		case 1:
			kilometros = pedirKilometros();

			if (!flagKilometros)
			{
				flagKilometros= invertirFlag(flagKilometros);
			}

			imprimirMensajeRegresarAlMenu();
			break;

		case 2:
			if(flagKilometros)
			{
				printf("\n ***************************\n");
				printf(" ***Aerolineas Argentinas***");
				precioAerolineas = pedirPrecioVuelo();
				printf("\n\n ***************************\n");
				printf(" ***       Latam         ***");
				precioLatam = pedirPrecioVuelo();

				if (!flagPrecios)
				{
					flagPrecios= invertirFlag(flagPrecios);
				}
			}
			else
			{
				printf("\n>>>Primero debes ingresar los Kilometros (Opcion 1 del menu)<<<\n");
			}

			imprimirMensajeRegresarAlMenu();
			break;

		case 3:
			if(flagPrecios)
			{
				debitoAerolineas = calcularCostoDebito(precioAerolineas,DESCUENTO_DEBITO);
				creditoAerolineas = calcularCostoCredito(precioAerolineas,INTERES_CREDITO);
				bitcoinAerolineas = calcularCostoBitcoin(precioAerolineas,BTC);
				unitarioAerolineas = calcularPrecioPorKm( kilometros, precioAerolineas);

				debitoLatam = calcularCostoDebito(precioLatam,DESCUENTO_DEBITO);
				creditoLatam = calcularCostoCredito(precioLatam,INTERES_CREDITO);
				bitcoinLatam = calcularCostoBitcoin(precioLatam,BTC);
				unitarioLatam = calcularPrecioPorKm( kilometros, precioLatam);

				diferenciaPrecios = calcularDiferenciaPrecios( precioLatam, precioAerolineas);
				printf("\n *************************************");
				printf("\n * Costos calculados correctamente!. *");

				if (!flagCostos)
				{
					flagCostos= invertirFlag(flagCostos);
				}
			}
			else
			{
				if(flagKilometros)
				{
					printf("\n>>>Primero debes ingresar los precios (Opcion 2 del menu)<<<\n");
				}
				else
				{
					printf("\n>>>Primero debes ingresar los Kilometros (Opcion 1 del menu)<<<\n");
				}
			}

			imprimirMensajeRegresarAlMenu();
			break;

		case 4:
			if(flagCostos)
			{
				informarResultados(debitoLatam,creditoLatam,bitcoinLatam,unitarioLatam,debitoAerolineas,creditoAerolineas,bitcoinAerolineas,unitarioAerolineas,diferenciaPrecios);

				//Reinicio los parametros iniciales para una nueva ejecucion del programa:
				kilometros = 0;
				if (flagKilometros)
				{
					flagKilometros= invertirFlag(flagKilometros);
				}
				if (flagPrecios)
				{
					flagPrecios= invertirFlag(flagPrecios);
				}
				if (flagCostos)
				{
					flagCostos = invertirFlag(flagCostos);
				}
			}
			else
			{
				if(flagPrecios)
				{
					printf("\n>>>Primero debes calcular los costos (Opcion 3 del menu)<<<\n");
				}
				else
				{
					if(flagKilometros)
					{
						printf("\n>>>Primero debes ingresar los precios (Opcion 2 del menu)<<<\n");
					}
					else
					{
						printf("\n>>>Primero debes ingresar los Kilometros (Opcion 1 del menu)<<<\n");
					}
				}
			}

			imprimirMensajeRegresarAlMenu();
			break;

		case 5:

			debitoAerolineas = calcularCostoDebito(AEROLINEAS_CARGA_FORZADA,DESCUENTO_DEBITO);
			creditoAerolineas = calcularCostoCredito(AEROLINEAS_CARGA_FORZADA,INTERES_CREDITO);
			bitcoinAerolineas = calcularCostoBitcoin(AEROLINEAS_CARGA_FORZADA,BTC);
			unitarioAerolineas = calcularPrecioPorKm( KM_CARGA_FORZADA, AEROLINEAS_CARGA_FORZADA);

			debitoLatam = calcularCostoDebito(LATAM_CARGA_FORZADA,DESCUENTO_DEBITO);
			creditoLatam = calcularCostoCredito(LATAM_CARGA_FORZADA,INTERES_CREDITO);
			bitcoinLatam = calcularCostoBitcoin(LATAM_CARGA_FORZADA,BTC);
			unitarioLatam = calcularPrecioPorKm( KM_CARGA_FORZADA, LATAM_CARGA_FORZADA);

			diferenciaPrecios = calcularDiferenciaPrecios( LATAM_CARGA_FORZADA, AEROLINEAS_CARGA_FORZADA);

			informarResultados(debitoLatam,creditoLatam,bitcoinLatam,unitarioLatam,debitoAerolineas,creditoAerolineas,bitcoinAerolineas,unitarioAerolineas,diferenciaPrecios);

			//Reinicio los parametros iniciales para una nueva ejecucion del programa:
			kilometros = 0;
			if (flagKilometros)
			{
				flagKilometros= invertirFlag(flagKilometros);
			}
			if (flagPrecios)
			{
				flagPrecios= invertirFlag(flagPrecios);
			}
			if (flagCostos)
			{
				flagCostos = invertirFlag(flagCostos);
			}

			imprimirMensajeRegresarAlMenu();
			break;

		case 6:
			printf("Gracias por utilizar nuestros servicios. Hasta pronto!");
			break;

		default:
			printf(">>>Intente nuevamente<<<\n");
			break;
		}

	}while (opcion!= 6);

	return EXIT_SUCCESS;
}
