#include<iostream>
#include<stdio.h>
#include"variables4.h"

using namespace std;


int main(int argc, char const *argv[])
{
    int op;
    int promedioNotas=0;
    int suma= 0;
    int notaMaxima=0;
    ESTUDIANTE estudiantes[100];

    int i = 0;
    do
    {
        system("cls||clear");
        
        printf("Nombres: ");
        scanf("  %[^\n]", estudiantes[i].Nombre);
        printf(" Apellidos: ");
        scanf("  %[^\n]", estudiantes[i].Apellido);
        printf(" Cif: ");
        scanf(" %[^\n]", estudiantes[i].cif);
        printf("Nota final: ");
        scanf(" %d", &estudiantes[i].notaFinal);
        
         suma= suma+estudiantes[i].notaFinal;


         if(estudiantes[i].notaFinal>notaMaxima){
            notaMaxima=estudiantes[i].notaFinal;
         }


        cout<<"Desea ingresar otro registro? 1. si, 0. No "<<endl;
        cin>>op;
        i++;

        
    } while ( op!= 0);


    if (i > 0) {
        promedioNotas = suma / i;
    } else {
        printf("No hay notas que promediar\n");
    }
    
   


    for(int j = 0; j< i; j++){
        

        printf(" Nombre: %s \nApellidos: %s \ncif: %s \nNota Final: %d ", estudiantes[j].Nombre,estudiantes[j].Apellido,estudiantes[j].cif,estudiantes[j].notaFinal);
    }
    printf("El promedio de notas es de: %d",promedioNotas);

    printf("Estudiantes con la nota más alta: %d",notaMaxima);

    for(int j = 0; j<i;j++){
    if(estudiantes[i].notaFinal==notaMaxima){
        printf("Nombre: %s \nApellidos: %s \ncif: %s \nNota Final: %d\n",
                   estudiantes[j].Nombre, estudiantes[j].Apellido, estudiantes[j].cif, estudiantes[j].notaFinal);
    }
    }
    return 0;
}

   

