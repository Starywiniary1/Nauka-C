#include <stdio.h>
#include <stdint.h>

int suma_tablicy(const int8_t tablica[], size_t liczba_elementow)
{
    int suma = 0;
    for (int a = 0; a<liczba_elementow; a++)
        {
            suma = suma + tablica[a];
        }
    printf("Suma wynosi: %d", suma);
    return suma;
    
    
}

int main(void)
{
    
    int8_t temperatury[] = {22, 1, 11, 3, 4, 30, 55, 2};
    size_t liczba_elementow = sizeof(temperatury) / sizeof(temperatury[0]);
    int suma = suma_tablicy(temperatury, liczba_elementow);
    
    return 0;
}