#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0b00000000;

    // 1. Ustaw tryb pracy na 2 w bitach 0-1
    reg |=  (1 << 1);
    printf("Result is: %b\n", reg);
    // 2. Ustaw bit enable = 1 na bicie 2
    reg |=  (1 << 2);
    printf("Result is: %b\n", reg);
    // 3. Ustaw predkosc = 3 w bitach 4-5
    reg |=  (1 << 4) | (1 << 5);
    
    printf("Result is: %b\n", reg);
    printf("reg = %u\n", reg);

    return 0;
}