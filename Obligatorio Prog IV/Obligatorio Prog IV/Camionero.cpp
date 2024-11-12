//
//  Camionero.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Camionero.hpp"

Camionero::Camionero(int ced,String nom,int tat,Fecha nacimiento): nac(nacimiento){
    ci = ced;
    nombre=nom;
    cantTatuajes = tat;
}
