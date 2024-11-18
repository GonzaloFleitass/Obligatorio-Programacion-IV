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
        Camionero conductor;

    public:
    Camion (String,String,int,camionero);
        String getMatricula();
        String getMarca();
        int getcantViajesAnuales();
        Camionero getCamionero();
        virtual char TipoCamion()=0;
        virtual float cantMetrosCubicos()=0;
};







#endif /* Camion_hpp */
