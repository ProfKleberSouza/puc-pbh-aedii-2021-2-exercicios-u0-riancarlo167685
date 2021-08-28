#include <stdio.h>
#include <stdlib.h>

int main() {
  int X, Y, Z;
  scanf("%i %i %i", &X, &Y, &Z);
  
  if((abs(Y-Z)<X && X<(Y + Z))&&(abs(X-Z)<Y && Y<(X + Z))&&(abs(X-Y)<Z && Z<(X + Y))){
    if(X==Y && Y==Z)
      printf("TRIANGULO EQUILÁTERO");
    else if(X!=Y && Y!=Z && X!=Z)
      printf("TRIANGULO ESCALENO");
    else if(X==Y || Y==Z || X==Z)
      printf("TRIANGULO ISOSCELES");
    }else
      printf("OS LADOS NAO FORMAM UM TRIANGULO");

   return 0;
}