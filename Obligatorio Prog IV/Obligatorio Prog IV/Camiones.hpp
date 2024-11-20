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

    nodoL  * Hash[N];
    
    int h (String);
   // función de dispersión
   void crearLista (nodoL * &);
   // crea una lista vacía
   void destruirLista (nodoL * &);
   // destruye todo el contenido de la lista
   boolean perteneceLista (nodoL *, String);
   // indica si existe un camion con el número ingresado
   void insFrontEnLista (nodoL * &, Camion *);
   // inserta el camion  al principio de la lista
   Camion * obtenerEnLista (nodoL * L, String mat);
    
public:
    Camiones();
    boolean member(String);
    void insert(Camion *);
    Camion * find(String);
    Iterador listadoCamiones();
    virtual void cantCamionesCadaTipo(int&, int&, int&);
    int Cantidadmetroscubicos();
    // obtiene el camion con la matricula ingresada
    void modificarViajes(nodoL *,String, int);
    void modificarViajesF(String, int);
    virtual int cantViajesSupFecha(Fecha);
};
