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


void Camiones::cantCamionesCadaTipo(int grande, int simple, int conremolque){
    grande=0;
    simple=0;
    conremolque=0;
    for(int i =0;i<N;i++){
        while (Hash[i]->sig!=NULL) {
            char letra= Hash[i]->info->TipoCamion();
            switch (letra) {
                case 'R':
                    conremolque++;
                    break;
                case 'S':
                    simple++;
                case 'G':
                    grande++;
                    break;
            }
            Hash[i]=Hash[i]->sig;
        }
    }
}
Iterador Camiones::listadoCamiones(){
    Iterador a;
    for(int i=0;i<N;i++){
        while(Hash[i]->sig!=NULL){
            a.insert(Hash[i]->info);
            Hash[i]=Hash[i]->sig;
        }
    }
    return a;
}


 int Camiones::Cantidadmetroscubicos(){
int contador = 0;
     for(int i=0;i<N;i++){
         while(Hash[i]->sig !=NULL){
             contador += Hash[i]->info->cantMetrosCubicos(); 
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


int Camiones::cantViajesSupFecha(nodoL *L,Fecha a){
    int contador=0;
    while(L!=NULL){
        if(L->info->TipoCamion()=='G'){
           // if(casteo a GRANDE y que se fije si es mayor que la fecha a )
            contador++;
        }
        L=L->sig;
    }
    return contador;
}
