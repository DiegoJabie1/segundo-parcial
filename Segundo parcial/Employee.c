#include "Employee.h"
#include "string.h"
#include "LinkedList.h"

Employee* employee_new()
{
    Employee * myEmployee;
    myEmployee = (Employee*) malloc(sizeof(Employee));


    if (myEmployee!=NULL)
    {
        employee_setId(myEmployee,0);
        employee_setNombre(myEmployee," ");
        employee_setEmpleo(myEmployee," ");
        employee_setEdad(myEmployee,0);
        employee_setHorasTrabajadas(myEmployee,0);
    }

    return myEmployee;
}

Employee* employee_newParametros(char* idStr,char* nombreStr, char* empleoStr, char* edadStr, char* horasTrabajadasStr)
{

    int id;
    int edad;
    int hours;


    Employee* newEmployee;

    newEmployee=employee_new();

    id=atoi(idStr);
    edad=atoi(edadStr);
    hours=atoi(horasTrabajadasStr);

    employee_setId(newEmployee,id);
    employee_setNombre(newEmployee, nombreStr);
    employee_setEmpleo(newEmployee, empleoStr);
    employee_setEdad(newEmployee,edad);
    employee_setHorasTrabajadas(newEmployee,hours);

    return newEmployee;

}

void employee_delete(Employee* this)
{
if(this!=NULL)
    {
    free(this);
    }

}

int employee_setId(Employee* this,int id)
{
    int validation=-1;

    if(this!=NULL)
    {
        validation=0;
        this->id=id;
        validation=1;
    }

    return validation;
}

int employee_getId(Employee* this)
{
    int id;

    if(this!=NULL)
    {
        id=this->id;
    }

    return id;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int validation=-1;

    if(this!=NULL)
    {
      validation=0;
      strcpy(this->nombre,nombre);
      validation=1;
    }

    return validation;
}

int employee_getNombre(Employee* this,char* nombre)
{
    int validation=-1;

    if(this!=NULL)
    {
        validation=0;
        strcpy(nombre,this->nombre);
        validation=1;
    }
    return validation;
}

int employee_setEdad(Employee* this,int edad)
{
    int validation=-1;

    if(this!=NULL)
    {
        validation=0;
        this->edad=edad;
        validation=1;
    }

    return validation;
}

int employee_getEdad(Employee* this)
{

    int edad;

    if(this!=NULL)
    {
        edad=this->edad;
    }

    return edad;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int validation=-1;

    if(this!=NULL)
    {
        validation=0;
        this->horasTrabajadas=horasTrabajadas;
        validation=1;
    }

    return validation;
}

int employee_setEmpleo(Employee* this,char* empleo)
{
    int validation=-1;

    if(this!=NULL)
    {
      validation=0;
      strcpy(this->empleo,empleo);
      validation=1;
    }

    return validation;
}

int employee_getEmpleo(Employee* this,char* empleo)
{
    int validation=-1;

    if(this!=NULL)
    {
        validation=0;
        strcpy(empleo,this->empleo);
        validation=1;
    }
    return validation;
}

int employee_getHorasTrabajadas(Employee* this)
{
    int horasTrabajadas;

    if(this!=NULL)
    {
        horasTrabajadas=this->horasTrabajadas;
    }

    return horasTrabajadas;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int validation=-1;

    if(this!=NULL)
    {
        validation=0;
        this->sueldo=sueldo;
        validation=1;
    }

    return validation;
}

int employee_getSueldo(Employee* this)
{

    int sueldo;

    if(this!=NULL)
    {
        sueldo=this->sueldo;
    }

    return sueldo;
}

int sortEmployees(void* employee, void* otherEmployee)
{

    Employee* aux = employee;
    Employee* aux2 = otherEmployee;

    return strcmp(aux->nombre,aux2->nombre);
}

int laQueMapea(void* empleado)
{
    int returnAux=-1;
    int sueldo;
    int horasTrabajadas;

    if(empleado!=NULL)
    {
        horasTrabajadas=employee_getHorasTrabajadas(empleado);
        sueldo=horasTrabajadas*300;
        employee_setSueldo(empleado,sueldo);

        returnAux=1;
    }
    return returnAux;
}

