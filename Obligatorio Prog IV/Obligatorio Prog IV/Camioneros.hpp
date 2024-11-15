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
    
    private:
        struct nodoL {
        Camionero info;
        nodoL *hizq;
        nodoL *hder;
    };
    
    nodoL * abb;
    
    
    
    
    
    
public:
    Camioneros(Camionero);
    boolean member(int);
    void insert(Camionero);
    Camionero find(Camionero);
    void ListarCamionerosRegistradors();
    int cantCamionesRegistradors();
    Camionero mayorCantTatuajes();
    ~Camioneros();
};
    


#endif /* Camioneros_hpp */
