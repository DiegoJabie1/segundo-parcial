#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

int parser_EmployeeFromText(char* pFile, LinkedList* pArrayListEmployee)
{
    int read;
    int returnAux=-1;
    char auxId[10];
    char auxName[128];
    char auxEmpleo[50];
    char auxEdad[10];
    char auxHours[10];

    Employee* aux;

    FILE* data;

    data=fopen(pFile,"r");

    if(pFile!=NULL&&pArrayListEmployee!=NULL&&data!=NULL)
    {
        returnAux=0;

        do
        {
            read=fscanf(data,"%[^,],%[^,],%[^,],%[^,],%[^\n]",auxId,auxName,auxEmpleo,auxEdad,auxHours);

            if(read==5)
            {
                aux=employee_newParametros(auxId,auxName,auxEmpleo,auxEdad,auxHours);
                ll_add(pArrayListEmployee, aux);

            }

        }while(!feof(data));

        fclose(data);

        returnAux=1;

        printf("\n\nDATOS CARGADOS CORRECTAMENTE EN TEXTO\n");

        printf("\n\n");

        system("pause");

        system("cls");

    }

    return returnAux;
}


