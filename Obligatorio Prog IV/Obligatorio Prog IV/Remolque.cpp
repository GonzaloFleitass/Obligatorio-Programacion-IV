//
//  Remolque.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Remolque.hpp"


Remolque :: Remolque(String a,String b,int num1,Camionero cam ,int num2, Fecha fech, int num3): Grande(a, b, num1,cam,num2, fech) {
    capRemolque = num3;
}

int Remolque:: getCapRemolque(){
    return capRemolque;
}

float Remolque :: cantMetrosCubicos() {
    float Num = Grande :: cantMetrosCubicos() + ( capRemolque * getcantViajesAnuales());
    return Num;
}

char Remolque:: TipoCamion(){
    return 'R';
}


void Remolque:: Print(){
    // Imprime la matrícula en una sola línea
    getMatricula().print();
    printf(" ");  // Espacio entre los valores
    
    // Imprime la marca en la misma línea
    getMarca().print();
    printf(" ");  // Espacio entre los valores
    
    // Imprime la cantidad de viajes anuales
    printf("%d ",getcantViajesAnuales());
    printf(" ");
    
    printf("%f",getVolumen());
    printf("");
    
    printf(" | Fecha de Adquerido: %d/%d/%d", getfechaAdquirido().getDia(), getfechaAdquirido().getMes(), getfechaAdquirido().getAnio());
    printf("");
    
    printf("%d",capRemolque);
}
