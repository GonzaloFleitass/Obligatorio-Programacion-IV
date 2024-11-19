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
        String mat,marca,nombre;
        int viajesAnuales,ci,cantTatu,dia,mes,anio;
        Fecha nacimiento;
        switch (opcion) {
            case 1:
               
                printf("Ingrese Matricula:");
                mat.scan();
                printf("Ingrese Marca:");
                marca.scan();
                printf("Ingrese cantidad viajes anuales:");
                scanf("%d",&viajesAnuales);
                printf("Ingrese Ci de conductor:");
                scanf("%d",&ci);
                logica.nuevoCamion(mat, marca, viajesAnuales, ci);
                break;
            case 2:
                logica.ListadoCamiones();
                break;
            case 3:
                printf("Ingrese Matricula:");
                mat.scan();
                logica.Listadodetalladocamion(mat);
                break;
            case 4:
                printf("Ingrese Ci:");
                scanf("%d",&ci);
                printf("Ingrese nombre");
                nombre.scan();
                printf("Ingrese cantidad de tatuajes");
                scanf("%d",&cantTatu);
                printf("Ingrese Fecha de Nacimiento:");
                
                logica.nuevocamionero(<#Camionero *#>);
                break;
            case 5:
                logica.Listarcamionerosregistrados();
                break;
            case 6:
                logica.Cantidadmetroscubicos();
                break;
            case 7:
                logica.modificarCantviajes(<#String#>, <#int#>);
                break;
            case 8:
                logica.CantidadCamionesCadaTipo(<#int#>, <#int#>, <#int#>);
                break;
            case 9:
                logica.CamioneroMayorCantTatuajes();
                break;
            case 10:
                logica.cantViajesSupFecha(<#Fecha#>);
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida, intente nuevamente.\n");
        }
    } while (opcion != 0);
    
    return 0;
}
