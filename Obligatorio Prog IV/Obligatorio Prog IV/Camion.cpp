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

Camion::cargarCamionero(Camionero cond):conductor(cond){
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
Camionero Camion:: getCamionero():{
    return conductor;
}

void Camion:: print(){
 // Imprime la matrícula en una sola línea
        actual->info->getMatricula().print();  
        printf(" ");  // Espacio entre los valores

        // Imprime la marca en la misma línea
        actual->info->getMarca().print();      
        printf(" ");  // Espacio entre los valores

        // Imprime la cantidad de viajes anuales
        printf("%d ", actual->info->getCantViajesAnuales()); 
        printf(" ")
        actual = actual->sig;  // Avanza al siguiente nodo

        switch(actual->info.tipoCamion()){
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
