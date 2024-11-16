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
    Camioneros();
    boolean member(nodoL*, int);
    void insert(nodoL*,Camionero);//REVISAR
    Camionero find(nodoL *,int);//REVISAR
    void ListarCamionerosRegistradors(); //HACER
    int cantCamionesRegistrados(); //HACER
    Camionero mayorCantTatuajes(nodoL*);//REVISAR
    ~Camioneros();
};
    


#endif /* Camioneros_hpp */
