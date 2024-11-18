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
        switch(a->TipoCamion()) {
            case 'G':
                printf("Grande");
                printf("Volumen: %f",a->getVolumen());//casteo a camion GRANDE
                Fecha aux(a->getfechaAdquerido());//CASTEO CAMION GRANDE
                ("Fecha adquerido:%d/%d/%d",aux.getDia(),aux.getMes(),aux.getAnio());
                break;
            case 'R':
                printf("Remolque");
                printf("Capacidad remolque:%d",a->getCapRemolque()); //CASTEO A REMOLQUE
                break;
            case 'S':
                printf("Simple");
                printf("Departamento;");
                String aux2 = a->getDepto(); //CASTEO A SIMPLE
                aux2.print();
                break;
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


 void CapaLogica::nuevocamionero(Camionero a){
  if(camioneros.member(a.getCedula())){
     printf("ERROR /El camionero ya esta registrado");
  } else{
      printf("Camionero registrado exitosamente");
  camioneros.insert(a);
 }
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

void CapaLogica:: nuevoCamion(String matr, String marc, int cantViajAnu,int cedula){
 if(camiones.perteneceLista(matr)){
   printf("Matricula ya registrada");
 }else{
   if(camioneros.member(cedula)){
    Camion * aux(matr,marc,cantViajAnu,camioneros.find(cedula));
    camiones.insert(aux);
}else{
    printf("ERROR /Camionero no registrado");
 }
}
}

void CapaLogica:: Listarcamionerosregistrados(){
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
    if(camioneros==NULL){
        printf("ERROR /Lista vacia");
    }else{
     Camionero a = camioneros.mayorCantTatuajes();
    a.Print();
}
}

  void CapaLogica::modificarCantviajes(String mat,int viajes){

      if(camiones.member(mat)==FALSE){
          printf("ERROR /No existe camion");
      }else{
          camiones.modificarViajes(mat,viajes);
      }
  }


int cantViajesSupFecha(Fecha a){
    return camiones.cantViajesSupFecha(Fecha a);
}
