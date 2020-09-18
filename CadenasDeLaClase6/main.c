/*
Nicolas Viñas ejersicio de la clase 6
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*nombre: gERman ezequiel
apellido: scarafilo

apellidoNombre: Scarafilo, German Ezequiel*/




int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoNombre[42];
    char sumaNombre;
    int i;
    int len;


    printf("ingrese su nombre ");
    fflush(stdin);
    gets(nombre);
    printf("ingrese su apellido ");
    fflush(stdin);
    gets(apellido);

    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,"  ");
    strcat(apellidoNombre,nombre);

    strlwr(apellidoNombre);

    len=strlen(apellidoNombre);

    for(i=0; i<len; i++)
    {
        if(i==0)
            {
                apellidoNombre[i]=toupper(apellidoNombre[i]);
            }
        else
            {
                if(apellidoNombre[i]==' ')
                    {
                        apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
                    }
            }
    }



    puts(apellidoNombre);

    return 0;
}








//scanf("%[^\n]", palabra);
    //fgets(palabra,15,stdin);
    //len = strlen(palabra);
    //puts(palabra);
    //printf("%d",len);
/*strcat(palabra, otraPalabra);

   strcat(palabra,"!");*/
/*strupr(palabra);
    strlwr(otraPalabra);*/

/*if(strcmp(palabra, otraPalabra)==0)
   {
        printf("Son iguales");
   }*/

    /*int len;
    len = strlen(palabra);
    printf("len: %d", len);*/

    //strcpy(otraPalabra,palabra);
    /*
        char apellido[20];
    char nombre[20];
    char apellidoNombre[41];
    int i;
    int len;
    //int len;
    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(apellido);
    //scanf("%s",apellido);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    //scanf("%s",nombre);
    strcat(apellidoNombre,nombre);
    strcat(apellidoNombre,", ");
    strcpy(apellidoNombre,apellido);
    //strcpy(apellido,nombre);
    strlwr(apellidoNombre);
    len=strlen(apellidoNombre);
    for(i=0; i<len;i++){
        if(i==0){
            apellidoNombre[i]=toupper(apellidoNombre[i]);

        }else{
            if(apellidoNombre[i]=' '){
                apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
            }
        }
    }
    return 0;

*/

