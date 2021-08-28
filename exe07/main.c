#include <stdio.h>

int main() {
  int n,x;
  int menor, maior=0;
  
  scanf("%i", &n);
  
  for(int i=0;i<n;i++){
    scanf("%i", &x);
    if(i==0)
      menor = x;
    if(x<menor)
      menor = x;
    else if(x>maior)
      maior = x;
  }
  printf("MENOR = %i\n", menor);
  printf("MAIOR = %i\n", maior);

   return 0;
}