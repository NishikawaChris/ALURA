#include <stdio.h>

int main(){
printf("*************************************\n");
printf("Seja bem vindo ao jogo de advinhação!\n");
printf("*************************************\n");

int numerosecreto = 42;

int chute;

for(int tentativa = 1; tentativa <= 3; tentativa++){
        printf("Tentativa %d de 3\n", tentativa);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            //Para parar o programa quando o usuário acerta.
            
            break;
        }
        else{
            int maior = (chute > numerosecreto);
            if(maior) {
                printf("Seu chute foi maior que o número secreto!\n");
            } else{
                printf("Seu número é menor que o número secreto!\n");
            }
        }  
    }

    printf("FIM DE JOGO!!!\n");
}
