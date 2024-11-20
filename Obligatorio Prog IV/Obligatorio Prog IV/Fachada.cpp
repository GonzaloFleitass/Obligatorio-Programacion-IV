//
//  Fachada.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 16/11/24.
//

#include "Fachada.hpp"


CapaLogica::CapaLogica():camioneros(),camiones(){
}


void CapaLogica::Listadodetalladocamion(String matricula) {
    if (camiones.member(matricula) == FALSE) {
        printf("ERROR: No existe camión con esa matrícula.\n");
    } else {
        Camion * a = camiones.find(matricula);
        printf("Datos del camión:\n");

        printf("MATRÍCULA: ");
        a->getMatricula().print();
        printf("\n");

        printf("MARCA: ");
        a->getMarca().print();
        printf("\n");

        printf("Cantidad de Viajes Anuales: %d\n", a->getcantViajesAnuales());

        printf("Tipo de Camión: ");
        switch (a->TipoCamion()) {
            case 'G': {
                printf("Grande\n");
                // Hacer un cast a la clase derivada 'Grande'
                Grande* g = dynamic_cast<Grande*>(a);
                if (g) {  // Verifica que el cast fue exitoso
                    printf("Volumen: %f\n", g->getVolumen());
                    Fecha aux(g->getfechaAdquirido());
                    printf("Fecha adquirido: %d/%d/%d\n", aux.getDia(), aux.getMes(), aux.getAnio());
                } else {
                    printf("Error: el objeto no es de tipo Grande.\n");
                }
                break;
            }
            case 'R': {
                printf("Remolque\n");
                // Hacer un cast a la clase derivada 'Remolque'
                Remolque* r = dynamic_cast<Remolque*>(a);
                if (r) {  // Verifica que el cast fue exitoso
                    printf("Capacidad remolque: %d\n", r->getCapRemolque());
                } else {
                    printf("Error: el objeto no es de tipo Remolque.\n");
                }
                break;
            }
            case 'S': {
                printf("Simple\n");
                // Hacer un cast a la clase derivada 'Simple'
                Simple* s = dynamic_cast<Simple*>(a);
                if (s) {  // Verifica que el cast fue exitoso
                    printf("Departamento: ");
                    String aux2 = s->getDepto();
                    aux2.print();
                } else {
                    printf("Error: el objeto no es de tipo Simple.\n");
                }
                break;
            }
        }

        printf("\n");

        // Obtener el camionero
        Camionero b = a->getCamionero();
        printf("Datos del Conductor:\n");

        printf("Nombre: ");
        String nombreConductor = b.getNombre(); 
        nombreConductor.print();  
        printf("\n");
    }
}


 void CapaLogica::nuevocamionero(Camionero * a){
  if(camioneros.member(a->getCedula())){
     printf("ERROR /El camionero ya esta registrado");
  } else{
      printf("Camionero registrado exitosamente");
  camioneros.insert(a);
 }
  }
void CapaLogica:: Listarcamionerosregistrados(){
    Iterador a;
    camioneros.ListarCamionerosRegistrados(a);
}

/*
void CapaLogica:: nuevoCamion(Camion *a,int cedula){
 if(camiones.perteneceLista(a->getMatricula())){
   printf("Matricula ya registrada");
 }else{
   if(camioneros.member(a->getConductor)){
    camiones.insert(a);
}else{
    printf("ERROR /Camionero no registrado")
}
}
}
*/
void CapaLogica::nuevoCamion(String matr, String marc, int cantViajAnu, int cedula) {
    if (camiones.member(matr)) {
        printf("Matrícula ya registrada\n");
    } else {
        if (camioneros.member(cedula)) {
            Camionero *a = camioneros.find(cedula);
            Camionero conductor_temp = *a;
            Camion *aux = new Camion(matr, marc, cantViajAnu, conductor_temp);  
            camiones.insert(aux);
        } else {
            printf("ERROR: Camionero no registrado\n");
        }
    }
}

void CapaLogica:: ListadoCamiones(){
 Iterador a = camiones.listadoCamiones();
    a.proximoObjeto();
}

int CapaLogica::Cantidadmetroscubicos(){
  return camiones.Cantidadmetroscubicos();
}
void CapaLogica:: CantidadCamionesCadaTipo(int G, int S, int C){
    camiones.cantCamionesCadaTipo(G,S,C);
}


void CapaLogica:: CamioneroMayorCantTatuajes(){
    if(camioneros.estaVacio()){
        printf("ERROR /Lista vacia");
    }else{
        Camionero * a = camioneros.mayorCantTatuajesF();
        a->Print();
}
}

  void CapaLogica::modificarCantviajes(String mat,int viajes){

      if(camiones.member(mat)==FALSE){
          printf("ERROR /No existe camion");
      }else{
          camiones.modificarViajesF(mat,viajes);
      }
  }


int CapaLogica::cantViajesSupFecha(Fecha a){
    return camiones.cantViajesSupFecha(a);
}
