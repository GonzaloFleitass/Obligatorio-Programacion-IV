//
//  Simple.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Simple.hpp"

Simple:: Simple (String a, String b, int c, String d, Camionero e): Camion(a, b, c,e){
    depto = d;
}

String Simple:: getDepto(){
    return depto;
}

char Simple::TipoCamion(){
    return 'S';
}
float Simple:: getMetrosCubicos(){
    return getcantViajesAnuales() * 25;
}

void Simple:: Print(){
    // Imprime la matrícula en una sola línea
    getMatricula().print();
    printf(" ");  // Espacio entre los valores
    
    // Imprime la marca en la misma línea
    getMarca().print();
    printf(" ");  // Espacio entre los valores
    
    // Imprime la cantidad de viajes anuales
    printf("%d ",getcantViajesAnuales());
    printf(" ");
    
    depto.print();
    printf("");
    
}
