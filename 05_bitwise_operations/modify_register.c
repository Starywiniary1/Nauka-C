#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0b01110101;

    printf("Przed: %b\n", reg);

    // 1. Wyzeruj bity 4-5
    reg &= ~((1 << 4) | (1 << 5 ));

    printf("Po wyzerowaniu pola: %b\n", reg);

    // 2. Wpisz wartosc 2 do bitow 4-5
    reg |= (1 << 5);
    printf("Po ustawieniu SPEED = 2: %b\n", reg);

    return 0;
}