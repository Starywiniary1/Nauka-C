#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0b00000000;

    // 1. Ustaw jednocześnie bit 1 i bit 6
    reg |= (1 << 1) | (1 << 6);
    printf("Po ustawieniu bitow 1 i 6: %u\n", reg);

    // 2. Wyzeruj bit 1
    reg = ~(1 << 1);
    printf("Po wyzerowaniu bitu 1: %u\n", reg);

    // 3. Przelacz bit 6
    reg ^= (1 << 6);
    printf("Po przelaczeniu bitu 6: %b\n", reg);

    // 4. Sprawdz, czy bit 6 jest ustawiony

   if (reg & (1 << 6) )
    {
        printf("Bit 6 jest ustawiony\n");
    }
    else
    {
        printf("Bit 6 nie jest ustawiony\n");
    }

    return 0;
}