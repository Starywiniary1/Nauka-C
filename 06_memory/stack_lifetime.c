#include <stdio.h>

void test(void)
{
    int liczba = 10;
    static int liczba_static = 10;

    liczba++;
    liczba_static++;

    printf("local  = %d, adres = %p\n",liczba, (void *)&liczba);

    printf("static = %d, adres = %p\n\n",liczba_static, (void *)&liczba_static);
}

int main(void)
{
    test();
    test();
    test();

    return 0;
}