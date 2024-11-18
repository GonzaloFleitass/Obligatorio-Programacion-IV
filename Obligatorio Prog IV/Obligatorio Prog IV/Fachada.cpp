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
  camioneros.insert(a);
 }

void CapaLogica:: nuevoCamion(Camion a){
 camiones.insert(a);
}
