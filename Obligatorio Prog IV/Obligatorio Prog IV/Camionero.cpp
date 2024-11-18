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
    printf("Nombre: ");
    nombre.print(); 
    printf("\nCédula: %d\n", ci);

    printf("Cantidad de tatuajes: %d\n", cantTatuajes);  

    printf("Fecha de Nacimiento:%d/%d/%d",nac.getDia(),nac.getMes(),nac.getAnio());

    printf("\n");
}

