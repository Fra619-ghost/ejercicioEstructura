#include<iostream>
#include<stdio.h>
#include"variables1.h"

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
        printf(" Edad: ");
        scanf(" %d", &usuario[i].edad);
        printf("Ciudad: ");
        scanf(" %[^\n]", usuario[i].ciudad);
        printf("Dirección: ");
        scanf(" %[^\n]", usuario[i].dirección);
        printf("Telefono: ");
        scanf(" %[^\n]", usuario[i].telefono);
        

        cout<<"Desea ingresar otro registro? 1. si, 0. No "<<endl;
        cin>>op;
        i++;
    } while ( op!= 0);
    
   


    for(int j = 0; j< i; j++){
        

        printf(" Nombre: %s \nApellidos: %s \nEdad: %d \nCiudad: %s \nDirección:%s \nTeléfono:%s", usuario[j].name,usuario[j].apellidos,usuario[j].edad,usuario[j].ciudad,usuario[j].dirección,usuario[j].telefono);
    }
    
    return 0;
}

   

