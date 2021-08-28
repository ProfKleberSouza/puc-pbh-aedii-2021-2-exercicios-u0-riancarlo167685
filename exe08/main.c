#include <stdio.h>

int main() {
  int n,x;
  int menor, maior=0;
    
  do{
    scanf("%i", &x);
    if(x>0)
      printf("POSITIVO\n");
    else if(x<0)
      printf("NEGATIVO\n");
  }while(x!=0);

   return 0;
}