# PIZZARIA-OS-AMOSTRADINHO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void titulo(){
    printf("  ___ ___ ________  _   ___ ___   _      ___  ___     _   __  __  ___  ___ _____ ___   _   ___ ___ _  _ _  _  ___  ___ \n");
printf(" | _ \\_ _|_  /_  / /_\\ | _ \\_ _| /_\\    / _ \\/ __|   /_\\ |  \\/  |/ _ \\/ __|_   _| _ \\ /_\\ |   \\_ _| \\| | || |/ _ \\/ __|\n");
printf(" |  _/| | / / / / / _ \\|   /| | / _ \\  | (_) \\__ \\  / _ \\| |\\/| | (_) \\__ \\ | | |   // _ \\| |) | || .` | __ | (_) \\__ \\\n");
printf(" |_| |___/___/___/_/ \\_\\_|_\\___/_/ \\_\\  \\___/|___/ /_/ \\_\\_|  |_|\\___/|___/ |_| |_|_\\_/ \\_\\___/___|_|\\_|_||_|\\___/|___/\n");


}

typedef struct {
int id;
char nome;
char rua;
int num_casa;
int sabor;
int bebida;
char bairro;
int borda;

}Pizza;

int main()
{
    titulo();

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



    return 0;
}
