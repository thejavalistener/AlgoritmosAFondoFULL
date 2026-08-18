
#include "principal.hpp"

#include <cassert>
#include <iostream>

#include "biblioteca/funciones/files.hpp"
#include "biblioteca/funciones/millis.hpp"
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/Fecha.hpp"
#include "biblioteca/tads/parte1/Timer.hpp"
#include "biblioteca/tads/parte2/List.hpp"
#include "biblioteca/tads/parte2/Queue.hpp"
#include "biblioteca/tads/parte2/Stack.hpp"
#include "biblioteca/tads/parte2/Array.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::to_string;


/*
    Dado el archivo FRASES.txt, se pide desarrollar un programa interactivo donde el usuario
    ingresa el anio, el autor y podrá ver las frases de ese anio y ese autor. Por ejemplo:

    [ANIOS]
    1. 1994
    2. 1999
    3. 2003
    4. 2019
    > 2

    [AUTORES DISPONIBLES (1999)]
    1. Corvalan, M.
    2. Gonzalez, A.
    3. Perez, R.
    > 1

    [FRASES (Corvalan, M., 1999)]
    La vida es muy linda.
    Los arboles lo son todo.
    Cuando un ave vuela, dejala volar.

    NOTA: Puede usar la funcion readLine, como se muestra en main.
*/

int main()
{
    FILE* f = fopen("FRASES.txt","r+b");

    long long b;
    string* fields;
    int len;
    while( readLine(f,fields,len,'|') )
    {
        for(int i=0; i<len; i++)
        {
            cout << fields[i] << ", ";
        }

        cout << endl;
    }

    fclose(f);
    return 0;
}
