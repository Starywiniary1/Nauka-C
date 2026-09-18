#include <stdio.h>
#include <stdint.h>


void zmien(int *wsk_a, int *wsk_b)
{
    int tymczas_a = *wsk_a;
    int tymczas_b = *wsk_b;
    
    *wsk_a = tymczas_b;
    *wsk_b = tymczas_a;

}

int main(void)
{
    int a = 10;
    int* wsk_a = &a;
    
    
    int b = 20;
    int* wsk_b = &b;    
   
    
    printf("A wynosi: %d\n", a);
    printf("B wynosi: %d\n\n", b);
    
    zmien(&a, &b);
    
    printf("PO ZMIANIE A wynosi: %d\n", a);
    printf("PO ZMIANIE B wynosi: %d\n\n", b);
    

    return 0;
}