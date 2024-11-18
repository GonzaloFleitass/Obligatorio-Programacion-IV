//
//  Fachada.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 16/11/24.
//

#include "Fachada.hpp"


Capalogica::CapaLogica():camioneros(),camiones(){
}


 void CapaLogica::Listadodetalladocamion(String matricula){
   camion a = camiones.find(matricula);
   Printf("Datos del camion:");
   Printf("MATRICULA:");
   a.print(a.getMatricula);
    Printf("MARCA:");
    a.print(a.getMarca());
   Printf("Cantidad De Viajes Anuales:%d",a.getCantViajesAnuales());
   printf("Tipo de Camion:")
     switch(a.TipoCamion){
     case 'G':
           printf("Grande");
         break;
     case 'R':
         printf("Remolque");
         break;
     case 'S':
          printf("Simple");
         break;
   }
   camionero b = a.getConductor();
   printf("Datos del Conductor:\nNombre:")
    String a = b.getNombre()
   a.print();
   
   
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
