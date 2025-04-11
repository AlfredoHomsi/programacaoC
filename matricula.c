#include <stdio.h>

int main (){
    int idade,matricula;
    float altura;
    char nome[50];

    printf("digite sua idade: \n");
    scanf("%d",&idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite seu nome : \n");
    scanf("%s", &nome);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s \n",nome);
    printf("Matricula do aluno: %d \n",matricula);
    printf("Idade do aluno: %d \n",idade);
    printf("Altura do aluno: %f \n",altura);
    

    return 0;

}