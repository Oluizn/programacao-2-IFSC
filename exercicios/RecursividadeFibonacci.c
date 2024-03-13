#include <stdio.h>

void fibonacci_i(int n){
    int j=0, k=1, aux;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", j);
        aux = j + k;
        j = k;
        k = aux;
    }
}

int fibbonacci_r(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci_r(n-1) + fibbonacci_r(n-2));
   }
}
int main(){
    fibonacci_i(8);
    printf("\n");
    for(int i = 0;i<8;i++) {
      printf("%d ",fibbonacci_r(i));
    }
    printf("\n");
    return 0;
}