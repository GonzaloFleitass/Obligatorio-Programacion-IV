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

