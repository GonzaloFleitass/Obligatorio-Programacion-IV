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
    
public:
    
    struct nodo {
        Objeto * info;
        nodo * sig;
    };
    
    nodo *primero;
    nodo *actual;
    nodo *ultimo;
    
private:
    
    Iterador();
    boolean hayMasObj();
    void insert (Objeto * info);
    
    
    
};



#endif /* Iterador_hpp */