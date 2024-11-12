//
//  Camioneros.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#ifndef Camioneros_hpp
#define Camioneros_hpp
#include <stdio.h>
#include "Camionero.hpp"


class Camioneros{
    
    public:
    typedef struct nodoL {
        Camionero info;
        nodoL *hizq;
        nodoL *hder;
    }nodo;
    
    nodo * abb;
    
private:
    Camioneros()
    
};
    


#endif /* Camioneros_hpp */
