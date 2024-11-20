//
//  Fachada.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 16/11/24.
//

#include "Fachada.hpp"


CapaLogica::CapaLogica():camioneros(),camiones(){
}


void CapaLogica::Listadodetalladocamion(String matricula,Error &er) {
    if (camiones.member(matricula) == FALSE) {
        er=CAMION_NO_EXISTE;
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
                printf("Volumen: %f\n", g->getVolumen());
                Fecha aux(g->getfechaAdquirido());
                printf("Fecha adquirido: %d/%d/%d\n", aux.getDia(), aux.getMes(), aux.getAnio());
                break;
            }
            case 'R': {
                printf("Remolque\n");
                // Hacer un cast a la clase derivada 'Remolque'
                Remolque* r = dynamic_cast<Remolque*>(a);
                printf("Capacidad remolque: %d\n", r->getCapRemolque());
            
                break;
            }
            case 'S': {
                printf("Simple\n");
                // Hacer un cast a la clase derivada 'Simple'
                Simple* s = dynamic_cast<Simple*>(a);
           // Verifica que el cast fue exitoso
                printf("Departamento: ");
                String aux2 = s->getDepto();
                aux2.print();
             
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


void CapaLogica::nuevocamionero(Camionero * a,Error &er){
  if(camioneros.member(a->getCedula())){
      er = CAMIONERO_YA_REGISTRADO;
  } else{
  camioneros.insert(a);
 }
  }
void CapaLogica:: Listarcamionerosregistrados(){
    Iterador a;
    camioneros.ListarCamionerosRegistrados(a);
    a.proximoObjeto();
}


void CapaLogica:: nuevoCamion(Camion *a,int cedula,Error &r){
    String mat=a->getMatricula();
    
    if(camioneros.member(cedula)==FALSE){
        r=CAMIONERO_NO_REGISTRADO;
 }else{
     Camionero * aux  = camioneros.find(cedula);
     Camionero conductor = *aux;
     if(camiones.member(mat)){
         r=CAMION_YA_REGISTRADO;
}else{
    
    a->setCamionero(conductor);
    camiones.insert(a);
}
}
}
/*
void CapaLogica::nuevoCamion(String matr, String marc, int cantViajAnu, int cedula,Error &er) {
    if (camiones.member(matr)) {
        er = MATRICULA_REGISTRADA;
    } else {
        if (camioneros.member(cedula)) {
            Camionero *a = camioneros.find(cedula);
            Camionero conductor_temp = *a;
            Camion *aux = new Camion(matr, marc, cantViajAnu, conductor_temp);  
            camiones.insert(aux);
        } else {
            er=CAMIONERO_NO_REGISTRADO;
        }
    }
}
*/
void CapaLogica:: ListadoCamiones(){
 Iterador a = camiones.listadoCamiones();
    a.proximoObjeto();
}

int CapaLogica::Cantidadmetroscubicos(){
  return camiones.Cantidadmetroscubicos();
}
void CapaLogica:: CantidadCamionesCadaTipo(int &G, int &S, int &C){
    camiones.cantCamionesCadaTipo(G,S,C);
}


void CapaLogica:: CamioneroMayorCantTatuajes(Error &er){
    if(camioneros.estaVacio()){
        er = LISTA_CAMIONES_VACIA;
    }else{
        Camionero * a = camioneros.mayorCantTatuajesF();
        a->Print();
}
}

void CapaLogica::modificarCantviajes(String mat,int viajes,Error &err){

      if(camiones.member(mat)==FALSE){
          err=CAMION_NO_EXISTE;
      }else{
          camiones.modificarViajesF(mat,viajes);
      }
  }


int CapaLogica::cantViajesSupFecha(Fecha a){
    return camiones.cantViajesSupFecha(a);
}
