//
//  Camiones.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 13/11/24.
//

#include "Camiones.hpp"

int Camiones :: h (String s)
{
    int clave=s.letrAnum();
return (clave % N);
}

void Camiones::crearLista(nodoL * &L ){
    L=NULL;
}

void Camiones::destruirLista(nodoL * &L){
    nodoL * aux = L;
    while (aux != NULL)
    {
    L = aux->sig;
    delete (aux);
    aux = L;
    }
    L = aux;
}

boolean Camiones::perteneceLista(nodoL * L, String mat){
    boolean existe = FALSE;
    while (!existe && L != NULL){
        if (L->info->getMatricula() == mat){
    existe = TRUE;
        } else{
    L = L->sig;
        }
    }
    return existe;
}


void Camiones:: insFrontEnLista(nodoL *&L, Camion * Cam){
    nodoL * aux = new nodoL;
    aux->info = Cam;
    aux->sig = L;
    L = aux;
}

Camion * Camiones::obtenerEnLista(nodoL * L, String mat){
    while (L->info->getMatricula() != mat){
    L = L->sig;
    }
    return (L->info);
}


////////////////////////////////////////////////////////////////////////////////////



Camiones :: Camiones(){
    for (int i =0;i<N;i++){
        crearLista(Hash[i]);
    }
}

boolean Camiones::member(String s){
    int cubeta = h(s);
    return perteneceLista (Hash[cubeta], s);
}

void Camiones::insert(Camion * cam){
    int cubeta = h(cam->getMatricula());
    insFrontEnLista (Hash[cubeta],  cam );
}


Camion * Camiones::find(String mat){
    int cubeta = h(mat);
    return obtenerEnLista (Hash[cubeta], mat);
}


void Camiones::cantCamionesCadaTipo(int &grande, int &simple, int &conremolque){
    grande=0;
    simple=0;
    conremolque=0;
    for(int i =0;i<N;i++){
        nodoL*actual = Hash[i];
        while (actual!=NULL) {
            char letra= actual->info->TipoCamion();
            switch (letra) {
                case 'R':
                    conremolque++;
                    break;
                case 'S':
                    simple++;
                    break;
                case 'G':
                    grande++;
                    break;
            }
            actual=actual->sig;
        }
    }
}
Iterador Camiones::listadoCamiones(){
    Iterador a;
    for (int i = 0; i < N; i++) {
        if (Hash[i] != NULL) {
            nodoL* actual = Hash[i];
            while (actual != NULL) {
                a.insert(actual->info);
               actual= actual->sig;
            }
        }
    }
    return a;
}


int Camiones::Cantidadmetroscubicos(){
    int contador = 0;
    for (int i = 0; i < N; i++) {
        nodoL* actual = Hash[i];  // Usamos un puntero auxiliar para recorrer la lista
        while (actual != NULL) {  // Mientras no lleguemos al final de la lista
            contador = actual->info->cantMetrosCubicos() + contador;  // Sumar los metros cúbicos
            actual = actual->sig;  // Avanzar al siguiente nodo
        }
    }
    return contador;
}



void Camiones::modificarViajes(nodoL * L,String mat, int v){
    boolean existe = FALSE;
    while (!existe && L != NULL){
        if (L->info->getMatricula() == mat){
            existe = TRUE;
            L->info->setViajesAnuales(v);
}else{
    L = L->sig;
}
    }
}


void Camiones::modificarViajesF(String mat,int v){
    int i =h(mat);
    modificarViajes(Hash[i], mat, v);
}

int Camiones::cantViajesSupFecha(Fecha a) {
    int contador = 0;
    for (int i = 0; i < N; i++) {
        nodoL* actual = Hash[i];
        while (actual != NULL) {
            if (actual->info->TipoCamion() == 'G') {
                Grande* camionGrande = dynamic_cast<Grande*>(actual->info);
                    if (a <  camionGrande->getfechaAdquirido()) {
                        contador++;
                }
            }
            actual = actual->sig;
        }
    }
    return contador;
}
