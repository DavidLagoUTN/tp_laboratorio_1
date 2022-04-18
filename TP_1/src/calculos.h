#ifndef CALCULOS_H_
#define CALCULOS_H_



#endif /* CALCULOS_H_ */

/// @brief Invierte el valor del flag recibido por parametro de 0 a 1, o , de 1 a 0.
///
/// @param flag: numero entero que representa un flag.
/// @return Devuelve un numero entero que representa el valor invertido del flag recibido.
int invertirFlag(int flag);

/// @brief Solicita el ingreso de un entero, que representa los kilometros del viaje.
///
/// @return devuelve un numero entero que representa el valor de los kilometros del viaje.
int pedirKilometros();

/// @brief Solicita el ingreso de un numero flotante, que representa el precio de un vuelo.
///
/// @return devuelve un numero flotante que representa el valor del precio de un vuelo.
float pedirPrecioVuelo();

/// @brief Realiza el calculo para conocer el costo por tarjeta de debito del viaje.
///
/// @param precio: numero flotante que representa el precio sin descuento en pesos argentinos.
/// @param descuento: numero entero que representa el descuento a aplicar al precio.
/// @return devuelve un numero flotante que representa el precio con descuento aplicado.
float calcularCostoDebito(float precio, int descuento);

/// @brief Realiza el calculo para conocer el costo por tarjeta de credito del viaje.
///
/// @param precio: numero flotante que representa el precio sin intereses en pesos argentinos.
/// @param interes: numero entero que representa el interes a aplicar al precio.
/// @return devuelve un numero flotante que representa el precio con interes aplicado.
float calcularCostoCredito(float precio, int interes);

/// @brief Realiza el calculo para conocer el costo en Bitcoin del viaje.
///
/// @param precio: numero flotante que representa el precio en pesos argentinos.
/// @param valorBitcoin: numero flotante que representa el valor de un Bitcoin.
/// @return devuelve un numero flotante que representa el precio traducido a Bitcoin.
float calcularCostoBitcoin(float precio, float valorBitcoin);

/// @brief Realiza el calculo para conocer el costo unitario por Kilometro.
///
/// @param kilometros: numero entero que representa los kilometros totales del viaje.
/// @param precio: numero flotante que representa el precio en pesos argentinos.
/// @return devuelve un numero flotante que representa el precio unitario por Kilometro.
float calcularPrecioPorKm(int kilometros, float precio);

/// @brief Realiza el calculo de la diferencia de precios entre el de Latam y Aerolineas Argentinas.
///
/// @param precioLatam: numero flotante que representa el precio en pesos argentinos por Latam.
/// @param precioAerolineas: numero flotante que representa el precio en pesos argentinos por Aerolineas Argentinas.
/// @return devuelve la diferencia de precios entre Latam y Aerolineas Argentinas.
float calcularDiferenciaPrecios(float precioLatam, float precioAerolineas);
