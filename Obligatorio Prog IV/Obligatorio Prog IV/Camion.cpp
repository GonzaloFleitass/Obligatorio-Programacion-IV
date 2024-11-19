//
//  Camion.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Camion.hpp"

Camion:: Camion(String a,String b, int c, Camionero d ): matricula(a),marca(b),conductor(d){
    cantViaAnu = c;
}

void Camion::setCamionero(Camionero cond){
    conductor.setcantTatuajes(cond.getCantTatuajes());
    conductor.setCi(cond.getCedula());
    conductor.setFecha(cond.getFechNac());
    conductor.setNombre(cond.getNombre());
    
    //HAY QUE HACER LOS SET DE CONDUCTOR
}

String Camion::getMarca(){
    return marca;
}

String Camion::getMatricula(){
    return matricula;
}

int Camion::getcantViajesAnuales(){
    return cantViaAnu;
}
Camionero Camion:: getCamionero(){
    return conductor;
}

void Camion:: Print(){
 // Imprime la matrícula en una sola línea
    matricula.print();
        printf(" ");  // Espacio entre los valores

        // Imprime la marca en la misma línea
        marca.print();
        printf(" ");  // Espacio entre los valores

        // Imprime la cantidad de viajes anuales
    printf("%d ",cantViaAnu);
    printf(" ");

    switch(TipoCamion()){
             case 'G':
                   printf("Grande");
                   break;
             case 'R':
                   printf("Remolque");
                   break;
             case 'S':
                   printf("Simple");
                   break;
        
    }
    printf("\n");
}

 void Camion :: setViajesAnuales(int viajes){
     cantViaAnu = viajes;
 }


char Camion::TipoCamion(){
    return 'D';
}


float Camion:: cantMetrosCubicos(){
    return 0;
    }
