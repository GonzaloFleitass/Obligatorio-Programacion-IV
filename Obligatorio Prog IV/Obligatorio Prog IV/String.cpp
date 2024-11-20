//
//  String.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 30/10/24.
//

#include "String.hpp"
#include <iostream>
#include <string.h>

using namespace std;

String::String() {
    cadena = new char[1];
    cadena[0] = '\0';
}

String::String(char* s) {
    long int largo = strlen(s);
    cadena = new char[largo + 1];
    strcpy(cadena, s);
}

String::String(const String &otro) {
    long int largo = strlen(otro.cadena);
    cadena = new char[largo + 1];
    strcpy(cadena, otro.cadena);
}

String::~String() {
    delete[] cadena;
}

String String::operator=(const String &otro) {
    if (this != &otro) {
        delete[] cadena;
        long int largo = strlen(otro.cadena);
        cadena = new char[largo + 1];
        strcpy(cadena, otro.cadena);
    }
    return (*this);
}

boolean String::operator==(String otro) {
    return boolean (strcmp(cadena, otro.cadena) == 0);
}

boolean String::operator<(String otro) {
    return boolean(strcmp(cadena, otro.cadena) < 0);
}

String String::operator+( String otro) {
    String aux;
    long int largo1 = strlen(otro.cadena);
    long int largo2 = strlen(otro.cadena);
    aux.cadena = new char[largo1 + largo2 + 1];
    strcpy(aux.cadena, cadena);
    strcat(aux.cadena, otro.cadena);
    return aux;
}

void String::scan() {
    char aux[MAX];
    char c = cin.get();
    int i = 0;
    while (c != '\n' && i < MAX - 1) {
        aux[i] = c;
        i++;
        c = cin.get();
    }
    aux[i] = '\0';
    delete[] cadena; // Liberar la memoria anterior
    cadena = new char[i + 1];
    strcpy(cadena, aux);
}

void String::print() {
    cout << cadena;
}

boolean String::operator!=(String s){
    return boolean (strcmp(cadena,s.cadena)!=0);
}

int String :: letrAnum (){
    int i=0, valor =0;
    while (cadena[i]!='\0'){
        valor =valor+cadena[i];
        i++;
    }
    return valor;
}
