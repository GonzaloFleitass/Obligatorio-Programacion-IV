//
//  Simple.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Simple.hpp"

Simple:: Simple (String a, String b, int c, String d): Camion(a, b, c){
    depto = d;
}

String Simple:: getDepto(){
    return depto;
}

String Simple::TipoCamion(){
    return "S"; 
}
float Simple:: getMetrosCubicos(){
    return getCantViajesAnuales() * 25;
}
