//
//  Iterador.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Iterador.hpp"


Iterador :: Iterador ()
{
    primero = NULL;
    actual = NULL;
    ultimo = NULL;
}

boolean Iterador :: hayMasObj (){
    return (boolean) (actual!=NULL);
};


void Iterador:: insert(Objeto * obj){
    
    nodo * nuevo = new nodo;
    nuevo -> info = obj;
    nuevo -> sig = NULL;
    if (primero == NULL)
    {
        primero = nuevo;
        ultimo = nuevo;
        actual = nuevo;
    }
    else
    {
        ultimo -> sig = nuevo;
        ultimo = ultimo -> sig;
    }
}
void Iterador::proximoObjeto() {
    actual = primero;
    while (actual != NULL) {
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
    }
    printf("\n");  // Imprime un salto de línea al final de la salida completa
}

