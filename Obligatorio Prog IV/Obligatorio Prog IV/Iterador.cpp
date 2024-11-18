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

void Iterador::print(){
    info->getMatricula().print();
    info->getMarca().print;
    printf("%d",info->getCantViajesAnuales());
}
