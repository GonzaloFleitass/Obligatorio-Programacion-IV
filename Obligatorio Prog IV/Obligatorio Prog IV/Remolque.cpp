//
//  Remolque.cpp
//  Obligatorio Prog IV
//
//  Created by Miguel Lescano on 12/11/24.
//

#include "Remolque.hpp"


Remolque :: Remolque(String a,String b,int num1, int num2, Fecha fech, int num3): Grande(a, b, num1, num2, fech) {
    capRemolque = num3;
}

int Remolque:: getCapRemolque(){
    return capRemolque;
}

float Remolque :: cantMetrosCubicos() {
    float Num = Grande :: cantMetrosCubicos() +( capRemolque * getCantViajesAnuales());
    return Num;
}

String Rempolque:: tipoCamion(){
    return "R";
}
