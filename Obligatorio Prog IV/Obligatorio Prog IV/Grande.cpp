//
//  Grande.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Grande.hpp"

Grande:: Grande(String s1,String s2,int num1,int num2,Fecha fech): Camion(s1, s2, num1){
    volumen = num2;
    fechaAdquirido = fech;
    
}

int Grande:: getVolumen(){
    return volumen;
}

Fecha Grande:: getfechaAdquirido(){
    return fechaAdquirido;
}
