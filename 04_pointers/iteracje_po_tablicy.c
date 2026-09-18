#include <stdio.h>
#include <stdint.h>


void pokaz_tablice(const int *wsk, size_t liczba_elementow)
{
    
    
    for (size_t i = 0; i < liczba_elementow; i++)
        {
            printf("Wartosc spod aktualnego adresu wynosi: %d\n", *wsk);
            printf("Aktualny adres wynosi: %p\n\n", (void *)wsk);
            wsk++;
        }
}

int main(void)
{
    int tablica[] = {10, 20, 30, 40};
    int* wsk = tablica;
    size_t liczba_elementow = sizeof(tablica) / sizeof(tablica[0]);
    
    pokaz_tablice(tablica, liczba_elementow);
    return 0;
}