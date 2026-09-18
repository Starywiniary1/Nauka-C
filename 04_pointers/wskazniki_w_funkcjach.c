#include <stdio.h>
#include <stdint.h>


void ustaw_jasnosc(uint8_t *wsk_jasnosc)
{
    *wsk_jasnosc = 80;
    
    
    
}

int main(void)
{
    uint8_t jasnosc = 40;
    uint8_t* wsk = &jasnosc;
    
    printf("Jasnosc wynosi: %d\n", jasnosc);
    
    ustaw_jasnosc(&jasnosc);
    
    printf("Jasnosc po zmianie: %d\n", jasnosc);
    printf("*wsk po zmianie: %d\n", *wsk);


    return 0;
}