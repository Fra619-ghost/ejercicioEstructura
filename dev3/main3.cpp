#include<iostream>
#include<stdio.h>
#include"variables3.h"

using namespace std;


int main(int argc, char const *argv[])
{
    int op;
    ALMACEN registros[100];

    int i = 0;
    do
    {
        system("cls||clear");
        
        printf("Codigo: ");
        scanf("  %[^\n]", registros[i].codigo);
        printf(" Nivel minimo: ");
        scanf("  %[^\n]", registros[i].nivel_Minimo);
        printf(" Nivel actual: ");
        scanf(" %[^\n]", registros[i].nivel_Actual);
        printf("proveedor: ");
        scanf(" %[^\n]", registros[i].Proveedor);
        printf("precio: ");
        scanf(" %[^\n]", registros[i].precio);
        

        cout<<"Desea ingresar otro registro? 1. si, 0. No "<<endl;
        cin>>op;
        i++;
    } while ( op!= 0);
    
   


    for(int j = 0; j< i; j++){
        

        printf(" Codigo: %s \nNivel minimo: %s \nNivel actual: %s \nproveedor: %s \nPrecio:%s", registros[j].codigo,registros[j].nivel_Minimo,registros[j].nivel_Actual,registros[j].Proveedor,registros[j].precio);
    }
    
    return 0;
}

   

