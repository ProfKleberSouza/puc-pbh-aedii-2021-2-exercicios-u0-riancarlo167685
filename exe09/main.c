#include <stdio.h>

int main() {
  int n,nota;
  
  scanf("%d",&n);
  char nome[n][20];
  
  scanf("%s %d",nome[n],&nota);
  printf("%s %d",nome[0],nota);

  return 0;
}