#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t jasnosc = 40;
    uint8_t* wsk = &jasnosc;
    
    printf("Jasnosc wynosi: %d\n", jasnosc);
    printf("Wsk wynosi: %p\n", (void( *))wsk);
    printf("&jasnosc wynosi: %p\n", (void( *))&jasnosc);
    printf("*wsk wynosi: %d\n",*wsk);
    
    
    *wsk = 80;
    printf("Jasnosc po zmianie: %d\n", jasnosc);
    printf("*wsk po zmianie: %d\n", *wsk);

    
    
    
    
    
    
    

    return 0;
}