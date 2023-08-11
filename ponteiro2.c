#include <stdio.h>
int main(int argc, char** argv)
{
    int ano[5] = {1958, 1962, 1970, 1994, 2002};
    int *pi = ano;
    for (int i = 0; i < sizeof(ano)/sizeof(int); i++) {
        printf( "'pi'+i apontando para %p \n",(int *) pi+i);
        printf( "Valor apontado: %d \n", *(pi+i));
    }
    return 0;
}
/* Equivalente sem utilizar o ‘i’ no apontamento:
for (int i = 0; i < sizeof(ano)/sizeof(int); i++) {
printf("'pi' apontando para %p\n",(int *) pi);
printf("Valor apontado: %d\n", *pi);
pi++;
}*/