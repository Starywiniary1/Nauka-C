#include <stdio.h>
#include <stdint.h>


void zglos_blad(uint8_t *wsk_licznik)
{
    (*wsk_licznik)++;
}

int main(void)
{
    int tablica[] = {10, 20, 30, 40};
    int* wsk = tablica;

    for (int i=0; i<4; i++)
    {
        printf("Tablica wynosi: %d,\nWskaznik wynosi:%d\n", tablica[i], *(wsk+i));
        printf("Wartosc tablicy[%d], wynosi: %d\n", i, tablica[i]);
        printf("Adres &tablicy[%d], wynosi: %p\n", i, (void *)&tablica[i]);
        printf("Adres wsk + %d, wynosi: %p\n",i,(void *) ((wsk+i)));
        printf("Wartosc *(wsk + %d), wynosi: %d\n\n", i, (*(wsk+i)));
    }


    return 0;
}