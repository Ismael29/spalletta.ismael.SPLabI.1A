#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include <time.h>
#include "bicicleta.h"
#include "controller.h"
//ismael spalletta 1A 2C 2020
int main()
{
    srand (time(NULL));
    char confirm ='n';
    char seguir = 's';
    char archivo[20];
    int banderaposicionesAlta = -1;
    LinkedList* listaBicicletas = ll_newLinkedList();
    do
    {
        switch(menu())
        {
        case 1:
            printf("Ingrese El Nombre Del Archivo A Cargar (bicicletas.csv): ");
            scanf("%s", archivo);
            controller_loadFromText(archivo, listaBicicletas);
            system("pause");
            break;
        case 2:
            if(!ll_isEmpty(listaBicicletas))
            {
                controller_ListarBicicletas(listaBicicletas);
            }
            else
            {
                printf("La Lista De Bicicletas Esta Vacia. Debe Cargar Al Menos Una Bicicleta.\n");
            }
            system("pause");
            break;
        case 3:
            if(!ll_isEmpty(listaBicicletas))
            {
                listaBicicletas = ll_map(listaBicicletas, cambiarTiempo);
                banderaposicionesAlta = 1;
                controller_ListarBicicletas(listaBicicletas);
            }
            else
            {
                printf("Tiempos No Asignados Ingrese Una Lista Primero!.\n");
            }
            system("pause");
            break;
        case 4:
            filtrarPorTipos(listaBicicletas);
            break;
        case 5:
            if(banderaposicionesAlta == 1 &&  !ll_isEmpty(listaBicicletas))
            {
                if (controller_sortBicicletas(listaBicicletas) != -1)
                {
                    controller_ListarBicicletas(listaBicicletas);
                }
            }else{
                printf("No Se Pudo Asignar Posiciones Ya Que La Lista Esta Vacia O No Se Asignaron Tiempos, Debe Cargarla Desde Un Archivo Primero Y Asignarle Nuevos Tiempos.\n");
            }
            system("pause");
            break;
        case 6:
            if( banderaposicionesAlta == 1 &&  !ll_isEmpty(listaBicicletas))
            {
                controller_guardarComoTexto("BICISORDEN.csv", listaBicicletas);
                printf(" Se Guardo Correctamente En El Archivo BICISORDEN.csv\n");
            }
            else
            {
                printf("No Se Pudo Guardar, La Lista Esta Vacia O No Se Le Asignaron Tiempo Todavia!\n");
            }
            system("pause");
            break;
        case 7:
            printf("Seguro Desea Salir? (s/n) : ");
            fflush(stdin);
            scanf("%c", &confirm);
            if (confirm == 's')
            {
                seguir = 'n';
            }
            break;
        }
    }while(seguir == 's');
    ll_deleteLinkedList(listaBicicletas);
    return 0;
}
