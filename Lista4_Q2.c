#include <stdio.h>
#include <stdlib.h>

struct DadosAluno {
  char nome[20];
  int idade;
};

int main() {
  struct DadosAluno dados;
  printf("Digite o nome do aluno: \n");
gets(dados.nome);
  printf("Digite a idade do aluno: \n");
  scanf("%i", &dados.idade);
  system("cls");
  printf("Nome do aluno: %s\nIdade do aluno: %i", dados.nome, dados.idade);
  return 0;
}