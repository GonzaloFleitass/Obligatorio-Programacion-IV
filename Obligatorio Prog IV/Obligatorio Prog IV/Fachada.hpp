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
#include "TipoError.hpp"

class CapaLogica {
private:
    Camioneros camioneros;
    Camiones  camiones;

public:
    CapaLogica();
    void Insert();
    void ListadoCamiones();
    void Listadodetalladocamion(String,Error&);
    void nuevocamionero(Camionero* , Error&);
    void nuevoCamion(Camion *,int ,Error& );
    void Listarcamionerosregistrados();
    int Cantidadmetroscubicos();
    int CantidadViajesanuales();
    void CantidadCamionesCadaTipo(int&,int&,int&);
    Camionero datoscamioneromayorcanttatuajes();
    int cantcamionesregistrados();
    void CamioneroMayorCantTatuajes(Error&);
    void modificarCantviajes(String,int,Error&);
    int cantViajesSupFecha(Fecha);
};


#endif /* Fachada_hpp */
