//
//  Camion.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Camion.hpp"

Camion:: Camion(String a,String b, int c ): matricula(a),marca(b){
    cantViaAnu = c;
}

String Camion::getMarca(){
    return marca;
}

String Camion::getMatricula(){
    return matricula;
}

int Camion::getcantViajesAnuales(){
    return cantViaAnu;
}
