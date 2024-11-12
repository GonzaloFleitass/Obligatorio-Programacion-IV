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
class Camionero {
private:
    int ci;
    String nombre;
    int cantTatuajes;
    Fecha nac;
    
    
public :
    Camionero(int,String,int,Fecha);
    String getNombre();
    int getCedula();
    int getCantTatuajes();
    Fecha getFechNac();
};

#endif /* Camionero_hpp */
