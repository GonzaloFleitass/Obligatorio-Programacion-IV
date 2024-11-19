//
//  Fachada.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 16/11/24.
//

#ifndef Fachada_hpp
#define Fachada_hpp

#include "Camioneros.hpp"
#include "Camiones.hpp"
#include "Grande.hpp"
#include "Remolque.hpp"
#include "Simple.hpp"


class CapaLogica {
private:
    Camioneros camioneros;
    Camiones  camiones;

public:
    CapaLogica();
    void Insert();
    void ListadoCamiones(); //HACER
    void Listadodetalladocamion(String);
    void nuevocamionero(Camionero* );//FALTA AGREGARLE EL ERROR A CADA UNO
    void nuevoCamion(String, String , int ,int ); 
    void Listarcamionerosregistrados();
    int Cantidadmetroscubicos();
    int CantidadViajesanuales();
    void CantidadCamionesCadaTipo(int,int,int);
    Camionero datoscamioneromayorcanttatuajes();
    int cantcamionesregistrados();
    void CamioneroMayorCantTatuajes();
    void modificarCantviajes(String,int);
    int cantViajesSupFecha(Fecha);
};


#endif /* Fachada_hpp */
