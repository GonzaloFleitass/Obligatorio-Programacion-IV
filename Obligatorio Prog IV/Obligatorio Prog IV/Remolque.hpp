//
//  Remolque.hpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#ifndef Remolque_hpp
#define Remolque_hpp
#include "String.hpp"
#include "Camion.hpp"
#include "Grande.hpp"

class Remolque : public Grande {
    private:
            int capRemolque;
    public:
            Remolque(String,String,int,Camionero,int,Fecha,int);
            int getCapRemolque();
            char TipoCamion();
            float cantMetrosCubicos();
            void Print();
};







#endif /* Remolque_hpp */
