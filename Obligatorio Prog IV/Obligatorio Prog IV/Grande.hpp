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
            float volumen;
            Fecha fechaAdquirido;
    public:
            Grande(String,String,int,Camionero,float,Fecha);
            float getVolumen();
            Fecha getfechaAdquirido();
            float cantMetrosCubicos();
            char TipoCamion();
            void Print();
    
};





#endif /* Grande_hpp */
