/* Implementacao do jogo adivinhacão 
 * Finalizando o jogo.
 * by: Wildes Sousa
 */
// incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definindo as constantes
#define NUMERO_DE_TENTATIVAS 3

int main() {
	// imprimindo cabecalho bonito do jogo
printf("\n");
printf("$$$$$$$                                    $$     $$  $$                   $$                $$  \n");
printf("$$    $$                                   $$     $$                       $$                $$  \n");
printf("$$    $$   $$$$$$$$   $$$$$$$$$$$$         $$     $$  $$   $$$$$$$$  $$$$$$$$  $$$$$$$$      $$  \n");
printf("$$$$$$$    $$    $$   $$   $$   $$          $$   $$   $$   $$    $$  $$    $$  $$    $$      $$  \n");
printf("$$    $$   $$$$$$$$   $$   $$   $$           $$ $$    $$   $$    $$  $$    $$  $$    $$      $$  \n");
printf("$$    $$   $$         $$   $$   $$            $$$     $$   $$    $$  $$    $$  $$    $$          \n");
printf("$$$$$$$    $$$$$$$$   $$   $$   $$  $$         $      $$   $$    $$  $$$$$$$$  $$$$$$$$      $$  \n");
printf("                                     $                                                           \n");


printf("\n\t\t*****************************************************************************\n");
printf("\t\t*                             TO THE GUESING GAME !!!                       *\n");
printf("\t\t*****************************************************************************\n");

    
    printf("\n\n");
    printf("\t\t\t\t\t\t          P  /_\\  P                              \n");
    printf("\t\t\t\t\t\t         /_\\_|_|_/_\\                            \n");
    printf("\t\t\t\t\t\t     n_n | ||. .|| | n_n         Are you ready     \n");
    printf("\t\t\t\t\t\t     |_|_|nnnn nnnn|_|_|           to play?       \n");
    printf("\t\t\t\t\t\t    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("\t\t\t\t\t\t    |_____| ' _ ' |_____|                         \n");
    printf("\t\t\t\t\t\t          \\__|_|__/                              \n");
    printf("\n\n");

    // declarando variaveis que serao usadas mais a frente
    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;

    // definindo a quantidade de pontos inicial
    double pontos = 1000;

    // gerando um numero secreto aleatorio
    srand(time(0));
    int numerosecreto = rand() % 100;
    
	// escolhendo o nivel de dificuldade
    printf("\t\tQual o nível de dificuldade?\n");
    printf("\t\t(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("\t\tEscolha: ");

	printf("\t\t");
    scanf("%d", &nivel);

    switch(nivel) {
        case 1:
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 15;
            break;
        default:
            totaldetentativas = 6;
            break;
    }

    // loop principal do jogo
    for(int i = 1; i <= totaldetentativas; i++) {

        printf("\t\t-> Tentativa %d de %d\n", i, totaldetentativas);

        printf("\t\tChute um número: ");
        scanf("%d", &chute);

        // tratando chute de numero negativo
        if(chute < 0) {
            printf("\t\tVocê não pode chutar números negativos\n");
            i--;
            continue;
        }

        // verifica se acertou, foi maior ou menor
        acertou = chute == numerosecreto;

		if(acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("\n\t\tSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\n\t\tSeu chute foi menor do que o número secreto!\n\n");
        }

        // calcula a quantidade de pontos
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {
		printf(" \t\t      \\|/ ____ \\|/    \n");
        printf(" \t\t       @~/ ,. \\~@      \n");
        printf(" \t\t      /_( \\__/ )_\\    \n");
        printf(" \t\t         \\__U_/        \n");

        printf("\n\t\tVocê perdeu! Tente novamente!\n\n");
    }
	printf("\n\t\t\tFim de jogo!\n\n");
printf("______________________________________________________________\n");
printf("\n\tCopyright Ⓒ  2021 - by Wildes Sousa Ⓡ");
printf("\n\tReferência: casa_do_codigo.\n\t\t\t    ialg - UFLA-MG.\n\n");

}

