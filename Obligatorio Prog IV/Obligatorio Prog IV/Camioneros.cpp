//
//  Camioneros.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Camioneros.hpp"

Camioneros :: Camioneros(){
    abb = NULL;
}

//REVISAR
boolean Camioneros::member(nodoL* nodo,int a){
    if(nodo == NULL){
        return FALSE;
    }else{
        if(nodo->info.getCedula() == a){
            return TRUE;
        }else{
            if(nodo->info.getCedula()>a){
                return member(nodo->hizq, a);
            }else{
                return member(nodo->hder,a);
            }
        }
        
    }
    return FALSE;
}


//REVISAR
void Camioneros:: insert(nodoL* abb, Camionero a){
    if(abb==NULL){
                abb =new nodoL;
                abb -> info = a;
                abb-> hizq = NULL;
                abb-> hder = NULL;
    }else{
        if(a.getCedula()< abb->info.getCedula()){
            insert(abb->hizq,a);
        }else
            insert(abb->hder,a);
    }
}

//REVISAR
Camionero Camioneros:: find(nodoL* abb,int a){
 
        if(abb->info.getCedula() == a){
            return abb->info;
        }else{
            if(abb->info.getCedula()>a){
                find(abb->hizq,a);
            }else{
                    find(abb->hder,a);
            }
        }
    return abb->info;
    }


//REVISAR
Camionero Camioneros::mayorCantTatuajes(nodoL *abb) {
   
    Camionero mayor = abb->info;

    if (abb->hizq != NULL) {
        Camionero mayorIzq =  mayorCantTatuajes(abb->hizq);
        if (mayorIzq.getCantTatuajes() > mayor.getCantTatuajes()) {
            mayor = mayorIzq;
        }
    }

    if (abb->hder != NULL) {
        Camionero mayorDer = mayorCantTatuajes(abb->hder);
        if (mayorDer.getCantTatuajes() > mayor.getCantTatuajes()) {
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


Iterador Camioneros::ListarCamionerosRegistrados(nodoL *abb){
    Iterador a;

        if(abb==NULL){
            return a;
}else{
    a.insert(abb->info);
ListarCamionerosRegistrados(abb->hizq);
ListarCamionerosRegistrados(abb->hder);
        }
return a;
    }
    
