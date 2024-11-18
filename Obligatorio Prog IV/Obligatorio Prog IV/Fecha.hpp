//
//  Fecha.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#ifndef Fecha_hpp
#define Fecha_hpp

#include <stdio.h>
#include "boolean.hpp"

class Fecha {
private:
    int dia, mes, anio;
    void incrementar ();
    // método privado auxiliar, incrementa 1 día la fecha
public:
    Fecha ();
    //Constructor por defecto
    Fecha (int, int, int);
    //Constructor común
    Fecha (const Fecha &); //Constructor de copia
    int getDia ();
    int getMes ();
    int getAnio ();
    //Selectoras del tipo fecha
    boolean operator< (Fecha);
    //Compara por menor 2 fechas
    boolean operator== (Fecha);
    void operator=(const Fecha &);

    //Compara por igualdad 2 fechas
    Fecha operator+ (int);
    //Devuelve la fecha incrementada en n dias
    Fecha operator++ ();
    //Operador prefijo de incremento
    Fecha operator++ (int);
    //Operador postfijo de incremento
    int operator- (Fecha);
    //Devuelve la diferencia en días entre 2 fechas
    boolean esValida ();
    void auxdiamas();
    boolean operator<= (Fecha f);
    //Validacion de la fecha
};


#endif /* Fecha_hpp */
