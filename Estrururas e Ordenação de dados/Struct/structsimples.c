#include <stdio.h>

int main() {
  // definindo struct
   struct ficha_aluno{
      char nome[40];
      int numero;
      float nota;
   };// sempre fechar com ;
  // criando uma instacia para aluno
  struct ficha_aluno aluno;
  printf("Nome do Aluno:");
  //fgets fução do struct
  //stdin que ira vir do teclado
  fgets(aluno.nome,40,stdin);

  printf("Numero do Aluno:");
  scanf("%d",&aluno.numero);

  printf(" Nome: %s  numero: %d",aluno.nome,aluno.numero);



}
