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
  
    printf("    U   U  DDDD   EEEEE     \n");
        printf("    U   U  D   D  E         \n");
        printf("    U   U  D   D  EEEE       \n");
        printf("    U   U  D   D  E          \n");
        printf("    UUUUU  DDDD   EEEEE\n");


        printf("\n¡Bienvenido - Truck System\n");
    
    do {
        printf("\n-----------------------------------\n");
        printf("1) Registrar un nuevo camión\n");
        printf("2) Listar camiones registrados\n");
        printf("3) Listar detalles de un camión\n");
        printf("4) Registrar un nuevo camionero\n");
        printf("5) Listar camioneros registrados\n");
        printf("6) Calcular volumen total de la flota\n");
        printf("7) Modificar cantidad de viajes anuales de un camión\n");
        printf("8) Obtener cantidad de camiones por tipo\n");
        printf("9) Camionero con más tatuajes\n");
        printf("10) Cantidad de camiones grandes adquiridos después de una fecha\n");
        printf("0) Salir\n");
        printf("-----------------------------------\n");
        fflush(stdin);  
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                String mat, marca;
                int viajesAnuales, ci, tipoCamion;
                printf("Seleccionar tipo de camión a registrar:\n");
                printf("1) Simple\n2) Grande\n3) Con remolque\n");
                fflush(stdin);
                scanf("%d", &tipoCamion);

                switch (tipoCamion) {
                    case 1: {
                        Error er = SIN_ERROR;
                        String depto;
                        printf("Ingrese Matricula: ");
                        fflush(stdin);
                        mat.scan();
                        printf("Ingrese Marca: ");
                        fflush(stdin);
                        marca.scan();
                        printf("Ingrese cantidad de viajes anuales: ");
                        fflush(stdin);
                        scanf("%d", &viajesAnuales);
                        printf("Ingrese Departamento: ");
                        fflush(stdin);
                        depto.scan();
                        printf("Ingrese CI del conductor: ");
                        fflush(stdin);
                        scanf("%d", &ci);
                        Camionero cond;
                        Simple* sim = new Simple(mat, marca, viajesAnuales, depto, cond);
                        logica.nuevoCamion(sim, ci, er);
                        if (er != SIN_ERROR) {
                            printf("Error al registrar camión: ");
                            if (er == MATRICULA_REGISTRADA) {
                                printf("La matrícula ya fue registrada.\n");
                            } else {
                                printf("El conductor no fue registrado.\n");
                            }
                        } else {
                            printf("Camión registrado exitosamente.\n");
                        }
                        break;
                    }
                    case 2: {
                        int dia, mes, anio;
                        float volumen;
                        Error er = SIN_ERROR;
                        printf("Ingrese Matricula: ");
                        fflush(stdin);
                        mat.scan();
                        printf("Ingrese Marca: ");
                        fflush(stdin);
                        marca.scan();
                        printf("Ingrese cantidad de viajes anuales: ");
                        fflush(stdin);
                        scanf("%d", &viajesAnuales);
                        printf("Ingrese volumen: ");
                        fflush(stdin);
                        scanf("%f", &volumen);
                        printf("Ingrese fecha de adquisición (Día, Mes, Año): ");
                        fflush(stdin);
                        scanf("%d %d %d", &dia, &mes, &anio);
                        printf("Ingrese CI del conductor: ");
                        fflush(stdin);
                        scanf("%d", &ci);
                        Fecha adq(dia, mes, anio);
                        Camionero cond;
                        Grande* gran = new Grande(mat, marca, viajesAnuales, cond, volumen, adq);
                        logica.nuevoCamion(gran, ci, er);
                        if (er != SIN_ERROR) {
                            printf("Error al registrar camión: ");
                            if (er == MATRICULA_REGISTRADA) {
                                printf("La matrícula ya fue registrada.\n");
                            } else {
                                printf("El conductor no fue registrado.\n");
                            }
                        } else {
                            printf("Camión registrado exitosamente.\n");
                        }
                        break;
                    }
                    case 3: {
                        Error er = SIN_ERROR;
                        int capRemolque, dia, mes, anio;
                        float volumen;
                        printf("Ingrese Matricula: ");
                        fflush(stdin);
                        mat.scan();
                        printf("Ingrese Marca: ");
                        fflush(stdin);
                        marca.scan();
                        printf("Ingrese cantidad de viajes anuales: ");
                        fflush(stdin);
                        scanf("%d", &viajesAnuales);
                        printf("Ingrese volumen: ");
                        fflush(stdin);
                        scanf("%f", &volumen);
                        printf("Ingrese fecha de adquisición (Día, Mes, Año): ");
                        fflush(stdin);
                        scanf("%d %d %d", &dia, &mes, &anio);
                        printf("Ingrese capacidad de remolque: ");
                        fflush(stdin);
                        scanf("%d", &capRemolque);
                        printf("Ingrese CI del conductor: ");
                        fflush(stdin);
                        scanf("%d", &ci);
                        Fecha fech(dia, mes, anio);
                        Camionero cond;
                        Remolque * rem = new Remolque(mat, marca, viajesAnuales, cond, capRemolque, fech, capRemolque);
                        logica.nuevoCamion(rem, ci, er);
                        if (er != SIN_ERROR) {
                            printf("Error al registrar camión: ");
                            if (er == MATRICULA_REGISTRADA) {
                                printf("La matrícula ya fue registrada.\n");
                            } else {
                                printf("El conductor no fue registrado.\n");
                            }
                        } else {
                            printf("Camión registrado exitosamente.\n");
                        }
                        break;
                    }
                    default:
                        printf("Opción inválida.\n");
                        break;
                }
                break;
            }

            case 2:
                logica.ListadoCamiones();
                break;

            case 3: {
                String mat;
                Error er = SIN_ERROR;
                printf("Ingrese Matricula: ");
                fflush(stdin);
                mat.scan();
                logica.Listadodetalladocamion(mat, er);
                if (er != SIN_ERROR) {
                    printf("No existe camión con la matrícula proporcionada.\n");
                }
                break;
            }

            case 4: {
                int ci, cantTatu, dia, mes, anio;
                String nombre;
                Error er = SIN_ERROR;
                printf("Ingrese CI: ");
                fflush(stdin);
                scanf("%d", &ci);
                printf("Ingrese nombre: ");
                fflush(stdin);
                nombre.scan();
                printf("Ingrese cantidad de tatuajes: ");
                fflush(stdin);
                scanf("%d", &cantTatu);
                printf("Ingrese fecha de nacimiento (Día, Mes, Año): ");
                fflush(stdin);
                scanf("%d %d %d", &dia, &mes, &anio);
                Fecha nacimiento(dia, mes, anio);
                Camionero* c = new Camionero(ci, nombre, cantTatu, nacimiento);
                logica.nuevocamionero(c, er);
                if (er != SIN_ERROR) {
                    printf("Camionero ya registrado previamente.\n");
                } else {
                    printf("Camionero registrado exitosamente.\n");
                }
                break;
            }

            case 5:
                logica.Listarcamionerosregistrados();
                break;

            case 6:
                printf("Volumen total de la flota: %d\n", logica.Cantidadmetroscubicos());
                break;

            case 7: {
                String mat;
                int cantviajes;
                Error er = SIN_ERROR;
                printf("Ingrese la matrícula del camión: ");
                fflush(stdin);
                mat.scan();
                printf("Ingrese la cantidad de viajes anuales: ");
                fflush(stdin);
                scanf("%d", &cantviajes);
                logica.modificarCantviajes(mat, cantviajes, er);
                if (er != SIN_ERROR) {
                    printf("Camión no encontrado\n");
                } else {
                    printf("Cantidad de viajes anuales modificada exitosamente.\n");
                }
                break;
            }

            case 8: {
                int camsimple, camgrande, remolque;
                logica.CantidadCamionesCadaTipo(camgrande, camsimple, remolque);
                printf("Cantidad de camiones grandes: %d\n", camgrande);
                printf("Cantidad de camiones simples: %d\n", camsimple);
                printf("Cantidad de camiones con remolque: %d\n", remolque);
                break;
            }

            case 9: {
                Error er = SIN_ERROR;
                logica.CamioneroMayorCantTatuajes(er);
                if (er != SIN_ERROR) {
                    printf("No hay camioneros registrados.\n");
                }
                break;
            }

            case 10: {
                int dia, mes, anio;
                printf("Ingrese la fecha de inicio de registro (Día, Mes, Año): ");
                fflush(stdin);
                scanf("%d %d %d", &dia, &mes, &anio);
                Fecha fechini(dia, mes, anio);
                printf("La cantidad de camiones adquiridos después de esta fecha es: %d\n", logica.cantViajesSupFecha(fechini));
                break;
            }

            case 0:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while (opcion != 0);

    return 0;
}
