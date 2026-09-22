#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t reg = 0x24;   // 00100100

    // tutaj Twoje operacje
    reg |= (1 << 1);
    
    printf("Result is: %b\n", reg);

    reg &= ~(1 << 5);
    printf("Result of make 0 value of 5 bit is: %b\n", reg);
    
    reg ^= (1 << 2);
    printf("Result of switch  value of 2 bit is: %b\n", reg);

    if (reg & (1 << 4)){
        printf("bit is set");
    }
    else
    {
        printf("bit is not set");
    }

    return 0;
}