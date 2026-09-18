#include <stdio.h>
#include <stdint.h>


void zglos_blad(uint8_t *wsk_licznik)
{
    (*wsk_licznik)++;

}

int main(void)
{
    uint8_t licznik_bledow = 0;
    uint8_t* wsk = &licznik_bledow;
    
    zglos_blad(&licznik_bledow);
    printf("Ilosc bledow wynosi: %d\n", licznik_bledow);
    
    zglos_blad(&licznik_bledow);
    printf("Ilosc bledow wynosi: %d\n", licznik_bledow);

    zglos_blad(&licznik_bledow);
    printf("Ilosc bledow wynosi: %d\n", licznik_bledow);
    
    return 0;
}