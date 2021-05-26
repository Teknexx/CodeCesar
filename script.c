/* Code par TekneX */
/* https://github.com/Teknexx */

#include <stdio.h>
#include <stdlib.h>

unsigned char mot[] =
{    //inserez ici la chaine a decrypter, en hexadecimal
    0x5A,0x6B,0x71
};



int main() {
    int table = 256;
    int longueur = sizeof(mot),i,j,c;
    for (i = 0; i < table; i++){
        for (j = 0; j < longueur; j++){
          c = mot[j]-i;
          printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}

