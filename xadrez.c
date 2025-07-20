#include <stdio.h>
 
int main() {

    int torre = 5; //Declara as contantes para o numero de casas

    printf("--- Movimentacao da Torre ---\n");
    printf("A Torre se move %d casas para a direita.\n", torre);

    // Loop for para simular a movimentacao da Torre

    for (int i = 0; i < torre; i++)
    {
        printf("Direita\n"); // Exibe a direcao da movimentacao
    }
    

    int rainha = 8;  //Declara as contantes para o numero de casas
    int contador_rainha = 0;  // Inicializa o contador para o loop while

    printf("\n--- Movimentacao da Rainha ---\n");
    printf("A Rainha se move %d casas para a esquerda.\n", rainha);

    // Loop while para simular a movimentacao da Rainha
    while (contador_rainha < rainha)
    {
        printf("Esquerda\n"); // Exibe a direcao da movimentacao
        contador_rainha++;    // Incrementa o contador
    }    

    int bispo = 5;    //Declara as contantes para o numero de casas diagonal  
    int contador_bispo = 0; // Inicializa o contador para o loop do-while
    
    printf("\n--- Movimentacao do Bispo ---\n");
    printf("O Bispo se move %d casas na diagonal superior direita.\n", bispo);

    // Loop do-while para simular a movimentacao do Bispo
    do  {
        printf("Cima\n");
        printf("Direita\n");
        contador_bispo++;            
    }  while (contador_bispo < bispo);


    printf("\n--- Movimentacao do Cavalo ---\n");
    printf("O cavalo se move 2 casas para baixo e 1 casa para esquerda.\n");
    int cavalo = 1; // controlar o movimento cavalo L

    while (cavalo--)
    {
        for ( int i = 0; i <2; i++)
        {
            printf("Baixo\n"); // imprime Cima
        }
        printf("Esquerda\n"); // imprime direita
    }
    


    return 0;
}
