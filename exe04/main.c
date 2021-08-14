#include <stdio.h>

int main() {
  int n1, n2, n3;
  scanf("%i %i %i", &n1, &n2, &n3);

  // MENOR
  if(n1<n2 && n1<n3)
    printf("MENOR = %i\n", n1);
  else if(n2<n1 && n2<n3)
    printf("MENOR = %i\n", n2);
  else if(n3<n1 && n3<n2)
    printf("MENOR = %i\n", n3);
  
  //MAIOR
  if(n1>n2 && n1>n3)
    printf("MAIOR = %i\n", n1);
  else if(n2>n1 && n2>n3)
    printf("MAIOR = %i\n", n2);
  else if(n3>n1 && n3>n2)
    printf("MAIOR = %i\n", n3);
  return 0;
}