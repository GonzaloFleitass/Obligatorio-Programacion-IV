//
//  Fecha.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 12/11/24.
//

#include "Fecha.hpp"


Fecha :: Fecha (){
    dia=1;
    mes=01;
    anio=2000;
}
Fecha :: Fecha(int d,int m,int a){
    dia=d;
    mes=m;
    anio=a;
}
Fecha :: Fecha(const Fecha &copia){
    dia=copia.dia;
    mes=copia.mes;
    anio=copia.anio;
}
int Fecha :: getDia(){
    return dia;
}
int Fecha :: getMes (){
    return mes;
}
int Fecha:: getAnio (){
    return anio;
}
boolean Fecha :: operator< (Fecha f){
    boolean menor = FALSE;
    if(anio < f.anio){
        menor = TRUE;
    }else{
        if(anio==f.anio){
            if(mes < f.mes)
                menor=TRUE;
            else
                if(mes ==f.mes){
                    if(dia < f.dia){
                        menor=TRUE;
                    }
                }
        }
    }
    return menor;
}

boolean Fecha :: operator<= (Fecha f){
    boolean menorigual=FALSE;
    if(anio < f.anio || anio==f.anio){
        menorigual = TRUE;
    }else{
        if(anio==f.anio){
            if(mes < f.mes || mes== f.mes)
                menorigual=TRUE;
            else
                if(mes ==f.mes){
                    if(dia < f.dia || dia==f.dia){
                        menorigual=TRUE;
                    }
                }
        }}
    return menorigual;
}

boolean Fecha :: operator== (Fecha f){
boolean iguales =TRUE;
    if(anio != f.anio){
        iguales=FALSE;
     }else
         if(mes!=f.mes){
             iguales=FALSE;
         }  else
             if (dia!= f.dia){
                   iguales=FALSE;
                
            }
     return iguales;
    }

void Fecha :: auxdiamas(){
    if(dia== 31 && mes==12){
        dia=1;
        mes=1;
        anio++;
    } else{
        switch (mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(dia==31){
                    dia=1;
                    mes++;
                }  else
                    dia++;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(dia==30){
                    dia=1;
                    mes++;
                }  else
                    dia++;
                break;
            case 2: int diafeb=28;
                if((anio % 4 == 0 && anio % 100 !=0) || anio % 400 ==0)
                    diafeb=29;
                if(dia==diafeb){
                    dia=1;
                    mes++;
                }   else
                    dia++;
        }}}

Fecha Fecha ::  operator++(){
    auxdiamas();
    return (*this);
        
}
Fecha Fecha:: operator++ (int i){
    Fecha aux=*this;
    auxdiamas();
    return aux;
}

int Fecha:: operator- (Fecha f){
    Fecha aux;
    int signo=1;
    int cant=1;
    if(*this < f){
        for(aux=*this; aux< f; aux++)
            cant++;
    }else{
            signo=-1;
            for(aux=f;aux<*this; aux++){
                cant++;
            }
        }
    return (cant*signo);
}

boolean Fecha :: esValida (){
    boolean esvalida=TRUE;
    if (anio > 2024){
        esvalida=FALSE;
    }else{
        if(mes>12 || mes < 0)
            esvalida=FALSE;
        else
            switch (mes) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if(dia>31||dia<0)
                        esvalida=FALSE;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if(dia>30||dia<0){
                        esvalida=FALSE;
                        break;
                    case 2: int diafeb=28;
                        if((anio % 4 == 0 && anio % 100 !=0) || anio % 400 ==0)
                            diafeb=29;
                        if(dia>diafeb||dia<0){
                            esvalida=TRUE;
                        }
                        break;
                    }}
    }return esvalida;
}



