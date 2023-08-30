#include <stdio.h>

//Tudo que vem acompanhado de # chama-se diretiva.
//Por convenção, escreve-se as constantes em caixa alta e separadas por underscore.
//#define NUMERO_DE_TENTATIVA 5

int main(){
printf("*************************************\n");
printf("Seja bem vindo ao jogo de advinhação!\n");
printf("*************************************\n");

int numerosecreto = 42;

int chute;
int ganhou = 0;
int tentativas = 1;

//O "for" é um loop ideal para quando o usuário sabe o número exato de tentativas.
//for(int tentativa = 1; tentativa <= NUMERO_DE_TENTATIVA; tentativa++){
//Com a variável while
while(ganhou == 0) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

    //Este código serve para impedir que o usuário informe um número negativo.
    if(chute < 0) {
        printf("Você não pode informar um número negativo!\n");
       //tentativa--;

        //Este código faz o programa parar na execução do bloco e ir direto par ao "tentativa++"
        continue;
    }

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
   //int menor = chute < numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            
            //Para parar o programa quando o usuário acerta.
           //break;
           ganhou = 1;
        }
      
      //Se a condição de um else if for verdadeira, o programa não irá mais compilar os demais.
       else if(maior) {
             printf("Seu chute foi maior que o número secreto!\n");
        }
            
        else {
            printf("Seu número é menor que o número secreto!\n");
        } 

        tentativas = tentativas + 1;
    }

    printf("FIM DE JOGO!!!\n");

    printf("Você acertou o número secreto em %d tentativas!\n", tentativas);
}
