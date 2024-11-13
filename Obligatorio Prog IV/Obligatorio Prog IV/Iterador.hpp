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


class Iterador {
    
public:
    
    struct nodo {
        Objeto * info;
        nodo * sig;
    }
    
    nodo *primero;
    nodo *actual;
    nodo *ultimo;
    
private:
    
}



#endif /* Iterador_hpp */
