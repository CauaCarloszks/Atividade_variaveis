#include <stdio.h>

int main () {

    char nome[40];
    int idade;
    char matricula[20];
    char endereco[60];
    char curso[40];
    int periodo;
    char disciplinas[100];

    printf("_______________");
    printf("Cadastro de alunos");
    printf("_______________");

    printf("\nNome: \n");
    fgets(nome, 40, stdin);
    fflush(stdin);

    printf("\nIdade: \n");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nMatricula: \n");
    fgets(matricula, 20, stdin);
    fflush(stdin);

    printf("\nCurso: \n");
    fgets(curso, 40, stdin);
    fflush(stdin);

    printf("\nEndereco: \n");
    fgets(endereco, 60, stdin);
    fflush(stdin);

    printf("\nPeriodo: \n");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDisciplinas: \n");
    fgets(disciplinas, 60, stdin);
    fflush(stdin);

    printf("_______________");
    printf("Dados registrados");
    printf("_______________");

    printf("Nome: %s, nome");
    printf("\n Idade: %d", idade);
    printf("\n Matricula: %s, matricula");
    printf("\n Endereço: %s, endereço");
    printf("\n Curso: %s, curso");
    printf("\n Periodo: %d", periodo);
    printf("\n Disciplinas: %s, disciplinas");
    printf("\n Mensalidade: %f, mensalidade");

    return 0;
}