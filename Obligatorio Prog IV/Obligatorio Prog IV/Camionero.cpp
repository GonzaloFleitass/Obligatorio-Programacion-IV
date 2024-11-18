//
//  Camionero.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Camionero.hpp"


Camionero::Camionero():nac(),nombre(){
    ci=0;
   
    cantTatuajes=0;
}
Camionero::Camionero(int ced,String nom,int tat,Fecha nacimiento): nac(nacimiento){
    ci = ced;
    nombre=nom;
    cantTatuajes = tat;
}

Camionero::Camionero(const Camionero &a):nac(a.nac){
    ci = a.ci;
    nombre = a.nombre;
    cantTatuajes = a.tat;
}

String Camionero::getNombre(){
    return nombre;
};

int Camionero::getCedula(){
    return ci;
}

int Camionero:: getCantTatuajes(){
    return cantTatuajes;
}

Fecha Camionero:: getFechNac(){
    return nac;
}

#include "Camionero.hpp"

void Camionero::Print() {
    // Imprimir la información del camionero usando printf
    printf("Nombre: ");
    nombre.print();  // Usamos el método print() de la clase String para imprimir el nombre

    printf("\nCédula: %d\n", ci);  // Imprimir la cédula, que es un int

    printf("Cantidad de tatuajes: %d\n", cantTatuajes);  // Imprimir la cantidad de tatuajes

    // Imprimir la fecha de nacimiento (asumimos que la clase Fecha tiene un método print())
    printf("Fecha de Nacimiento: ");
    nac.print();  // Usamos el método print() de la clase Fecha para imprimir la fecha
    printf("\n");
}

