#include <stdio.h>
#include <libprg/libprg.h>

int main(void) {
    int a = 1, b = 2;

    result_t r = compute(a, b, SUM);
    printf("%d + %d = %8.2f", a, b, r.value);

    return 0;
}