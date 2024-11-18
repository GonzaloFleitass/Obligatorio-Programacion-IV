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
        Camion CargarCamionero(camionero);
        void print();
        virtual char TipoCamion()=0;
        virtual float cantMetrosCubicos()=0;
};







#endif /* Camion_hpp */
