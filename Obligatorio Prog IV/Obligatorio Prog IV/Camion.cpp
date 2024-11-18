//
//  Camion.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Camion.hpp"

Camion:: Camion(String a,String b, int c, Camionero d ): matricula(a),marca(b),conductor(d){
    cantViaAnu = c;
}

Camion::cargarCamionero(Camionero cond):conductor(cond){
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
Camionero Camion:: getCamionero():{
    return conductor;
}
