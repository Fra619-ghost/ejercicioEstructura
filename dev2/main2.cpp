
#include<iostream>
#include<stdio.h>
#include"variables2.h"

using namespace std;


int main(int argc, char const *argv[])
{
    int op;
    PERSONA usuario[100];

    int i = 0;
    do
    {
        system("cls||clear");
        
        printf("Nombres: ");
        scanf("  %[^\n]", usuario[i].name);
        printf(" Apellidos: ");
        scanf("  %[^\n]", usuario[i].apellidos);
        printf(" Sexo: ");
        scanf(" %[^\n]", &usuario[i].sexo);
        printf("Cargo: ");
        scanf(" %[^\n]", usuario[i].cargo);
        printf("DNI: ");
        scanf(" %[^\n]", usuario[i].DNI);
        

        cout<<"Desea ingresar otro registro? 1. si, 0. No "<<endl;
        cin>>op;
        i++;
    } while ( op!= 0);
    
   


    for(int j = 0; j< i; j++){
        

        printf(" Nombre: %s \nApellidos: %s \nSexo: %s \nCargo: %s \nDNI:%s", usuario[j].name,usuario[j].apellidos,usuario[j].sexo,usuario[j].cargo,usuario[j].DNI);
    }
    
    return 0;
}

   

