//
//  Camion.hpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#ifndef Camion_hpp
#define Camion_hpp

#include "String.hpp"
#include "Objeto.hpp"
#include "Camionero.hpp"

class Camion: public Objeto{
    private:
        String matricula;
        String marca;
        int cantViaAnu;
        Camionero maneja;

    public:
    Camion (String,String,int);
        String getMatricula();
        String getMarca();
        int getcantViajesAnuales();
        virtual char TipoCamion()=0;
        virtual float cantMetrosCubicos()=0;
};







#endif /* Camion_hpp */
