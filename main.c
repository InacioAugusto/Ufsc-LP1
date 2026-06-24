#include <stdio.h>
#include <stdbool.h>

bool localizar_item(int numero, int *v, int tamanho);
bool localizar_itemr(int numero, int *v, int tamanho, int pos);

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 80, 30, 33};

    if (localizar_itemr(4, vetor, sizeof(vetor)/sizeof(int), 0)) {
        printf("achou\n");
    }
    else {
        printf("não achou\n");
    }

    return 0;
}

bool localizar_item(int numero, int *v, int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
        if (*(v+i) == numero) return true;
        return false;
    }
}

bool localizar_itemr(int numero, int *v, int tamanho, int pos)
{
    if (*(v+pos) == numero) return true;
    if (pos == tamanho) return false;
    localizar_itemr(numero, v, tamanho, pos+1);
}