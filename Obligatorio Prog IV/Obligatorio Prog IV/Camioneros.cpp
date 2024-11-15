//
//  Camioneros.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Camioneros.hpp"

Camioneros :: Camioneros(){
    abb->hizq=NULL;
    abb->hder = NULL;
}


boolean Camioneros::member(nodoL* nodo,int a){
    if(abb == NULL){
        return FALSE;
    }else{
        if(abb->info.getCedula() == a){
            return TRUE;
        }else{
            if(abb->info.getCedula()>a){
                return member(nodo->hizq, a);
            }else{
                return member(nodo->hder,a);
            }
        }
        
    }
    return FALSE;
}

void Camioneros:: insert(Camionero a){
    if(abb==NULL){
                abb -> info = a;
                abb-> hizq = NULL;
                abb-> hder = NULL;
    }else{
    }
}

