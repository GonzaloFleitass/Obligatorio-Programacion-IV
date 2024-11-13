//
//  Camiones.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 13/11/24.
//

#ifndef Camiones_hpp
#define Camiones_hpp

#include <stdio.h>
#include "Camion.hpp"
#include "Iterador.hpp"
#endif /* Camiones_hpp */

const int N = 100;

class Camiones {
    
private:
    struct nodoL{
        Camion * info;
        nodoL *sig;
    };

    
    typedef nodoL Hash[N];
    
public:
    Camiones(Hash);
    boolean member(String);
    void insert(Camion);
    Camion find(String);
    Iterador listadoCamiones();
    int cantViajesAnuales();
    float cantMetrosCubicos();
    void cantCamionesCadaTipo();
};
