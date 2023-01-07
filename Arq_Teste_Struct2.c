#include <stdio.h>

void main() {

    struct Lista{
    
    char nome[40];
    float nota;
    int idade;
    }; 

    struct Lista aluno[10];

    aluno[0].nota = 9.5;

    printf("Nome do Aluno: ");
    scanf("%s", &aluno[0].nome);

    printf("Idade do Aluno: ");
    scanf("%d", &aluno[0].idade);

    printf("Nome do aluno: %s\nIdade do Aluno: %d\nNota: %.2f", aluno[0].nome,aluno[0].idade,aluno[0].nota);
}