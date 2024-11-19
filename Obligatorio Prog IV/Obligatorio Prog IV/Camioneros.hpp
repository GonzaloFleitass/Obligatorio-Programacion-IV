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
        Camionero * info;
        nodoL *hizq;
        nodoL *hder;
    };
    
    nodoL * abb;
    
    boolean perteneceEnArbol (nodoL *, long int);
    void insertEnArbol (nodoL * &, Camionero *);
    Camionero * obtenerEnArbol (nodoL *, long int);
    void cargarIterador (nodoL *, Iterador &);
    
    
public:
    Camioneros();
    boolean member(long int);
    void insert(Camionero *);
    Camionero * find(long int);
    void ListarCamionerosRegistrados(Iterador &);
    int cantCamionesRegistrados(nodoL* ); 
    Camionero * mayorCantTatuajes(nodoL*);
  
    
};
    


#endif /* Camioneros_hpp */
