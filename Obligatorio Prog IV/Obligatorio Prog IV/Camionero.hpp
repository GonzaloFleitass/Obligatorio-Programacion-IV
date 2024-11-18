//
//  Camionero.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#ifndef Camionero_hpp
#define Camionero_hpp

#include <stdio.h>
#include "String.hpp"
#include "Fecha.hpp"
#include "Objeto.hpp"


class Camionero: public Objeto {
private:
    int ci;
    String nombre;
    int cantTatuajes;
    Fecha nac;
    
    
public :
    Camionero();
    Camionero(int,String,int,Fecha);
    Camionero(const Camionero&);
    void setCi(int);
    void setNombre(String);
    void setcantTatuajes(int);
    void setFecha(Fecha);
    String getNombre();
    int getCedula();
    int getCantTatuajes();
    Fecha getFechNac();
    virtual void Print();
};

#endif /* Camionero_hpp */
