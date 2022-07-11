#include <stdio.h>

int main(){
    char name[10];
    int idade;
    float altura;

    printf("Digite seu nome: %s", name);
    gets(name);

    printf("Digite sua idade: %d", idade);
    scanf("%d", &idade);

    printf("Digite sua altura: %f", altura);
    scanf("%f", &altura);

    printf("Meu nome é %s, tenho %d e minha altura é %f", name, idade, altura);
    return 0;    
}