/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"
int datosIngresados(char primeraPalabra, char segundaPalabra)
{
    int i;
    int len;
    char informacion[41];

    strcat(informacion,segundaPalabra);
    strcat(informacion,", ");
    strcat(informacion,primeraPalabra);

    strlwr(informacion);

    len=strlen(informacion);

    for(i=0; i<len; i++)
    {
        if(i==0)
        {
            informacion[i]=toupper(informacion[i]);

        }
        else
        {
            if(informacion[i]==' ')
            {
                informacion[i+1]=toupper(informacion[i+1]);

            }
        }
    }
    return informacion;
}
*/
