//
//  Grande.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Grande.hpp"

Grande:: Grande(String s1,String s2,int num1,Camionero cam,float num2,Fecha fech): Camion(s1, s2, num1,cam){
    volumen = num2;
    fechaAdquirido = fech;
    
}

float Grande:: getVolumen(){
    return volumen;
}

Fecha Grande:: getfechaAdquirido(){
    return fechaAdquirido;
}


float Grande::cantMetrosCubicos(){
    return volumen;
}

char Grande :: TipoCamion(){
return 'G';
}


void Grande:: Print(){
    // Imprime la matrícula en una sola línea
    getMatricula().print();
    printf(" ");  // Espacio entre los valores
    
    // Imprime la marca en la misma línea
    getMarca().print();
    printf(" ");  // Espacio entre los valores
    
    // Imprime la cantidad de viajes anuales
    printf("%d ",getcantViajesAnuales());
    printf(" ");
    
    printf("%f",volumen);
    printf("");
    
    printf(" | Fecha de Adquerido: %d/%d/%d", fechaAdquirido.getDia(), fechaAdquirido.getMes(), fechaAdquirido.getAnio());
    
}
