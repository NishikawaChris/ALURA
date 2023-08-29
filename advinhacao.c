#include <stdio.h>

int main(){
printf("*************************************\n");
printf("Seja bem vindo ao jogo de advinhação!\n");
printf("*************************************\n");

int numerosecreto = 42;
int chute;

    printf("Qual o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute == numerosecreto) {
        printf("Parabéns! Você acertou!\n");
    }
    else{
        if(chute > numerosecreto) {
            printf("Seu chute foi maior que o número secreto!\n");
        }
        if(chute<numerosecreto) {
            printf("Seu número é menor que o número secreto!\n");
        }
        
    }
}