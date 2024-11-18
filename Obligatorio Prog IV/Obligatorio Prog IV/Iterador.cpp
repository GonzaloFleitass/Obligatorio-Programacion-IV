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
        actual->info->Print();
        actual = actual->sig;  // Avanza al siguiente nodo
        
        printf("\n");  // Imprime un salto de línea al final de la salida completa
    }
}

