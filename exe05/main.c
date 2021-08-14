#include <stdio.h>

int main() {
   int n1, n2, n3, n4;
   float media;

   scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

   media = (float)(n1+n2+n3+n4)/4;

   if(media>=6)
    printf("NOTA = %.1f (APROVADO)", media);
   else
    printf("NOTA = %.1f (REPROVADO)", media);
   
   return 0;
}