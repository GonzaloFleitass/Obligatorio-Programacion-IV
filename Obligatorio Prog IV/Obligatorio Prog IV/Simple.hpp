//
//  Simple.hpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#ifndef Simple_hpp
#define Simple_hpp

#include "String.hpp"
#include "Camion.hpp"


class Simple: public Camion {
    private:
            String depto;
    public:
            Simple(String,String,int,String,Camionero);
            String getDepto ();
            float getMetrosCubicos();
            char TipoCamion();
            void Print();
            float cantMetrosCubicos();
   
};


#endif /* Simple_hpp */
