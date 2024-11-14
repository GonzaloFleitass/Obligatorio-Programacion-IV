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
    while (!existe && L != NULL)
        if (L->info->getMatricula() == mat)
    existe = TRUE;
    else
    L = L->sig;
    return existe;
}


void Camiones:: insFrontEnLista(nodoL *&L, Camion * Cam){
    nodoL * aux = new nodoL;
    aux->info = Cam;
    aux->sig = L;
    L = aux;
}

Camion * Camiones::obtenerEnLista(nodoL * L, String mat){
    while (L->info->getMatricula() != mat)
    L = L->sig;
    return (L->info);
}


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
