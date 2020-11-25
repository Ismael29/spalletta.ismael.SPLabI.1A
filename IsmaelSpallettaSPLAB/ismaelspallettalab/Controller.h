#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED


#endif // CONTROLLER_H_INCLUDED


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */int controller_loadFromText(char* path, LinkedList* pListaBicicletas);

/** \brief
 *
 * \param pListaBicicletas LinkedList*
 * \return int
 *
 */int controller_ListarBicicletas(LinkedList* pListaBicicletas);

/** \brief
 *
 * \param path char*
 * \param pListaBicicletas LinkedList*
 * \return int
 *
 */int controller_guardarComoTexto(char* path, LinkedList* pListaBicicletas);

/** \brief
 *
 * \param pListaBicicletas LinkedList*
 * \return int
 *
 */int controller_sortBicicletas(LinkedList* pListaBicicletas);

