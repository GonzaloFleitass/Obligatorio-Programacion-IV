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
    cantTatuajes = a.cantTatuajes;
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

void Camionero::setCi(int c){
    ci =c;
}

void Camionero:: setNombre(String a){
    nombre=a;
}
void Camionero::setcantTatuajes(int tat){
    cantTatuajes = tat;
}
void Camionero::setFecha(Fecha a){
    nac=a;
}

void Camionero::Print() {
  
    printf("Nombre: ");
    nombre.print();  

    printf(" | Cédula: %d", ci);


    printf(" | Cantidad de tatuajes: %d", cantTatuajes);

 
    printf(" | Fecha de Nacimiento: %d/%d/%d", nac.getDia(), nac.getMes(), nac.getAnio());
       
    printf("\n");

}

