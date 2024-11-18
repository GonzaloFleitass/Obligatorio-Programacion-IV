//
//  Iterador.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#ifndef Iterador_hpp
#define Iterador_hpp

#include <stdio.h>
#include "Objeto.hpp"
#include "boolean.hpp"

class Iterador {
    
private:
    
    struct nodo {
        Objeto * info;
        nodo * sig;
    };
    
    nodo *primero;
    nodo *actual;
    nodo *ultimo;
    
public:
    
    Iterador();
    boolean hayMasObj();
    void insert (Objeto * obj);
    void proximoObjeto();
};



#endif /* Iterador_hpp */
