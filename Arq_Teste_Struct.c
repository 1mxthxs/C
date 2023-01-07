#include <stdio.h>
void main(){

    struct Lista{
        char nome[40];
        float nota;
        int idade;
    }aluno; 

    aluno.nota = 9.5;

    printf("Nome do Aluno: ");
    scanf("%s", &aluno.nome);

    printf("Idade do Aluno: ");
    scanf("%d", &aluno.idade);

    printf("Nome do aluno: %s\nIdade do Aluno: %d\nNota: %.2f", aluno.nome,aluno.idade,aluno.nota);
}