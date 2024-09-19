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
        {1, "Mussarela", "Pizza com queijo mussarela e molho de tomate.", 30.50},
        {2, "Calabresa", "Pizza com calabresa, cebola e azeitonas.", 32.00},
        {3, "Portuguesa", "Pizza com presunto, queijo, ovos, cebola e azeitonas.", 35.00},
        {4, "Frango com Catupiry", "Pizza com frango desfiado e creme de catupiry.", 36.50},
        {5, "Marguerita", "Pizza com queijo, molho de tomate e manjericão fresco.", 33.00},
        {6, "Quatro Queijos", "Pizza com uma mistura de quatro queijos diferentes.", 34.00},
        {7, "Peperoni", "Pizza com fatias de peperoni e queijo mussarela.", 31.50},
        {8, "Vegetariana", "Pizza com legumes variados e queijo.", 32.50},
        {9, "Napolitana", "Pizza com molho de tomate, queijo e anchovas.", 33.50},
        {10, "Carbonara", "Pizza com molho branco, bacon e queijo.", 34.50}
    };



    return 0;
}
