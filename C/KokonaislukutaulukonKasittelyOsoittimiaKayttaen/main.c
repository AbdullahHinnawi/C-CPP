#include <stdio.h>
int main() {
    int numerot[10]={0};
    int *ptr;
    ptr = numerot;

    printf("\nSyötä viisi numeroa: \n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", ptr + i);
        i++;
    }

    printf("\nTaulukon alkio    muistiosoite 10-järjestelmän lukuna     muistiosoite heksadesimaalimuodossa\n");
    for (int i = 0; i < 10; ++i) {
        printf("\n  %d\t\t\t\t\t\t  %d\t\t\t\t\t\t  %p\n", *(ptr + i), (ptr + i), (ptr + i));
    }
    return 0;
}