#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *palabras[23] = {"pronostico", "podio", "marineros","gradas",
        "cepo","sardina","hombros","agitar","revuleto","oveja","limosna","espiral","debut","cartero","desafiar",
        "supermercado","castor","terminal","chimenea","abecedario","amenaza","olas","panorama"};
int main(void)
{

    int R = -1;
    while(R != 4)
    {
        printf("1. Start Game | 2. Instructions | 3. About | 4. Exit \n");
        printf("Ingrese una opción del menú: ");
        scanf("%d", &R);
        printf("\n");
        if( R == 1)
        {
            char Name[] = "";
            printf("Ingrese su nombre:   ");
            scanf("%s", Name);
            
            printf("%s", Name);
            printf("\n");
            char pal[] = "";
            char palfin[] = "";
            int rn = (rand() %23);
            strcat(pal, palabras[rn]);
            int largo = strlen(palabras[rn]); 
            for(int i = 0; i < largo; i++)
            {
              strcat(palfin, "_ ");
            }
            int opor = 0;
            int acir = 0;
            while (opor != 1)
            {

              printf("Nombre: %s\n", pal);
              printf("Intentos: %i/10\n", opor);
              printf("Aciertos: %i\n", acir);
              printf("Palabra: \n");
              opor = 1;
            }
            

        }
        else if (R == 2)
        {
            printf("Bienvenido a HangMan, como jugador tendrá 10 intentos \n para tratar de adivina una palabra aleatoria. \n * Podrá ingresar letras o texto.\n * Se le contarán como intento si vuelve a poner la misma letra dos veces.\n * No puede ingresar número. \n * Si ingresa una palabra y no es la correcta, \n perderá automáticamente. \n\n\n");
        }
        else if (R == 3)
        {
            printf("Carlos Manuel Alvarado Andrade 20200118\n");
            printf("Cmalvarado@ufm.edu\n");
            printf("HangMan Carlos Alvarado\n\n\n");
        }
        else
        {
            break;
        }
    }
    

    return 0;
}