#include <stdio.h>
int diaglobal = 10;

int main(int argc, char**argv)
{
    int *p1;
    int diaLocalDyn = 25;
    static int diaLocalSta = 30;
    printf("'p1' está alocando em %p\n", &p1);
    p1 = &diaglobal;
    printf("'p1' em 'diaGlobal' (%p), contém %d\n", p1, *p1);
    p1 = &diaLocalDyn;
    printf("'p1' em 'diaLocalDyn (%p), contém %d\n", p1, *p1);
    p1 = &diaLocalSta;
    printf("'p1' em 'diaLocalSta' (%p), contém %d\n", p1, *p1);

    return 0;
}