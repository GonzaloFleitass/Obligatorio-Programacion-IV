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
        Camion (String,String,int,Camionero);
        String getMatricula();
        String getMarca();
        void setViajesAnuales(int);
        int getcantViajesAnuales();
        Camionero getCamionero();
        void setCamionero(Camionero);
        virtual void Print();
        virtual char TipoCamion();
        virtual float cantMetrosCubicos();
};







#endif /* Camion_hpp */
