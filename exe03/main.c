#include <stdio.h>

int main() {
    int n;
    scanf("%i", &n);

    if(n==0)
      printf("NUMERO NEUTRO");
    else{
      if(n%2==0)
        printf("NUMERO PAR");
      else
        printf("NUMERO IMPAR");
    if(n>0)
      printf(" POSITIVO");
    else
      printf(" NEGATIVO");
    }
    return 0;
}