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


class CapaLogica {
private:
    Camioneros camioneros;
    Camiones camiones;

public:
    CapaLogica();
    void Insert();
    void Listadodetalladocamion(String);
    void nuevocamionero(Camionero);
    void Listarcamionerosregistrados();
    int Cantidadmetroscubicos();
    int CantidadViajesanuales();
    int cantidadcamionescadatipo();
    Camionero datoscamioneromayorcanttatuajes();
    int cantcamionesregistrados();
};


#endif /* Fachada_hpp */
