#include <stdio.h>
#include <stdint.h>

uint8_t global_counter = 0;

void test(void)
{
    uint8_t local_counter = 10;
    static uint8_t static_counter = 10;

    local_counter += 5;
    static_counter += 5;

    printf("local  = %u\n", local_counter);
    printf("static = %u\n\n", static_counter);

}

int main(void)
{
    test();
    test();
    test();

    return 0;
}