//
//  main.cpp
//  Obligatorio Prog IV
//
//  Created by Gonzalo Fleitas on 30/10/24.
//

#include <iostream>
#include "Fachada.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    CapaLogica f;
    String A,B;
    int num=2322,num2=4252;
    f.nuevoCamion(A, B, num, num2);
    f.Listadodetalladocamion(A);
}
