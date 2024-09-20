#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void titulo(){
printf("  ___ ___ ________  _   ___ ___   _      ___  ___     _   __  __  ___  ___ _____ ___   _   ___ ___ _  _ _  _  ___  ___ \n");
printf(" | _ \\_ _|_  /_  / /_\\ | _ \\_ _| /_\\    / _ \\/ __|   /_\\ |  \\/  |/ _ \\/ __|_   _| _ \\ /_\\ |   \\_ _| \\| | || |/ _ \\/ __|\n");
printf(" |  _/| | / / / / / _ \\|   /| | / _ \\  | (_) \\__ \\  / _ \\| |\\/| | (_) \\__ \\ | | |   // _ \\| |) | || .` | __ | (_) \\__ \\\n");
printf(" |_| |___/___/___/_/ \\_\\_|_\\___/_/ \\_\\  \\___/|___/ /_/ \\_\\_|  |_|\\___/|___/ |_| |_|_\\_/ \\_\\___/___|_|\\_|_||_|\\___/|___/\n");


}

typedef struct {
int id;
char *nome;
char *descricao;
float preco;
}Pizza;

typedef struct {
int id_pizza;
char sabor[50];
char rua[50][50];
char bairro[50][50];
int endereco;
long int id_do_pedido;
float preco;
}Pedido;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");
    titulo();
Pedido pedido= {};
Pizza cardapio[10] = {
        {1, "Mussarela", "queijo mussarela, molho de tomate e oregano.", 30.50},
        {2, "Calabresa", "calabresa, cebola, muçarela, azeitonas e oregano.", 32.00},
        {3, "Portuguesa", "presunto, muçarela, ovos, cebola, pimentão, azeitonas e oregano.", 35.00},
        {4, "Frango com Catupiry", "frango desfiado, creme de catupiry, muçarela e oregano.", 36.50},
        {5, "Marguerita", "queijo, molho de tomate, manjericão fresco e oregano.", 33.00},
        {6, "Quatro Queijos", "queijo parmesão, queijo mucarela, queijo gorgonzola, queijo cheddar, e oregano.", 34.00},
        {7, "Peperoni", "fatias de peperoni, queijo mussarela e oregano.", 31.50},
        {8, "Vegetariana", "legumes variados, muçarela e oregano.", 32.50},
        {9, "Camarão", "camarão, muçarela e oregano.", 33.50},
        {10, "Carioca", "bacon, batata frita, muçarela e oregano.", 34.50}
    };
    printf("\n\n");
    printf("\n=================================================================================\n");
    printf("                                  CARDAPIO                                        \n");
    printf("=================================================================================\n");
    for(int i = 0; i < 10; i++){
        printf("%d - ", i+1);
        printf("%s", cardapio[i].nome);
        printf("    %.2f\n", cardapio[i].preco);
        printf("%s\n", cardapio[i].descricao);
        printf("\n");
    }
    printf("=================================================================================\n");
    printf("qual pizza você deseja escolher? Digite o id: ");
    scanf("%d", &pedido.id_pizza);
    for(int i = 0; i <10; i++){
        if(cardapio[i].id == pedido.id_pizza){
            strcpy(pedido.sabor, cardapio[i].nome);
            pedido.preco = cardapio[i].preco;
        }
    }
    printf("Digite aqui seu Bairro: ");
    getchar();
    scanf("%[^\n]s", pedido.bairro);
    printf("Digite aqui sua Rua: ");
    getchar();
    scanf("%[^\n]s", pedido.rua);
    printf("Digite aqui o numero de sua casa: ");
    getchar();
    scanf("%d", &pedido.endereco);
    pedido.id_do_pedido = (rand() % 9000000) + 1000000;


    return 0;
}
