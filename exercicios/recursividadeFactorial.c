#include <stdio.h>
// Fatorial com função recursiva e iterativa

int factorial_iterativa(int n){
    int fact, i;
    i = n;
    for(fact = 1; i > 1; i--)
        fact *= i;
    return fact;
}

int factorial_recursiva(int n){
    if (n==0)
        return 1;
    return n*factorial_recursiva(n-1);
}

int main()
{
    printf("Função iterativa fatorial de %d é %d\n", 5, factorial_iterativa(5));
    printf("Função recursiva fatorial de %d é %d\n", 5, factorial_recursiva(5));
    return 0;
}