#include "Fachada.hpp"
#include "Camion.hpp"
#include "Camionero.hpp"
#include "String.hpp"
#include "Fecha.hpp"
#include "Grande.hpp"
#include "Remolque.hpp"
#include "Simple.hpp"
#include "Iterador.hpp"


int main() {
    CapaLogica logica;
    
    int opcion;
    do {
        printf("\n1) Registrar un nuevo camión\n");
        printf("2) Listar camiones registrados\n");
        printf("3) Listar detalles de un camión\n");
        printf("4) Registrar un nuevo camionero\n");
        printf("5) Listar camioneros registrados\n");
        printf("6) Calcular volumen total de la flota\n");
        printf("7) Modificar cantidad de viajes anuales de un camión\n");
        printf("8) Obtener cantidad de camiones por tipo\n");
        printf("9) Camionero con más tatuajes\n");
        printf("10) Camiones grandes adquiridos después de una fecha\n");
        printf("0) Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);


        switch (opcion) {
            case 1:{
                String mat,marca;
                Error er=SIN_ERROR;
                int viajesAnuales,ci;
                printf("Ingrese Matricula:");
                fflush(stdin);
                mat.scan();
                printf("Ingrese Marca:");
                fflush(stdin);
                marca.scan();
                printf("Ingrese cantidad viajes anuales:");
                fflush(stdin);
                scanf("%d",&viajesAnuales);
                printf("Ingrese Ci de conductor:");
                fflush(stdin);
                scanf("%d",&ci);
                logica.nuevoCamion(mat, marca, viajesAnuales, ci,er);
                if(er!=SIN_ERROR){
                    if(er==MATRICULA_REGISTRADA){
                        printf("La matricula ya fue registrada");
                    }else{
                        printf("El conductor no fue registrado");
                    }
                }
                break;
            }
            case 2:
                logica.ListadoCamiones();
                break;
            case 3:{
                String mat,nombre;
                Error er=SIN_ERROR;
                printf("Ingrese Matricula:");
                fflush(stdin);
                mat.scan();
                logica.Listadodetalladocamion(mat,er);
                if(er!=SIN_ERROR){
                    printf("No existe camion");
                }
                break;
            }
            case 4:{
                int ci,cantTatu,dia,mes,anio;
                String nombre;
                Error er= SIN_ERROR;
                printf("Ingrese Ci:");
                fflush(stdin);
                scanf("%d",&ci);
                printf("Ingrese nombre");
                fflush(stdin);
                nombre.scan();
                printf("Ingrese cantidad de tatuajes");
                fflush(stdin);
                scanf("%d",&cantTatu);
                printf("Ingrese Fecha de Nacimiento:");
                fflush(stdin);
                printf("Dia:");
                fflush(stdin);
                scanf("%d",&dia);
                fflush(stdin);
                printf("Mes:");
                fflush(stdin);
                scanf("%d",&mes);
                fflush(stdin);
                printf("Anio:");
                fflush(stdin);
                scanf("%d",&anio);
                Fecha nacimiento(dia, mes, anio);
                Camionero * c = new Camionero(ci, nombre, cantTatu, nacimiento);
                logica.nuevocamionero(c,er);
                if(er!=SIN_ERROR){
                    printf("Camionero ya registrado previamente");
                }else{
                    printf("Camionero registrado exitosamente");
                }
                break;
            }
            case 5:
                logica.Listarcamionerosregistrados();
                break;
            case 6:
                logica.Cantidadmetroscubicos();
                break;
            case 7:{
                String mat;
                Error er = SIN_ERROR;
                int cantviajes;
                printf("Ingrese la matricula del camion\n");
                fflush(stdin);
                mat.scan();
                printf("Ingrese la cantidad de viajes anuales\n");
                fflush(stdin);
                scanf("%d", &cantviajes );
                logica.modificarCantviajes(mat, cantviajes,er);
                if(er !=SIN_ERROR ){
                    printf("Matricula no existe");
                }else{
                    printf("Viajes modificados");
                }
                // modificar el error
                break;}
            case 8:{
                int camsimple,camgrande,remolque;
                logica.CantidadCamionesCadaTipo(camgrande, camsimple, remolque);
                printf("La cantidad de camiones grandes es %d\n," ,camgrande);
                printf("La cantidad de camiones simples es %d\n," ,camsimple);
                printf("La cantidad de camiones remolque es %d\n," ,remolque);
                break;}
            case 9:{
                Error er=SIN_ERROR;
                logica.CamioneroMayorCantTatuajes(er);
                if(er!=SIN_ERROR){
                    printf("No hay camioneros registrados");
                }
        }
                break;
            case 10:{
                int dia,mes,anio;
                printf("Ingrese la fecha de inicio de registro\n ");
                printf("Ingrese dia:\n");
                fflush(stdin);
                scanf("%d",&dia);
                printf("Ingrese mes:\n");
                fflush(stdin);
                scanf("%d",&mes);
                printf("Ingrese anio:\n");
                fflush(stdin);
                scanf("%d",&anio);
                Fecha fechini (dia, mes, anio);
                
                logica.cantViajesSupFecha(fechini);
                break;}
            case 0:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opción no válida, intente nuevamente.\n");
        }
    } while (opcion != 0);
    
    return 0;
}
