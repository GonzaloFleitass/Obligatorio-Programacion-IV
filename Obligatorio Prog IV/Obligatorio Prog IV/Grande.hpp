//
//  Grande.hpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#ifndef Grande_hpp
#define Grande_hpp

#include "String.hpp"
#include "Camion.hpp"
#include "Fecha.hpp"

class Grande: public Camion {
    private:
            int volumen;
            Fecha fechaAdquirido;
    public:
    Grande (String,String,int,int,Fecha);
    int getVolumen();
    Fecha getfechaAdquirido();
    
};





#endif /* Grande_hpp */
