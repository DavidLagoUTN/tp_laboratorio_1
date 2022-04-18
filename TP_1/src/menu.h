#ifndef MENU_H_
#define MENU_H_



#endif /* MENU_H_ */

/// @brief Imprime en pantalla el mensaje de bienvenida al programa.
///
void imprimirMensajeBienvenida();

/// @brief Imprime en pantalla el mensaje al regresar al menu principal.
///
void imprimirMensajeRegresarAlMenu();

/// @brief Imprime en pantalla el mensaje del menu principal del programa.
///
/// @param kilometros: numero entero que representa los kilometros del viaje.
/// @param flagPrecios: numero entero que representa la bandera para saber cuando imprimir los precios.
/// @param precioAerolineas: numero flotante que representa el precio del viaje por Aerolineas Argentinas.
/// @param precioLatam: numero flotante que representa el precio del viaje por Latam.
void mostrarMenuOpciones(int kilometros, int flagPrecios, float precioAerolineas, float precioLatam);

/// @brief Solicita el ingreso de un entero, que representa la opcion a elegir del menu principal.
///
/// @return devuelve la opcion elegida.
int pedirOpcionMenu();

/// @brief Imprime en pantalla el mensaje que informa los resultados de todos los costos.
///
/// @param debitoLatam: numero flotante que representa el costo en tarjeta de debito del viaje por Latam.
/// @param creditoLatam: numero flotante que representa el costo en tarjeta de credito del viaje por Latam.
/// @param bitcoinLatam: numero flotante que representa el costo en Bitcoin del viaje por Latam.
/// @param unitarioLatam: numero flotante que representa el costo por kilometro del viaje por Latam.
/// @param debitoAerolineas: numero flotante que representa el costo en tarjeta de debito del viaje por Aerolineas Argentinas.
/// @param creditoAerolineas: numero flotante que representa el costo en tarjeta de credito del viaje por Aerolineas Argentinas.
/// @param bitcoinAerolineas: numero flotante que representa el costo en Bitcoin del viaje por Aerolineas Argentinas.
/// @param unitarioAerolineas: numero flotante que representa el costo por kilometro del viaje por Aerolineas Argentinas.
/// @param diferenciaPrecios: numero flotante que representa la diferencia de costo del viaje entre Latam y Aerolineas Argentinas.
void informarResultados(float debitoLatam,float creditoLatam,float bitcoinLatam, float unitarioLatam, float debitoAerolineas, float creditoAerolineas, float bitcoinAerolineas, float unitarioAerolineas, float diferenciaPrecios);
