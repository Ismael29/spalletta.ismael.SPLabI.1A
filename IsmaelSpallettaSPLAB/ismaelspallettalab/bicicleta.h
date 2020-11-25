#include "LinkedList.h"
#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED

typedef struct
{
    int id_bike;
    char nombre[30];
    char tipo[20];
    int tiempo;
}eBicicleta;


#endif // BICICLETA_H_INCLUDED

int menu();
/** \brief muestra opciones y devuelve la elegida por el usuario
 *
 * \return opcion elegida por el usuario
 *
 */
eBicicleta* nuevaBicicleta();
/** \brief constructor de eBicicleta
 *
 * \return un puntero a una eBicicleta
 *
 */eBicicleta* nuevaBicicletaParam(char* id_bikeStr, char* nombre, char* tipo, char* tiempoStr);

/** \brief constructor de eBicicleta con atributos pasados por parametro
 *
 * \param char id de la bicicleta a crear
 * \param char nombre de la bicicleta a crear
 * \param char tipo de la bicicleta a crear
 * \param char tiempo de la bicicleta a crear
 * \return
 *
 */int bicicleta_setId_bike(eBicicleta* this, int id_bike);

/** \brief recibe por parametro el valor del id que le asignara a la bicicleta recibida
 *
 * \param eBicicleta* puntero a la eBicicleta a modificar
 * \param int id_bike que se le asignara a la eBicicleta recibida
 * \return 1 si pudo asignarla, -1 si no
 *
 */int bicicleta_setNombre(eBicicleta* this, char* nombre);


 /** \brief recibe el valor del tipo
  *
  * \param this eBicicleta*
  * \param tipo char*
  * \return int
  *
  */int bicicleta_setTipo(eBicicleta* this, char* tipo);


 /** \brief asigna el valor del tiempo
  *
  * \param this eBicicleta*
  * \param tiempo int
  * \return int
  *
  */int bicicleta_setTiempo(eBicicleta* this, int tiempo);


 /** \brief obtiene el tiempo de la bici
  *
  * \param this eBicicleta*
  * \param tiempo int*
  * \return int
  *
  */int bicicleta_getTiempo(eBicicleta* this, int* tiempo);


/** \brief obtiene el tipo de la bici
 *
 * \param this eBicicleta*
 * \param tipo char*
 * \return int
 *
 */int bicicleta_getTipo(eBicicleta* this, char* tipo);


/** \brief elimina bici
 *
 * \param this eBicicleta*
 * \return void
 *
 */void borrarBici(eBicicleta* this );


/** \brief muestra una bicicleta
 *
 * \param this eBicicleta*
 * \return int
 *
 */int mostrarBicicleta(eBicicleta* this);

/** \brief cambia el tiempo de las bicicletas ramdom entre dos valores
 *
 * \param this void*
 * \return void*
 *
 */void* cambiarTiempo(void* this);

/** \brief funcion para elegir tipo
 *
 * \return int
 *
 */int elegirTipo();

/** \brief filtra por tipo seleccionado
 *
 * \param this LinkedList*
 * \return void
 *
 */void filtrarPorTipos(LinkedList* this);

/** \brief define si es tipo bmx
 *
 * \param this void*
 * \return int
 *
 */int esTipoBMX(void* this);

/** \brief define si es tipo playera
 *
 * \param this void*
 * \return int
 *
 */int esTipoPlayera(void* this);

/** \brief define si es tipo paseo
 *
 * \param this void*
 * \return int
 *
 */int esTipoPaseo(void* this);

/** \brief define si es tipo MTB
 *
 * \param this void*
 * \return int
 *
 */int esTipoMtb(void* this);

/** \brief compara tipo y tiempo de las bicicletas para ordenarlas
 *
 * \param biciA void*
 * \param biciB void*
 * \return int
 *
 */int compararBicicletasPorTipoyTiempo(void* biciA,void* biciB);


