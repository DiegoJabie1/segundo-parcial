#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

int main()
{
    int option;
    int flag=0;
    LinkedList* listaEmpleados = ll_newLinkedList();

    do
    {
        printf("Menu:\n1. Cargar los datos de los empleados desde el archivo datos.csv.\n2. Mostrar empleados ordenados.\n3. Calcular sueldos.\n3.Listar empleados y sueldos.\n5.Salir.\n\nSu opcion: ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            controller_loadFromText("datos.csv", listaEmpleados);
            break;
        case 2:
            if(ll_isEmpty(listaEmpleados))
            {
                printf("\n\nCARGUE LOS EMPLEADOS PRIMERO PARA MOSTRAR Y ORDENAR LA LISTA.\n\n");
                system("pause");
                system("cls");
            }
            else
            {
                controller_sortEmployee(listaEmpleados);
                controller_ListEmployee(listaEmpleados);
                printf("\n\n");
                system("pause");
                system("cls");
            }
            break;
        case 3:
            ll_map(listaEmpleados,)
            break;
        case 4:

            break;

        }while(option != 3);


        return 0;

    }

