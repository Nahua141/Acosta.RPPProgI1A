#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}
void actualizarMuertos(ePais* pais, int muertosPorDia)
{
   return pais.muertos = muertosPorDia + pais.muertos;

}
void quitarVocales(char cadena[])
{
    for(int i = 0; i < strlen(cadena); i++)
    {

        if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
        {
            cadena[i] = ' ';
        }

    }
}
void ordenarCaracteres(char cadena[])
{
    char auxiliar;

    for(int i = 0; i < strlen(cadena) - 1; i++)
    {

        for(int j = i + 1; j < strlen(cadena); j++)
        {
            if(cadena[i] > cadena[j])
            {
                auxiliar = cadena[j];
                cadena[j] = cadena[i];
                cadena[i] = auxiliar;
            }

        }
    }
}
