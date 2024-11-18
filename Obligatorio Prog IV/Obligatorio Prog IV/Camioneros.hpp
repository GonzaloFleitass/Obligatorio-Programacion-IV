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
#include "Iterador.hpp"

class Camioneros{
    
    private:
        struct nodoL {
        Camionero info;
        nodoL *hizq;
        nodoL *hder;
    };
    
    nodoL * abb;
    
    
public:
    Camioneros();
    boolean member(nodoL*, int);
    void insert(nodoL*,Camionero);
    Camionero find(nodoL *,int);
    Iterador ListarCamionerosRegistrados(nodoL *); 
    int cantCamionesRegistrados(nodoL* ); 
    Camionero mayorCantTatuajes(nodoL*);
    ~Camioneros();
    
};
    


#endif /* Camioneros_hpp */
