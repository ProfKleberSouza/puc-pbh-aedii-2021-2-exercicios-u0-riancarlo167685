#include <stdio.h>

int main() {
  
  struct Alunos{
    char nome[20];
    int nota;
  };

  int n;
  int soma = 0;
  struct Alunos maior[3];
  struct Alunos aux;
  // Lê quantidade de alunos/notas
  scanf("%d", &n);
  struct Alunos aluno[n];

  // Inicializar vetor maior.nota
  for(int i=0;i<3;i++){
    maior[i].nota = 0;
  }

  // Lê nomes e notas / separa 3 alunos com maiores notas
  for(int i=0;i<n;i++){
    scanf("%s %d",aluno[i].nome,&aluno[i].nota);
    soma += aluno[i].nota;
    if(aluno[i].nota > maior[0].nota){
      maior[2] = maior[1];
      maior[1] = maior[0];
      maior[0] = aluno[i];
    }else if(aluno[i].nota > maior[1].nota){
      maior[2] = maior[1];
      maior[1] = aluno[i];
    }else if(aluno[i].nota > maior[2].nota){
      maior[2] = aluno[i];
    }
  }

  // Ordena em ordem alfabetica
  if(maior[0].nome[0] < maior[1].nome[0]){
    aux = maior[0];
    maior[0] = maior[1];
    maior[1] = aux;
  }else if(maior[1].nome[0] < maior[2].nome[0]){
    aux = maior[1];
    maior[1] = maior[2];
    maior[2] = aux;
  }else if(maior[2].nome[0] < maior[0].nome[0]){
    aux = maior[2];
    maior[2] = maior[0];
    maior[0] = aux;
  }

  // Imprime
  printf("NOTA MEDIA = %.1f\n",soma/(float)n);
  for(int i=0;i<3;i++){
    printf("%s %.1f\n",maior[i].nome,(float)maior[i].nota);
  }

  return 0;
}

//printf("%s %d\n",aluno[i].nome,aluno[i].nota);