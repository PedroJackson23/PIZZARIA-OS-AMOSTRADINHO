#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void titulo() {
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
} Pizza;

typedef struct {
    int id;
    char *nome;
    float preco;
} Refri;

typedef struct {
    int id_pizza;
    char sabor[50];
    char rua[50];
    char bairro[50];
    int endereco;
    long int id_do_pedido;
    float preco;
    int id_bebida;
    char bebida[50];
} Pedido;

int main() {
    FILE *gravar_pedido;
    srand(time(NULL));
    setlocale(LC_ALL, "");
    titulo();
    int id_cliente;
    char nome_arquivo[50];

    id_cliente = rand()%100000;

    Pedido pedido = {};
    Pizza cardapio[15] = {
        {1, "Mussarela", "queijo mussarela, molho de tomate e oregano.", 30.50},
        {2, "Calabresa", "calabresa, cebola, muçarela, azeitonas e oregano.", 32.00},
        {3, "Portuguesa", "presunto, muçarela, ovos, cebola, pimentão, azeitonas e oregano.", 35.00},
        {4, "Frango com Catupiry", "frango desfiado, creme de catupiry, muçarela e oregano.", 36.50},
        {5, "Marguerita", "queijo, molho de tomate, manjericão fresco e oregano.", 33.00},
        {6, "Quatro Queijos", "queijo parmesão, queijo mucarela, queijo gorgonzola, queijo cheddar, e oregano.", 34.00},
        {7, "Peperoni", "fatias de peperoni, queijo mussarela e oregano.", 31.50},
        {8, "Vegetariana", "legumes variados, muçarela e oregano.", 32.50},
        {9, "Camarão", "camarão, muçarela e oregano.", 33.50},
        {10, "Carioca", "bacon, batata frita, muçarela e oregano.", 34.50},
        {11, "Beijinho", "mucarela, chocolate branco e coco ralado.", 34.50},
        {12, "Brigadeiro", "mucarela, creme de avela e brigadeiro.", 34.50},
        {13, "Banana", "banana, chocolate e mucarela.", 34.50},
        {14, "Morango", "Morango, chocolate e mucarela.", 34.50},
        {15, "M&M", "m&m, chocolate e mucarela.", 34.50}
    };

    Refri menu[10] = {
        {1, "Coca-Cola 2L", 12.00},
        {2, "Sucuzin Natural 2L", 5.00},
        {3, "Fanta Uva 2L", 10.00},
        {4, "Fanta Laranja 2L", 10.00},
        {5, "Guaraná 2L", 10.00},
        {6, "Pepsi 2L", 10.00},
        {7, "Coca Lata", 5.00},
        {8, "Guaraná Lata", 4.00},
        {9, "Pepsi Lata", 4.00},
        {10, "Sem bebida", 0.00}
    };

    printf("\n\n");
    printf("=================================================================================\n");
    printf("                                  CARDÁPIO                                       \n");
    printf("=================================================================================\n");
    for (int i = 0; i < 15; i++) {
        printf("%d - %s    %.2f\n%s\n\n", i + 1, cardapio[i].nome, cardapio[i].preco, cardapio[i].descricao);
    }

    printf("=================================================================================\n");
    printf("Qual pizza você deseja escolher? Digite o id: ");
    scanf("%d", &pedido.id_pizza);

    for (int i = 0; i < 15; i++) {
        if (cardapio[i].id == pedido.id_pizza) {
            strcpy(pedido.sabor, cardapio[i].nome);
            pedido.preco = cardapio[i].preco;
        }
    }

    printf("\n\n");
    printf("=================================================================================\n");
    printf("                             CARDÁPIO DE BEBIDAS                                 \n");
    printf("=================================================================================\n");
    for (int j = 0; j < 10; j++) {
        printf("%d - %s    %.2f\n", j + 1, menu[j].nome, menu[j].preco);
    }

    printf("=================================================================================\n");
    printf("Qual bebida você deseja escolher? Digite o id: ");
    scanf("%d", &pedido.id_bebida);

    for (int j = 0; j < 10; j++) {
        if (menu[j].id == pedido.id_bebida) {
            strcpy(pedido.bebida, menu[j].nome);
            pedido.preco += menu[j].preco;
        }
    }

    printf("Digite aqui seu Bairro: ");
    getchar();
    fgets(pedido.bairro, 50, stdin);
    pedido.bairro[strcspn(pedido.bairro, "\n")] = 0;

    printf("Digite aqui sua Rua: ");
    fgets(pedido.rua, 50, stdin);
    pedido.rua[strcspn(pedido.rua, "\n")] = 0;

    printf("Digite aqui o número de sua casa: ");
    scanf("%d", &pedido.endereco);

    pedido.id_do_pedido = (rand() % 9000000) + 1000000;

    sprintf(nome_arquivo, "cliente_%d.txt", id_cliente);

    gravar_pedido = fopen(nome_arquivo, "w");
    if (gravar_pedido == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(gravar_pedido, "ID do Pedido: %ld\nID da Pizza: %d\nSabor: %s\nID da Bebida: %d\nBebida: %s\nRua: %s\nBairro: %s\nNúmero: %d\nPreço: %.2f\n",
            pedido.id_do_pedido, pedido.id_pizza, pedido.sabor, pedido.id_bebida, pedido.bebida, pedido.rua, pedido.bairro, pedido.endereco, pedido.preco);

    fclose(gravar_pedido);

    printf("Informações gravadas com sucesso!\n");

    return 0;
}
