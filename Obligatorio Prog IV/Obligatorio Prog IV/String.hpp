//
//  String.hpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 30/10/24.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include "boolean.hpp"
const int MAX = 80;
class String
{
private:
    char * cadena;
public:
    String();
    // constructor por defecto.
    String(char* s);
    // constructor común
    String(const String &); // constructor de copia
    ~String(); // destructor
    String operator=(const String &); // sobrecarga de asignación
    boolean operator==(String);
    // compara dos strings por igualdad.
    boolean operator< (String);
    // compara dos strings alfabéticamente
    String operator+ (String);
    // concatenación de strings.
    void scan();
    // lee un string desde la entrada estándar.
    void print();
    // muestra un string en la salida estándar
    boolean operator!=(String);
    
    int letrAnum ();
};
#endif /* String_hpp */
