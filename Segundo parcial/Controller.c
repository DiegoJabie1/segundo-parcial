#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"
#include "funciones.h"


int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    int returnAux;

    returnAux=parser_EmployeeFromText(path,pArrayListEmployee);

    return returnAux;
}

int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int i;
    int id;
    char nombre[128];
    char empleo[50];
    int edad;
    int horasTrabajadas;

    Employee* pEmployee;

    printf("\n    ID    |,|        NOMBRE      |,|    EMPLEO    |,|    EDAD  |,| HORAS TRABAJADAS\n");
    printf("          |,|                    |,|              |,|          |,|      \n");


    for(i=0;i<ll_len(pArrayListEmployee);i++)
    {
        pEmployee=ll_get(pArrayListEmployee,i);

        id=employee_getId(pEmployee);
        employee_getNombre(pEmployee,nombre);
        employee_getEmpleo(pEmployee,empleo);
        edad=employee_getEdad(pEmployee);
        horasTrabajadas=employee_getHorasTrabajadas(pEmployee);

        printf("%10d|,|%20s|,|%14s|,|%10d|,| %10d\n",id,nombre,empleo,edad,horasTrabajadas);

    }


   return 1;
}


int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    int opcion = 1 ;

    system("cls");

    ll_sort(pArrayListEmployee,sortEmployees,opcion);

    return 1;
}


