//
//  Fachada.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 16/11/24.
//

#include "Fachada.hpp"


Capalogica::CapaLogica():camioneros(),camiones(){
}


void CapaLogica::Listadodetalladocamion(String matricula) {
    if (camiones.member(matricula) == FALSE) {
        printf("ERROR: No existe camión con esa matrícula.\n");
    } else {
        camion a = camiones.find(matricula); 
        printf("Datos del camión:\n");

        printf("MATRÍCULA: ");
        a.print(a.getMatricula());  
        printf("\n");

        printf("MARCA: ");
        a.print(a.getMarca());  
        printf("\n");

        printf("Cantidad de Viajes Anuales: %d\n", a.getCantViajesAnuales());  

        printf("Tipo de Camión: ");
        switch(a.getTipoCamion()) {  
            case 'G':
                printf("Grande");
                break;
            case 'R':
                printf("Remolque");
                break;
            case 'S':
                printf("Simple");
                break;
            default:
                printf("Desconocido");
                break;
        }
        printf("\n");

        // Obtener el camionero
        camionero b = a.getConductor();
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
    printf("Camionero registrado exitosamente")
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
    camion aux(matr,marc,cantViajAnu,camioneros.find(cedula));
    camiones.insert(aux);
}else{
    printf("ERROR /Camionero no registrado")
 }
}
}

void CapaLogica:: listadoCamionesRegistrados(){
 Iterador a = camiones.listadoCamiones();
 a.print();
}

int CapaLogica::Cantidadmetroscubicos(){
  return camiones.Cantidadmetroscubicos();
}
void cantCamionesCadaTipo(int G, int S, int C){
    camiones.cantCamionesCadaTipo(G,S,C);
}
