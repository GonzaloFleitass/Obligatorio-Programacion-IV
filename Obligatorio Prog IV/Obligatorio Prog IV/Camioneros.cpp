//
//  Camioneros.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Camioneros.hpp"
//REVISAR
boolean Camioneros::perteneceEnArbol(nodoL* nodo,long int ced){
    boolean encontre = FALSE;
    while (!encontre && nodo!= NULL)
        if(ced== nodo->info->getCedula()){
            encontre= TRUE;
        }else{
            if(ced< nodo->info->getCedula()){
                nodo = nodo->hizq;
            }else{
                nodo = nodo->hder;
            }
        }
    return encontre;
}

void Camioneros:: insertEnArbol(nodoL* &abb, Camionero * a){
    if(abb==NULL){
                abb =new nodoL;
                abb -> info = a;
                abb-> hizq = NULL;
                abb-> hder = NULL;
    }else{
        if(a->getCedula()< abb->info->getCedula()){
            insertEnArbol(abb->hizq,a);
        }else
            insertEnArbol(abb->hder,a);
    }
}


Camionero * Camioneros::obtenerEnArbol(nodoL * abb, long int ced){
    while (ced != abb->info->getCedula())
    if (ced < abb->info->getCedula())
        abb = abb->hizq;
    else
        abb = abb->hder;
            return (abb->info);
}


void Camioneros :: cargarIterador (nodoL * abb, Iterador &iter){
    if (abb != NULL)
{
        cargarIterador (abb->hizq, iter);
        iter.insert (abb->info);
        cargarIterador (abb->hder, iter);
    }
}






Camioneros :: Camioneros(){
    abb = NULL;
}


boolean Camioneros:: member(long int ced){
    return perteneceEnArbol(abb, ced);
}

void Camioneros::insert(Camionero * cam){
    insertEnArbol(abb, cam);
}


Camionero * Camioneros:: find(long int ced){
    return obtenerEnArbol(abb, ced);
    }


void Camioneros::ListarCamionerosRegistrados(Iterador &Iter){
    cargarIterador(abb, Iter);
    }
    


Camionero * Camioneros::mayorCantTatuajes(nodoL *abb) {
   
    Camionero * mayor = abb->info;

    if (abb->hizq != NULL) {
        Camionero * mayorIzq =  mayorCantTatuajes(abb->hizq);
        if (mayorIzq->getCantTatuajes() > mayor->getCantTatuajes()) {
            mayor = mayorIzq;
        }
    }

    if (abb->hder != NULL) {
        Camionero * mayorDer = mayorCantTatuajes(abb->hder);
        if (mayorDer->getCantTatuajes() > mayor->getCantTatuajes()) {
            mayor = mayorDer;
        }
    }

    return mayor;
}


int Camioneros:: cantCamionesRegistrados(nodoL* nodo){
    int contador = 0;
    if(nodo==NULL){
        return contador;
    }else{
        contador++;
        cantCamionesRegistrados(nodo->hizq);
        cantCamionesRegistrados(nodo->hder);
    }
    return contador;
}


