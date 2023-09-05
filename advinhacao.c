#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Tudo que vem acompanhado de # chama-se diretiva.
//Por convenção, escreve-se as constantes em caixa alta e separadas por underscore.
//#define NUMERO_DE_TENTATIVA 5


int main(){

printf("\n\n");
printf("        / \\               / \\                                 \n");
printf("       /   \\             /   \\                                \n");
printf("      (_____)           (_____)                                 \n");
printf("       |   |  _   _   _  |   |           Bem vindo ao jogo      \n");
printf("       | O |_| |_| |_| |_| O |            da Advinhação!!!      \n");
printf("       |-  |          _  | - |                                  \n");    
printf("       |   |   - _^_     |   |                                  \n");
printf("       |  _|    //|\\\\  - |   |                                \n");
printf("       |   |   ///|\\\\\\   |  -|                               \n");
printf("       |-  |_  |||||||   |   |                                  \n");
printf("       |   |   |||||||   |-  |                                  \n");
printf("       |___|___|||||||___|___|                                  \n");

//Essa função ajuda a definir um número aleatório a ser advinhado, utilizando como base os segundos atuais.
//A função altera o cálculo da semente.
int segundos = time(0);
srand(segundos);

//A variável rand retornará um valor aleatório, que pode ser um número com muitos dígitos.
int numeroGrande = rand();

//Essa função restringe as possibilidades de números aleatórios para até 100, 
//trazendo como resultado o resto de uma divisão por 100.
int numerosecreto = numeroGrande % 100;
int chute;
int tentativas = 1;
double pontos = 1000;

int acertou = 0;

//Implementação de sistema de dificuldade.
int nivel;
printf("Qual o nível de dificuldade?\n");
printf("1. Fácil\n2. Médio\n3. Difícil\n\n");
printf("Escolha: ");
scanf("%d", &nivel);

int numerodetentativas;

//Pode-se usar a função switch para simplificar o uso de if para implementar um processo de escolha.
//Para que o switch não leia todas as alternativas, é preciso incluir o break
    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 5;
            break;
    }
   // if (nivel == 1) {
    //    numerodetentativas = 20;
    //}
    //else if (nivel == 2) {
    //    numerodetentativas = 15;
    //} else {
      //  numerodetentativas = 5;
    //}

//O "for" é um loop ideal para quando o usuário sabe o número exato de tentativas.
for(int tentativa = 1; tentativa <= numerodetentativas; tentativa++) {
//É possível substituir numerodetentativas por NUMERO_DE_TENTATIVA caso a diretiva #define seja utilizada.
//Com a variável while
//while(1) {
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

     acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
   //int menor = chute < numerosecreto;

        if(acertou) {
            //printf("Parabéns! Você acertou!\n");
            
            //Para parar o programa quando o usuário acerta.
           break;
            }
      
      //Se a condição de um else if for verdadeira, o programa não irá mais compilar os demais.
       else if(maior) {
             printf("Seu chute foi maior que o número secreto!\n");
        }
            
        else {
            printf("Seu número é menor que o número secreto!\n");
        } 

        tentativas++;
        //Esta variável foi feita para contagem de pontos ao fim do programa.
        //Pode-se utilizar a função abs para converter um número negativo em positivo.
        //Para tanto, é preciso incluir a biblioteca <stdlib.h>.
        //Com isso, a pontuação não poderá ser maior que 1000 pontos, sem utilizar mais um if.
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("FIM DE JOGO!!!\n");

    if(acertou) {
    
        printf("\n\n");
        printf("              .ssSSSSss.                        \n");
        printf("            .ER'      `AM.                      \n");
        printf("          .ST'          `CS.                    \n");
        printf("         .E'  .S.    .S.  `S.                   \n");
        printf("        .L'   SSS    SSS   `S.                  \n");
        printf("        S'    `S'    `S'    `S                  \n");
        printf("        S                    S                  \n");
        printf("        S                    S                  \n");
        printf("        S.  00          00   S                  \n");    
        printf("        `S. 000        000  S'                  \n");
        printf("         `S.  000    000  .S'                   \n");
        printf("          `SS.    00    .SS'                    \n");
        printf("            `SS.      .SS'                      \n");
        printf("              `SSssssSS'                        \n\n\n");
        
        printf("Você ganhou!!!\n");
        printf("Você acertou o número secreto em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    } else {
        printf("Você perdeu!!! Tente outra vez!\n");

    } 
}
